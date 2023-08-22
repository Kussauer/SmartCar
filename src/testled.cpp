#include "Arduino.h"
#include "testled.h"

testled::testled(int pin)
{
    testLedPin = pin;
    pinMode(testLedPin, OUTPUT);

}


    /* testled led1(47);
    testled led2(48);
    testled led3(49);
    testled led4(50);
    testled led5(51);
    testled led6(52);
    testled led7(53); */


void testled::turnOnTestLed()
{
    digitalWrite(testLedPin, HIGH);
}

void testled::turnOffTestLed()
{
    digitalWrite(testLedPin, LOW);
}

void testled::toggle()
{
    digitalWrite(testLedPin, !digitalRead(testLedPin));
}