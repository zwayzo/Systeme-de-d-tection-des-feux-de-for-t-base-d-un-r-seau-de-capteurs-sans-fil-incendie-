#include <CO2Sensor.h>
#include "CO2Sensor.h"

CO2Sensor co2Sensor(34, 0.99, 100);

void setup() {
  Serial.begin(9600);
  Serial.println("=== Initialized ===");
  co2Sensor.calibrate();
}

void loop() {
  int val = co2Sensor.read();
  Serial.print("CO2 value: ");
  Serial.println(val);

  delay(500);
}
