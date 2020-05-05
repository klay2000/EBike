#ifndef LIGHTS
#define LIGHTS

class Lights{

  private:
    const int RED_PIN = 26;
    const int GREEN_PIN = 25;
    const int BLUE_PIN = 27;
    const int RED_CH = 0;
    const int GREEN_CH = 1;
    const int BLUE_CH = 2;

    const int HEADLIGHT_PIN = 12;

    const int LED_FREQ = 5000;
    const int LED_RES = 10;

    static Lights* instance;
    Lights();
    
  public:
    static Lights* getInstance();

    void setHeadlight(bool i);
    void setRed(float i);
    void setGreen(float i);
    void setBlue(float i);
    
};

#endif
