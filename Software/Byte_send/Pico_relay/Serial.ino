//Name of project:            Ralays  
//Company:                    -
//Date of creation:           18-09-2023
//Date of last modification:  18-09-2023
//Creater:                    Wouter Mulder 
//Proccesor:                  RP2040
//Proccesor datasheet:        https://datasheets.raspberrypi.com/rp2040/rp2040-datasheet.pdf
#include <stdbool.h>

void serialReciever(){
    bool bitArray[8];
   
   if (Serial.available() > 0) {
    // read the incoming byte:
    String incomingString = Serial.readString();

    // say what you got:
    Serial.print("I received: ");
    Serial.println(incomingString);

    if (incomingString[0] == '$'){
      Serial.println("valid");

      for(uint8_t i = 1; i < 9; i++){
        char selectedCharcter = incomingString[i];
        Serial.println(selectedCharcter);

        static uint8_t byteString = (selectedCharcter << 1);
        byteString = byteString << 1;
        Serial.print(byteString);

        //bitArray[i] = selectedCharcter.toBool();
        //Serial.println(bitArray[i]);
      }
   
     

    }
   }
}