#include "Led.h"

Led::Led(byte pin){
    this->pin = pin;
    init();
}

void Led::init(){
    pinMode(pin,OUTPUT);
    off();
}

void Led::on(){
    digitalWrite(pin,HIGH);
}

void Led::off(){
    digitalWrite(pin,LOW);
}

void Led::blink(int waktu){
    on();
    delay(waktu/2);
    off();
    delay(waktu/2);
}