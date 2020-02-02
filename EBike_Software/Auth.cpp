#include <MFRC522.h>

Auth* Auth::instance;

Auth* Auth::getInstance(){
  if(instance == 0) instance = new Auth();
  return instance;
}

Auth::Auth(){
  mfrc = new MFRC522(MFRC_CS_PIN, -1, MFRC_SPI);

  pinMode(KEY_PIN, INPUT);

  mfrc->PCD_Init();
}