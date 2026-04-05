#ifndef NRF24JAMMER_H
#define NRF24JAMMER_H

#include <SPI.h>
#include <nRF24L01.h>
#include <RF24.h>

class NRF24Jammer {
private:
    RF24 radio;
    bool jammingEnabled;
    unsigned long jamDuration;

public:
    NRF24Jammer(uint8_t cePin, uint8_t csnPin);

    void begin();
    void startJamming();
    void stopJamming();
    void sniffPackets();
    bool isJammingEnabled();
};

#endif // NRF24JAMMER_H
