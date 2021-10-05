#pragma once

#include "stdint.h"

namespace Pulu {
    class LoRaMessage {
        public:
            LoRaMessage();
            ~LoRaMessage();

            LoRaMessage& setLightLevel(uint16_t value);
            LoRaMessage& setAirTemperature(uint16_t value);
            LoRaMessage& setGroundTemperature(uint16_t value);
            LoRaMessage& setMoistureLevel1(uint16_t value);
            LoRaMessage& setMoistureLevel2(uint16_t value);
            LoRaMessage& setMoistureLevel3(uint16_t value);
            LoRaMessage& setMoistureLevel4(uint16_t value);
            LoRaMessage& setMoistureLevel5(uint16_t value);
            LoRaMessage& setBatteryStatus(uint8_t value);

            uint8_t* message();
            uint8_t size();
        
        private:
            uint8_t* buffer;
            uint8_t size = 17;
        
        /*
        ///////////////
        Payload format:
        ///////////////
        - LightLevel
        - AirTemperature
        - GroundTemperature
        - MoistureLevel1
        - MoistureLevel2
        - MoistureLevel3
        - MoistureLevel4
        - MoistureLevel5
        - BatteryStatus
        ///////////////
        */
    };
};