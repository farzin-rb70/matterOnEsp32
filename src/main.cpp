#include "Arduino.h"
#include "HomeSpan.h"
#include "Led.h"

void setup()
{
    // homeSpan.setPairingCode("111223332");
    // homeSpan.begin(Category::Lighting, "MY Home Led");

    // new SpanAccessory();
    // new Service::AccessoryInformation();
    // new Characteristic::Identify();
    // new Led(12);
    pinMode(2, OUTPUT);
}
void loop()
{
    // homeSpan.poll();
    digitalWrite(2, HIGH);
    delay(500);
    digitalWrite(2, LOW);
    delay(500);
}