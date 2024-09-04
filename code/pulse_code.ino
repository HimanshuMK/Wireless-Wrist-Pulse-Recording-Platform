#include <Wire.h>
#include "MAX30105.h"

MAX30105 particleSensor1;
MAX30105 particleSensor2;
MAX30105 particleSensor3;

#define debug Serial
#define TCAADDR 0x70

void tcaselect(uint8_t i) {
    if (i > 7) return;
    Wire.beginTransmission(TCAADDR);
    Wire.write(1 << i);
    Wire.endTransmission();
}

void setup() {
    debug.begin(115200);
    debug.println("MAX30105 Basic Readings Example");
    Wire.begin();

    // Initialize sensor 1
    tcaselect(2);
    if (particleSensor1.begin() == false) {
        debug.println("MAX30105 Sensor 1 not found. Please check wiring/power.");
        while (1);
    }
    particleSensor1.setup();

    // Initialize sensor 2
    tcaselect(4);
    if (particleSensor2.begin() == false) {
        debug.println("MAX30105 Sensor 2 not found. Please check wiring/power.");
        while (1);
    }
    particleSensor2.setup();

    // Initialize sensor 3
    tcaselect(6);
    if (particleSensor3.begin() == false) {
        debug.println("MAX30105 Sensor 3 not found. Please check wiring/power.");
        while (1);
    }
    particleSensor3.setup();
}

void loop() {
    // Sensor 1
    tcaselect(2);
    debug.print("Sensor 1 IR: ");
    debug.print(particleSensor1.getIR());
    debug.print(",");

    // Sensor 2
    tcaselect(4);
    debug.print("Sensor 2 IR: ");
    debug.print(particleSensor2.getIR());
    debug.print(",");

    // Sensor 3
    tcaselect(6);
    debug.print("Sensor 3 IR: ");
    debug.println(particleSensor3.getIR());
    
    delay(10);
}
