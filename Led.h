#ifndef LED_H
#define LED_H

#include <Arduino.h>

class Led {
    private : 
        byte pin;
    public :
        // Setup pin LED call and init();
        Led(byte pin);
        // Setup the pin led as OUTPUT;
        // and power off the LED - default state
        void init();

        // Power on the LED
        void on();

        // Power off the LED
        void off();
        
        // LED Blink
        void blink(int waktu);
};

#endif