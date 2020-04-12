#ifndef LIGHTS
#define LIGHTS

class Lights{

  private:
    const int RED_PIN = -1;       //placeholder
    const int GREEN_PIN = -1;     //placeholder
    const int BLUE_PIN = -1;      //placeholder
    const int HEADLIGHT_PIN = -1; //placeholder
  
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
