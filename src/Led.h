#if !defined(_LED_H_)
#define _LED_H_

#include "HomeSpan.h"

class Led : public Service::LightBulb
{
private:
    int ledPin;
    SpanCharacteristic *power;

public:
    Led(int pin);
    ~Led();
    boolean update();
};

#endif // _LED_H_
