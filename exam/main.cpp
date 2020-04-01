#include "mbed.h"
#include "uLCD_4DGL.h"

uLCD_4DGL uLCD(D1, D0, D2); // serial tx, serial rx, reset pin;
PwmOut PWM1(D6);

int main()
{
    int i;
    float f;

    uLCD.cls();
    // basic printf demo = 16 by 18 characters on screen
    //Default Green on black text
    
    uLCD.printf("\n107061207\n");
    uLCD.color(GREEN);
    uLCD.line(10,40,40,40,0xFFFFFF);
    uLCD.line(10,40,10,70,0xFFFFFF);
    uLCD.line(40,40,40,70,0xFFFFFF);
    uLCD.line(10,70,40,70,0xFFFFFF);
    PWM1.period(0.001);
    while(1){
        for(f = 0; f <= 1; f += 0.1){
            PWM1 = f;
            wait(0.1);
        }
        for(f = 1; f >= 0; f -= 0.1){
            PWM1 = f;
            wait(0.1);
        }

    }
  
}