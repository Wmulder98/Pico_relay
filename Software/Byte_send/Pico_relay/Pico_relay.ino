//Name of project:            Ralays  
//Company:                    -
//Date of creation:           18-09-2023
//Date of last modification:  18-09-2023
//Creater:                    Wouter Mulder 
//Proccesor:                  RP2040
//Proccesor datasheet:        https://datasheets.raspberrypi.com/rp2040/rp2040-datasheet.pdf
#include "global.h"
#include <NeoPixelConnect.h>

NeoPixelConnect LED(LEDCONTROL, NUMOFLEDS);

void setup() {
  // put your setup code here, to run once:
  setupPicoRelayB();
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  
 
}
