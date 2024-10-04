#include "mbed.h"
#include "arm_book_lib.h"

int main()
{

    //Constructor
    DigitalIn gasDetector(D2);
    //Constructor
    DigitalOut alarmLed(LED1);
    
    //Metodo
    gasDetector.mode(PullDown);

    gpio_mode();
    
    alarmLed = OFF;

    while (true) {

        if ( gasDetector == ON ) {
            printf("%s\n", "El detector de gas esta encendido.");
            alarmLed = ON;
        }
        
        if ( gasDetector == OFF ) {
            printf("%s\n", "El detector de gas esta apagado.");
            alarmLed = OFF;
        }

    }
}