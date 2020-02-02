#ifndef AUTH
#define AUTH

#include <MFRC522.h>

class Auth{
  
  private:
    const int MFRC_CS_PIN = PB5;
    const int MFRC_SPI = 2;
    const int KEY_PIN = PB8;

    MFRC522* mfrc;

    static Auth* instance;
    Auth();

  public:
    static Auth* getInstance();
    
    bool isNewCard();
    String readCardUID();
    
    bool isKey();
};

#endif
