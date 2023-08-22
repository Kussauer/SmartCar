#ifndef button_h
#define button_h

#include <Arduino.h>

class testled
{
private:
    
    int testLedPin;
    


public:
    bool testLedStatus = 0; 
    testled(int pin);
    void turnOnTestLed();
    void turnOffTestLed();
    void toggle();
};


#endif