/* 
	Editor: http://www.visualmicro.com
	        visual micro and the arduino ide ignore this code during compilation. this code is automatically maintained by visualmicro, manual changes to this file will be overwritten
	        the contents of the Visual Micro sketch sub folder can be deleted prior to publishing a project
	        all non-arduino files created by visual micro and all visual studio project or solution files can be freely deleted and are not required to compile a sketch (do not delete your own code!).
	        note: debugger breakpoints are stored in '.sln' or '.asln' files, knowledge of last uploaded breakpoints is stored in the upload.vmps.xml file. Both files are required to continue a previous debug session without needing to compile and upload again
	
	Hardware: AT90USB128x 16MHz USB Serial, Platform=avr, Package=DynamicPerception
*/

#define __AVR_AT90usb1287__
#define __AVR_AT90USB1287__
#define ARCH ARCH_AVR8
#define USE_FLASH_DESCRIPTORS
#define F_USB 16000000L
#define USE_USB_SERIAL
#define BOARD NONE
#define ARDUINO 101
#define ARDUINO_MAIN
#define F_CPU 16000000L
#define __AVR__
#define __cplusplus
extern "C" void __cxa_pure_virtual() {;}

//
//
void pauseProgram();
void stopProgram(boolean force_clear);
void startProgram();
void flasher(byte pin, int count);
void checkReset();
void camExpose();
void camWait();
void camCallBack(byte code);
void checkCameraRepeat();
void setupControlCycle();
void cycleCamera();
void cycleClearToMove();
void cycleCheckMotor();
void debugOn();
void debugOff();
void changeNodeAddr(byte addr);
void eepromCheck();
void eepromWrite();
void eepromRestore();
void move_motor();
void motor_com_line(unsigned int p_time);
void serCommandHandler(byte command, byte* buf);
void serBroadcastHandler(byte command, byte* buf);
void serProgramData(byte* input_serial_buffer);
void serProgramAction(byte* input_serial_buffer);
boolean serProgramCamera(byte* input_serial_buffer);
boolean serProgramMotor(byte* input_serial_buffer);
void serStatusRequest(byte* input_serial_buffer);
void serialComplexMove(byte* buf);
void serialComplexPlan(byte* buf);

#include "C:\Program Files (x86)\Arduino\hardware\DynamicPerception\avr\variants\at90usb128X\pins_arduino.h" 
#include "C:\Program Files (x86)\Arduino\hardware\DynamicPerception\avr\cores\AT90USB\arduino.h"
#include "C:\Users\Kevin Melotti\Documents\Arduino\nanoMoCo_Firmware\Firmware\Motion_Engine_at90usb1287\Motion_Engine_at90usb1287.ino"
#include "C:\Users\Kevin Melotti\Documents\Arduino\nanoMoCo_Firmware\Firmware\Motion_Engine_at90usb1287\OM_Camera_Control.ino"
#include "C:\Users\Kevin Melotti\Documents\Arduino\nanoMoCo_Firmware\Firmware\Motion_Engine_at90usb1287\OM_ControlCycle.ino"
#include "C:\Users\Kevin Melotti\Documents\Arduino\nanoMoCo_Firmware\Firmware\Motion_Engine_at90usb1287\OM_Debug.ino"
#include "C:\Users\Kevin Melotti\Documents\Arduino\nanoMoCo_Firmware\Firmware\Motion_Engine_at90usb1287\OM_DevAddr.ino"
#include "C:\Users\Kevin Melotti\Documents\Arduino\nanoMoCo_Firmware\Firmware\Motion_Engine_at90usb1287\OM_EEPROM.ino"
#include "C:\Users\Kevin Melotti\Documents\Arduino\nanoMoCo_Firmware\Firmware\Motion_Engine_at90usb1287\OM_LimitHandler.ino"
#include "C:\Users\Kevin Melotti\Documents\Arduino\nanoMoCo_Firmware\Firmware\Motion_Engine_at90usb1287\OM_Motor_Control.ino"
#include "C:\Users\Kevin Melotti\Documents\Arduino\nanoMoCo_Firmware\Firmware\Motion_Engine_at90usb1287\OM_Motor_Travel.ino"
#include "C:\Users\Kevin Melotti\Documents\Arduino\nanoMoCo_Firmware\Firmware\Motion_Engine_at90usb1287\OM_Serial_Com_Client.ino"
