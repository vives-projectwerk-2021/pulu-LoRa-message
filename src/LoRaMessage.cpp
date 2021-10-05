#include "mbed.h"
#include "LoRaMessage.h"

namespace Pulu {
    LoRaMessage::LoRaMessage() {
        buffer = (uint8_t*) calloc(size, sizeof(uint8_t));
    }
    LoRaMessage::~LoRaMessage() {
        free(buffer);
    }

    LoRaMessage& LoRaMessage::setLightLevel(uint16_t value) {
        buffer[0] = (uint8_t) (value);
        buffer[1] = (uint8_t) (value >> 8);
        return *this;
    }
    LoRaMessage& LoRaMessage::setAirTemperature(uint16_t value) {
        buffer[2] = (uint8_t) (value);
        buffer[3] = (uint8_t) (value >> 8);
        return *this;
    }
    LoRaMessage& LoRaMessage::setGroundTemperature(uint16_t value) {
        buffer[4] = (uint8_t) (value);
        buffer[5] = (uint8_t) (value >> 8);
        return *this;
    }
    LoRaMessage& LoRaMessage::setMoistureLevel1(uint16_t value) {
        buffer[6] = (uint8_t) (value);
        buffer[7] = (uint8_t) (value >> 8);
        return *this;
    }
    LoRaMessage& LoRaMessage::setMoistureLevel2(uint16_t value) {
        buffer[8] = (uint8_t) (value);
        buffer[9] = (uint8_t) (value >> 8);
        return *this;
    }
    LoRaMessage& LoRaMessage::setMoistureLevel3(uint16_t value) {
        buffer[10] = (uint8_t) (value);
        buffer[11] = (uint8_t) (value >> 8);
        return *this;
    }
    LoRaMessage& LoRaMessage::setMoistureLevel4(uint16_t value) {
        buffer[12] = (uint8_t) (value);
        buffer[13] = (uint8_t) (value >> 8);
        return *this;
    }
    LoRaMessage& LoRaMessage::setMoistureLevel5(uint16_t value) {
        buffer[14] = (uint8_t) (value);
        buffer[15] = (uint8_t) (value >> 8);
        return *this;
    }
    LoRaMessage& LoRaMessage::setBatteryStatus(uint8_t value) {
        buffer[16] = value;
        return *this;
    }

    uint8_t* LoRaMessage::message() {
        return buffer;
    }

    uint8_t LoRaMessage::size() {
        return size;
    }
};