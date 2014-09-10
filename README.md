# RigidBot Firmware

Custom Marlin firmware for the RigidBot line of 3D printers.

## Usage Instructions

1. Open Arduino PDE
1. Go to File>Open>(Rigidbot FW directory)>Marlin>Marlin.ino
1. Make sure your Rigidboard is connected and powered on, the serial port is correct, and you have Arduino Mega 2560 selected under the "board" menu. All these options are found under the "Tools" menu.
1. Click "Verify" to make sure there are no errors and then "Upload" after the verify step is finished.

[This video](https://www.youtube.com/watch?v=xOACHo4e_Dw) also covers the installation instructions.

Note: If you want to make changes (not advised unless you are experienced) then you can do so under the Configuration.h tab of the firmware before uploading it to the board.

## Releases

### Version 1.1 - August 11, 2014

* Added "About" menu screen with printer/firmware info, and show also as splash screen on startup
* Added button repeat for pressing and holding a button
* Added smooth axis jogging support
* Reversed order of USB file listing to show newest file first
* Added continuous extruder feed modes for filament loading/unloading
* Added filament load/unload/clean nozzle/switch extruder
* Changed Y travel to 248 (actual max travel on most machines)
* Added options for single/dual extruder preheat modes
* Replaced "Disable Steppers" option in bed leveling with "Jog Axis" mode (to eliminate re-homing on resume)
* Changed infinite timeout to long (2 min.) timeout on bed leveling, jogging, and filament change modes
* Changed preheat extruder defaults to 200/230 (PLA/ABS)
* Changed coarse adjustment increment (left/right buttons) to 10 (instead of 5)
* Fixed PID values for less temperature oscillation
* Implemented EEPROM defaults reset on re-flashing, and incremented settings version to 8

### Version 1.0 - June 1, 2014

Changes from original Marlin firmware:

* Added pin defenitions/default configuration etc. for RigidBot
* Added easy config options for Regular/Big and Single/Dual extruder
* Initial support for RigidBot LCD panel
* Changed from rotary encoder based inputs to 5-way button inputs
* Reorganized LCD menu structures for easier access
* Changed text strings for compatibility with USB drive instead of SD card
* Improved screen usage by hiding back menu options, left button goes back instead
* Added coarse adjustment to value changes using left/right buttons (up/down perform fine adjustment)
* Enabled EEPROM settings storage support
* Added scrolling of long file names up to 39 characters (previously only 19 characters of screen width)
* Added bed leveling scripts
* Rearranged status screen for easier viewing of temperatures
