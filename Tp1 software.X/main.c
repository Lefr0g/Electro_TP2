/* 
 * File:   main.c
 * Author: amulin, banthony, tbeauman, abary
 *
 * Created on March 22, 2016, 1:54 PM
 */

#include <p32xxxx.h>
#include "../"

/*
 * 
 */

int main() {

    u8 frontButton;
    
    LATFbits.LATF1 = 1;
    TRISFbits.TRISF1 = 0;
    u8 = PORTDbits.RD8;
   //  TRISDbits.TRISD8 = 1;
    while(1)
    {
        if(!PORTDbits.RD8)
            LATFbits.LATF1 = 0;
    }
    return (0);
}