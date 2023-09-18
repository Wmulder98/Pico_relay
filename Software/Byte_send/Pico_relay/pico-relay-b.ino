//Name of project:            Ralays  
//Company:                    -
//Date of creation:           18-09-2023
//Date of last modification:  18-09-2023
//Creater:                    Wouter Mulder 
//Proccesor:                  RP2040
//Proccesor datasheet:        https://datasheets.raspberrypi.com/rp2040/rp2040-datasheet.pdf
#include "global.h"

void setupPicoRelayB(void)
{
  pinMode(RELAYCH1, OUTPUT);
  pinMode(RELAYCH2, OUTPUT);
  pinMode(RELAYCH3, OUTPUT);
  pinMode(RELAYCH4, OUTPUT);
  pinMode(RELAYCH5, OUTPUT);
  pinMode(RELAYCH6, OUTPUT);
  pinMode(RELAYCH7, OUTPUT);
  pinMode(RELAYCH8, OUTPUT);

  pinMode(BUZZER, OUTPUT);
}



