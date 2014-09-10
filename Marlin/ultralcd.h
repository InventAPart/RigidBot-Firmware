#ifndef ULTRALCD_H
#define ULTRALCD_H

#include "Marlin.h"

#ifdef ULTRA_LCD

  void lcd_update();
  void lcd_init();
  void lcd_setstatus(const char* message);
  void lcd_setstatuspgm(const char* message);
  void lcd_setalertstatuspgm(const char* message);
  void lcd_reset_alert_level();
  
  static unsigned char blink = 0;	// Variable for visualization of fan rotation in GLCD

  #define HIDE_BACK_MENUS			//	Uncomment to hide back menus (left button will still trigger them)
  #define LCD_REVERSE_FILE_ORDER	//	Uncomment to reverse file order displayed (should typically list newest files first)

  #define LCD_MESSAGEPGM(x) lcd_setstatuspgm(PSTR(x))
  #define LCD_ALERTMESSAGEPGM(x) lcd_setalertstatuspgm(PSTR(x))

  #define LCD_UPDATE_INTERVAL			100
  #define LCD_FAST_UPDATE_INTERVAL		10				//	Used for jog modes, and file name scrolling

  #define LCD_STATUS_UPDATE_INTERVAL	1000
  #define LCD_TIMEOUT_TO_STATUS			30000
  #define LCD_TIMEOUT_TO_STATUS_LONG	120000			//	Longer timeout for some menus and scripts

  #define FILE_SCROLL_START_DELAY		(1000 - 2)
  #define FILE_SCROLL_DELAY				(400 - 2)

  #define ENCODER_COARSE_STEP			10				//	step increment for coarse adjustments

  #define BUTTON_REPEAT_DELAY			300

  #define JOG_XY_SPEED		50
  #define JOG_XY_INC		3
  #define JOG_Z_SPEED		5
  #define JOG_Z_INC			1
  #define JOG_E_SPEED		20
  #define JOG_E_INC			2

  #ifdef ULTIPANEL
  void lcd_buttons_update();
  #else
  FORCE_INLINE void lcd_buttons_update() {}
  #endif

  extern int plaPreheatHotendTemp;
  extern int plaPreheatHPBTemp;
  extern int plaPreheatFanSpeed;

  extern int absPreheatHotendTemp;
  extern int absPreheatHPBTemp;
  extern int absPreheatFanSpeed;
    
  void lcd_buzz(long duration,uint16_t freq);
  bool lcd_clicked();

#else //no lcd
  FORCE_INLINE void lcd_update() {}
  FORCE_INLINE void lcd_init() {}
  FORCE_INLINE void lcd_setstatus(const char* message) {}
  FORCE_INLINE void lcd_buttons_update() {}
  FORCE_INLINE void lcd_reset_alert_level() {}
  FORCE_INLINE void lcd_buzz(long duration,uint16_t freq) {}

  #define LCD_MESSAGEPGM(x) 
  #define LCD_ALERTMESSAGEPGM(x) 
#endif 

char *itostr2(const uint8_t &x);
char *itostr31(const int &xx);
char *itostr3(const int &xx);
char *itostr3left(const int &xx);
char *itostr4(const int &xx);

char *ftostr3(const float &x);
char *ftostr31ns(const float &x); // float to string without sign character
char *ftostr31(const float &x);
char *ftostr32(const float &x);
char *ftostr5(const float &x);
char *ftostr51(const float &x);
char *ftostr52(const float &x);

#endif //ULTRALCD
