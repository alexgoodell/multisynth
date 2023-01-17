#ifndef menu_and_display_h
#define menu_and_display_h

#pragma once
#include <Audio.h>
#include <menu.h>

class Mad // "menu and display"
{
  public:
    // result doAlert(eventMask e, prompt &item);
    // result showEvent(eventMask e, navNode& nav, prompt& item);
    // result action1(eventMask e);
    // result action2(eventMask e, navNode& nav, prompt &item);
    // result myLedOn();
    // result myLedOff();
    // result alert(menuOut& o, idleEvent e);
    // result doAlert(eventMask e, prompt &item);
    // result idle(menuOut &o, idleEvent e);
    void setup();
    void loop()	;
    void dash();
    int BTN_SEL;
    int BTN_UP;
    int BTN_DOWN;
	int SOFT_DEBOUNCE_MS;
	int LEDPIN;
	int OLED_SDA;
	int OLED_SDC;
	int MAX_DEPTH;
  private:
    int _BTN_SEL;
};

extern int selTest;
extern float GlobalVolume;

#endif