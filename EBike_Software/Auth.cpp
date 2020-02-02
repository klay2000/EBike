#include "Auth.h"
#include <Arduino.h>
#include <MFRC522.h>

Auth* Auth::instance;

Auth* Auth::getInstance(){
  if(instance == 0) instance = new Auth();
  return instance;
}

Auth::Auth(){
  pinMode(KEY_PIN, INPUT_PULLUP);

  
  mfrc = new MFRC522(MFRC_CS_PIN, -1, MFRC_SPI);

  mfrc->PCD_Init();
}

bool Auth::isNewCard(){
  return mfrc->PICC_IsNewCardPresent();
}

bool Auth::isCardRead(){
  return mfrc->PICC_ReadCardSerial();
}

String Auth::cardUID(){
  String value = "";
  
  for(int i = 0; i < mfrc->uid.size; i++){
    value.concat(String(mfrc->uid.uidByte[i], HEX));
  }

  return value;

}

bool Auth::isKey(){
  return digitalRead(KEY_PIN)==LOW;
}
