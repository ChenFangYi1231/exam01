#include "mbed.h"
#include "uLCD_4DGL.h"

uLCD_4DGL uLCD(D1, D0, D2); // serial tx, serial rx, reset pin;

int main()
{
    int i;

    uLCD.cls();
    // basic printf demo = 16 by 18 characters on screen
    //Default Green on black text
    
    uLCD.printf("\n107061207\n");
    uLCD.color(GREEN);
    uLCD.line(10,40,40,40,0xFFFFFF);
    uLCD.line(10,40,10,70,0xFFFFFF);
    uLCD.line(40,40,40,70,0xFFFFFF);
    uLCD.line(10,70,40,70,0xFFFFFF);
}