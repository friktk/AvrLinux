/*
 * AVR0.cpp
 *
 * Created: 21.2.2020 11:18:12
 * Author : Juraj
 */

#include "BOARD_AVR.h"

int main(void)
{

	 /************************** nastavenie smeru vyvodov*****************/
    sbi(DDRD, LED_RED);   // nastavenie smeru vyvodu PD4
    sbi(DDRD, LED_GREEN); //PD2
    sbi(DDRD, LED_BLUE);  //PD7
    /************************** teraz zasvietime len modru*****************/
    sbi(PORTD, LED_RED);   // nastavenie hodnoty vyvodu PD4
    sbi(PORTD, LED_GREEN); //PD2
    cbi(PORTD, LED_BLUE);  //PD7

    while (1)
    {
    }
}
