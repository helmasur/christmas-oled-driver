
#include "mcc_generated_files/mcc.h"
#include <stdlib.h>
#include "ugui.h"



void tick(void){
    IO_RB7_SetHigh();
    __delay_us(1);
    IO_RB7_SetLow();
    __delay_us(1);
}

void eternal(void){
    while(1){
        LED4_SetHigh();
        __delay_ms(25);
        LED4_SetLow();
        __delay_ms(1500);
    }
}

//================ I2C BASICS ================================

void i2cWait(){
    //To be run after every I2C send to make sure the line is ready.
    while(R_nW || (SSPCON2 & 0x1F));
    return;
}

//================ SSD1306B I2C FUNCTIONS =====================
void oled_cmd(char d){
    // Send command
    i2c_driver_TXData(0x80); // control byte: 1000 0000
    i2cWait();
    i2c_driver_TXData(d);
    i2cWait();
}
void oled_data(char d){
    // Single data send
    i2c_driver_TXData(0xC0); // control byte: 1100 0000
    i2cWait();
    i2c_driver_TXData(d);
    i2cWait();
}
void oled_co(void){
    /*  Continous data control byte, after this all communication will be
        interpreted as data. Use i2c_driver_stop() to end this state. */
    i2c_driver_TXData(0x40); // control byte: 0100 0000
    i2cWait();
}
void oled_codata(char d){
    // Continous data, use after oled_co()
    i2c_driver_TXData(d);
    i2cWait();
}

//================ DISPLAY FUNCTIONS ==========================
//Display buffer
/*The display used for this project features I2C only and
only in one direction so this buffer is needed to be able
to manipulate single pixels. */
unsigned char page0 [64] = {};
unsigned char page1 [64] = {};
unsigned char page2 [64] = {};
unsigned char page3 [64] = {};

void send_buffer(void){
    // Send display buffer to SSD1306B
    unsigned char i = 0;
    while(i<64){
        oled_data(page0[i]);
        i++;
    }
    i = 0;
    while(i<64){
        oled_data(page1[i]);
        i++;
    }
    i = 0;
    while(i<64){
        oled_data(page2[i]);
        i++;
    }
    i = 0;
    while(i<64){
        oled_data(page3[i]);
        i++;
    }
}

void set_pixel(UG_S16 pos_x, UG_S16 pos_y, UG_COLOR pvalue){
    //Set a pixel in the buffer, this function as per uGUI prototype.
    unsigned char row = pos_y / 8;

    //pixel is to be 1
    if(pvalue){
        unsigned char data = 0b00000001 << (pos_y % 8);
             if(row==0) page0[pos_x] = page0[pos_x] | data; //OR
        else if(row==1) page1[pos_x] = page1[pos_x] | data; //OR
        else if(row==2) page2[pos_x] = page2[pos_x] | data; //OR
        else if(row==3) page3[pos_x] = page3[pos_x] | data; //OR
    }
    //pixel is to be 0
    else{
        unsigned char data = 0b00000001 << (pos_y % 8);
        data = ~data;
             if(row==0) page0[pos_x] = page0[pos_x] & data; //AND
        else if(row==1) page1[pos_x] = page1[pos_x] & data;
        else if(row==2) page2[pos_x] = page2[pos_x] & data;
        else if(row==3) page3[pos_x] = page3[pos_x] & data;
    }
}


//================================== MAIN ==================================
void main(void)
{


    //============== Initialize PIC and configure OLED controller ===========
    SYSTEM_Initialize();

    i2c_driver_open();

    DRES_SetLow(); // reset oled
    __delay_us(5);
    DRES_SetHigh();
    __delay_us(5);

    i2c_driver_start();
    i2cWait();
    i2c_driver_TXData(0x78); // adress+write
    i2cWait();

    oled_cmd(0xAD);// iref
    oled_cmd(0x10);// iref:150uA
    oled_cmd(0x8D);// pump on
    oled_cmd(0x14);// pump 7,5V

    //flips for right orientation
    oled_cmd(0xA1);
    oled_cmd(0xC8);

    //adress mode
    oled_cmd(0x20);
    oled_cmd(0b00);

    // column limits
    oled_cmd(0x21);
    oled_cmd(32);
    oled_cmd(95);

    //page limits
    oled_cmd(0x22);
    oled_cmd(4);
    oled_cmd(7);

    //oled on
    oled_cmd(0xAF);
    __delay_ms(200);

    //contrast max
    oled_cmd(0x81);
    oled_cmd(0xFF);
    //======SETUP END================================================


    //============ BEGIN APPLICATION CODE ==================
    UG_GUI gui; // Global GUI structure
    UG_Init(&gui, set_pixel, 64, 32); // Bind to set_pixel and set size of OLED.
    UG_FontSelect(&FONT_6X8);

    unsigned int pot_value;
    char text_pot[6];
    
    while(1){
    UG_FillScreen (C_BLACK);
    pot_value = ADC_GetConversion(POT);
    sprintf(text_pot, "%u", pot_value); //*(3300000/1023)/1000
    UG_PutString (0, 0, text_pot);
    send_buffer();
    }
    
    
    #define DELAYTIME 1500
    while(0){
        UG_FillScreen (C_BLACK);
        UG_PutString (0, 0,  "   GOD");
        UG_PutString (0, 10, "   JUL!");
        send_buffer();
        __delay_ms(DELAYTIME);

        UG_FillScreen (C_BLACK);
        UG_PutString (0, 0,  "   OCH");
        UG_PutString (0, 10,  "GOTT NYTT");
        UG_PutString (0, 20,  "   R!");
        send_buffer();
        __delay_ms(DELAYTIME);

        UG_FillScreen (C_BLACK);
        send_buffer();
        __delay_ms(400);
    }
    
    
    


     i2c_driver_stop();
     eternal();

}
