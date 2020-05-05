#include "CardReader.h"
#include <Arduino.h>
#include <MFRC522.h>

CardReader* CardReader::instance;

CardReader* CardReader::getInstance(){
  if(instance == 0) instance = new CardReader();
  return instance;
}

CardReader::CardReader(){
 mfrc = new MFRC522(MFRC_CS_PIN, -1);

 mfrc->PCD_Init();
}

bool CardReader::isNewCard(){
 return mfrc->PICC_IsNewCardPresent();
}
bool CardReader::readCard(){
 return mfrc->PICC_ReadCardSerial();
}

String CardReader::cardUID(){
 String value = "";
 
 for(int i = 0; i < mfrc->uid.size; i++){
   value.concat(String(mfrc->uid.uidByte[i], HEX));
 }

 mfrc->PICC_HaltA();

 return value;

}
