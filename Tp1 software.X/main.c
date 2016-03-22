/* 
 * File:   main.c
 * Author: amulin, banthony, tbeauman, abary
 *
 * Created on March 22, 2016, 1:54 PM
 */

#include <p32xxxx.h>


/*
 * 
 */

int main() {

    LATFbits.LATF1 = 1;
    TRISFbits.TRISF1 = 0;
   // TRISDbits.TRISD8 = 1;
    while(1)
    {

    }
    return (0);
}