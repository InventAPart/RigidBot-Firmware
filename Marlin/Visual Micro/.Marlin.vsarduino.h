/* 
	Editor: http://www.visualmicro.com
	        visual micro and the arduino ide ignore this code during compilation. this code is automatically maintained by visualmicro, manual changes to this file will be overwritten
	        the contents of the Visual Micro sketch sub folder can be deleted prior to publishing a project
	        all non-arduino files created by visual micro and all visual studio project or solution files can be freely deleted and are not required to compile a sketch (do not delete your own code!).
	        note: debugger breakpoints are stored in '.sln' or '.asln' files, knowledge of last uploaded breakpoints is stored in the upload.vmps.xml file. Both files are required to continue a previous debug session without needing to compile and upload again
	
	Hardware: Arduino Mega 2560 or Mega ADK, Platform=avr, Package=arduino
*/

#define __AVR_ATmega2560__
#define ARDUINO 101
#define ARDUINO_MAIN
#define F_CPU 16000000L
#define __AVR__
#define __cplusplus
extern "C" void __cxa_pure_virtual() {;}


#include "C:\Program Files (x86)\Arduino\hardware\arduino\variants\mega\pins_arduino.h" 
#include "C:\Program Files (x86)\Arduino\hardware\arduino\cores\arduino\arduino.h"
#include "D:\Projects\RigidBot\Code\RigidBot New Firmware\Marlin\Marlin.ino"
#include "D:\Projects\RigidBot\Code\RigidBot New Firmware\Marlin\Configuration.h"
#include "D:\Projects\RigidBot\Code\RigidBot New Firmware\Marlin\ConfigurationStore.cpp"
#include "D:\Projects\RigidBot\Code\RigidBot New Firmware\Marlin\ConfigurationStore.h"
#include "D:\Projects\RigidBot\Code\RigidBot New Firmware\Marlin\Configuration_adv.h"
#include "D:\Projects\RigidBot\Code\RigidBot New Firmware\Marlin\LiquidCrystalFast_Mod.cpp"
#include "D:\Projects\RigidBot\Code\RigidBot New Firmware\Marlin\LiquidCrystalFast_Mod.h"
#include "D:\Projects\RigidBot\Code\RigidBot New Firmware\Marlin\LiquidCrystalRus.cpp"
#include "D:\Projects\RigidBot\Code\RigidBot New Firmware\Marlin\LiquidCrystalRus.h"
#include "D:\Projects\RigidBot\Code\RigidBot New Firmware\Marlin\Marlin.h"
#include "D:\Projects\RigidBot\Code\RigidBot New Firmware\Marlin\MarlinSerial.cpp"
#include "D:\Projects\RigidBot\Code\RigidBot New Firmware\Marlin\MarlinSerial.h"
#include "D:\Projects\RigidBot\Code\RigidBot New Firmware\Marlin\Marlin_main.cpp"
#include "D:\Projects\RigidBot\Code\RigidBot New Firmware\Marlin\Sd2Card.cpp"
#include "D:\Projects\RigidBot\Code\RigidBot New Firmware\Marlin\Sd2Card.h"
#include "D:\Projects\RigidBot\Code\RigidBot New Firmware\Marlin\Sd2PinMap.h"
#include "D:\Projects\RigidBot\Code\RigidBot New Firmware\Marlin\SdBaseFile.cpp"
#include "D:\Projects\RigidBot\Code\RigidBot New Firmware\Marlin\SdBaseFile.h"
#include "D:\Projects\RigidBot\Code\RigidBot New Firmware\Marlin\SdFatConfig.h"
#include "D:\Projects\RigidBot\Code\RigidBot New Firmware\Marlin\SdFatStructs.h"
#include "D:\Projects\RigidBot\Code\RigidBot New Firmware\Marlin\SdFatUtil.cpp"
#include "D:\Projects\RigidBot\Code\RigidBot New Firmware\Marlin\SdFatUtil.h"
#include "D:\Projects\RigidBot\Code\RigidBot New Firmware\Marlin\SdFile.cpp"
#include "D:\Projects\RigidBot\Code\RigidBot New Firmware\Marlin\SdFile.h"
#include "D:\Projects\RigidBot\Code\RigidBot New Firmware\Marlin\SdInfo.h"
#include "D:\Projects\RigidBot\Code\RigidBot New Firmware\Marlin\SdVolume.cpp"
#include "D:\Projects\RigidBot\Code\RigidBot New Firmware\Marlin\SdVolume.h"
#include "D:\Projects\RigidBot\Code\RigidBot New Firmware\Marlin\Servo.cpp"
#include "D:\Projects\RigidBot\Code\RigidBot New Firmware\Marlin\Servo.h"
#include "D:\Projects\RigidBot\Code\RigidBot New Firmware\Marlin\cardreader.cpp"
#include "D:\Projects\RigidBot\Code\RigidBot New Firmware\Marlin\cardreader.h"
#include "D:\Projects\RigidBot\Code\RigidBot New Firmware\Marlin\fastio.h"
#include "D:\Projects\RigidBot\Code\RigidBot New Firmware\Marlin\language.h"
#include "D:\Projects\RigidBot\Code\RigidBot New Firmware\Marlin\motion_control.cpp"
#include "D:\Projects\RigidBot\Code\RigidBot New Firmware\Marlin\motion_control.h"
#include "D:\Projects\RigidBot\Code\RigidBot New Firmware\Marlin\pins.h"
#include "D:\Projects\RigidBot\Code\RigidBot New Firmware\Marlin\planner.cpp"
#include "D:\Projects\RigidBot\Code\RigidBot New Firmware\Marlin\planner.h"
#include "D:\Projects\RigidBot\Code\RigidBot New Firmware\Marlin\speed_lookuptable.h"
#include "D:\Projects\RigidBot\Code\RigidBot New Firmware\Marlin\stepper.cpp"
#include "D:\Projects\RigidBot\Code\RigidBot New Firmware\Marlin\stepper.h"
#include "D:\Projects\RigidBot\Code\RigidBot New Firmware\Marlin\temperature.cpp"
#include "D:\Projects\RigidBot\Code\RigidBot New Firmware\Marlin\temperature.h"
#include "D:\Projects\RigidBot\Code\RigidBot New Firmware\Marlin\thermistortables.h"
#include "D:\Projects\RigidBot\Code\RigidBot New Firmware\Marlin\ultralcd.cpp"
#include "D:\Projects\RigidBot\Code\RigidBot New Firmware\Marlin\ultralcd.h"
#include "D:\Projects\RigidBot\Code\RigidBot New Firmware\Marlin\ultralcd_implementation_RigidBot.h"
#include "D:\Projects\RigidBot\Code\RigidBot New Firmware\Marlin\watchdog.cpp"
#include "D:\Projects\RigidBot\Code\RigidBot New Firmware\Marlin\watchdog.h"
