#ifndef CARDREADER
#define CARDREADER

//#include <MFRC522.h>

#include "string.h"

class CardReader{
  
  private:
    const int MFRC_CS_PIN = 14;
    const int MFRC_SPI = 2;

//    MFRC522* mfrc;

    static CardReader* instance;
    CardReader();

  public:
    static CardReader* getInstance();
    
    bool isNewCard();
    bool readCard();
//    String cardUID();
};

#endif
