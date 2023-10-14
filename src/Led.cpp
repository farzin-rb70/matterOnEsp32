#include "Led.h"

Led::Led(int pin)
{
    this->power = new Characteristic::On();
    this->ledPin = pin;
    pinMode(this->ledPin, OUTPUT);
}

Led::~Led()
{
}

boolean Led::update()
{
    digitalWrite(this->ledPin, power->getNewVal());
    return true;
}
