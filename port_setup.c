#include<stdio.h>
/*
Project: General purpose
Author: Umang A
Date:

Description:
- set


-Caution: when setting up any communications, make sure you reset the values as required by the communication protocol.


*/

void port_setup(char port_sel, char port_ansel, char port_active_low, char port_tris)
/*
port_char: the port which user wants to setup.
port_ansel: the value for the ansel register(in decimal). DO NOT MISS USE. ******WARNING******
port_active_low: If the port is active low, initially the value of the port must be set HIGH. MODIFY IF REQUIRED.(in decimal)
port_tris: tri state function of the port(in decimal). ******WARNING******

******WARNING******
REFER DATASHEET BEFORE SETTING UP PORT.
THIS MODULE'S INTENDED USE IS GENERAL PURPOSE/ RAPID SOFTWARE DEVELOPMENT USING PIC18.

ASSUMPTION: IF SYSTEM IS USING ATLEAST ONE ACTIVE LOW PIN ON A PORT, THE WHOLE PORT WOULD BE ACTIVE LOW.

*YOU CAN OVERRIDE THIS BY MANUALLING SETTING UP THAT PORT.

example
port_setup(A,4,2)
*/
{
    switch(port_sel)
    {
    case "A":
        ANSELA |= port_ansel;
        TRISA |= port_tris;
        if(port_active_low == true)
        {
            LATA |= 256;            // initial state of the pin is high which means it needs to be PULLED down to activate
        }
        else
        {
            LATA |= 0;
        }
        break;
    case "B":
        ANSELB |= port_ansel;
        TRISB |= port_tris;
        if(port_active_low == true)
        {
            LATB |= 256;            // initial state of the pin is high which means it needs to be PULLED down to activate
        }
        else
        {
            LATB |= 0;
        }
        break;
    case "C":
        ANSELC |= port_ansel;
        TRISC |= port_tris;
        if(port_active_low == true)
        {
            LATB |= 256;            // initial state of the pin is high which means it needs to be PULLED down to activate
        }
        else
        {
            LATB |= 0;
        }
        break;
    case "D":
        ANSELD |= port_ansel;
        TRISD |= port_tris;
        if(port_active_low == true)
        {
            LATB |= 256;            // initial state of the pin is high which means it needs to be PULLED down to activate
        }
        else
        {
            LATB |= 0;
        }
        break;
    case "E":
        ANSELE |= port_ansel;
        TRISE |= port_tris;
        if(port_active_low == true)
        {
            LATB |= 256;            // initial state of the pin is high which means it needs to be PULLED down to activate
        }
        else
        {
            LATB |= 0;
        }
        break;
    case default:
        break;
    }
}
