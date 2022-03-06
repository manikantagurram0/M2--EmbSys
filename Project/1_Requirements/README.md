                                                   # Fire Alarm System 

# Fire Alarm System 
## Introduction
In this project, we are going to create a fire alert system using ATMEGA8 microcontroller and fire sensor. Fire sensors can be of any type, here fire sensor play a vital role we have different types of fire alarms
we can use any one with respect to your project here i am using LM35 a temperature sensor when temperature level exceed the actual level fire sensor sent signal to
microcontroller then buzzer rings after that we reset the buzzer using and fire sensor using reset button, we can use this in real time environments like hospitals schools and shopping malls etc..
we are going to install the fire sensor on the servo motor. The survey will rotate the 180 degree pendulum. With the fire sensor mounted on it, we get 270+ degree fire sensing vision. The survey will continue to rotate, thus providing a complete room fire alert system. We can add smoke sensors to the system for more accuracy. With it we can achieve high accuracy.



## 4W'S AND 1H
![887414WH1](https://user-images.githubusercontent.com/98829237/154836788-82480a46-016d-41d0-9fd2-f9cb3d78307d.png)
### Where
 * Fire alarm system is use this in real time environments like hospitals
schools and shopping malls etc..

### When
* Fire alarm is activated when it temperature level exceed to normal level it buzzer is activated
* buzzer is activated throught micro controller atmega8

### What
* fire alarm system using microcontroller Atmega8 and fire sensor, here fire sensor play a vital role

### Who 
*  Fire alarm system is use this in real time environments like hospitals
schools and shopping malls they are used this

### How
* Fire alarm is independent device it not dependent on external user it work on micro controller


![swot](https://user-images.githubusercontent.com/98829237/154809684-b91f2656-67a1-47f8-b83a-97014af517b6.jpg)

#
# High Level Requirements
|HLR|     Description  |
|------|  --------------|
|HLR_1|   it shall be sense the fire.
|HLR_2|   it shall be make sound when fire senses .
|HLR_3|   it shall have reset button to reset buzzer.
|HLR_4|   it shall have ADC to sense analog signals.
#            
# Low Level Requirements
|ID|     Low Level Requirements for HL1 |  |ID|       Low Level Requirements for HL2 |
|------|  ------------|--|---|   ----------------|
|LLR1|  it shall have fire sensor.|  |LLR1|     it shall have a buzzer to connect.            
|LLR2|  it shall have ADC.|  |LLR2|   it shall have a sensor to connect.

#
|ID|     Low Level Requirements for HL3 |  |ID|       Low Level Requirements for HL4 |
|------|  ------------|--|---|   ----------------|
|LLR1|   we shall reset button manually .|  |H4L1|     It shall have interrupt .            
|LLR2|  Reset button is connect buzzer.|  |LLR2|   it shall have a ADC, to covert signals .




![draw](https://user-images.githubusercontent.com/98829237/156922691-f06d3071-48d1-4384-841f-d8b01ca31d5e.png)



## Components Used In Fire Alarm
### Fire sensor(i used potentiometer in place of fire sensor due to unavailability)
 * A potentiometer is an instrument used to measure voltage or electrical potential. This provides a variable resistance when the device shaft is twisted. Here, we will measure the amount of resistance as the analog value produced by the potentiometer.



### ATMEGA328
 * it is used to control the all circuit and send commands and operate buzzer basically when temperature or some sensor senses analog input it send to micro
 controller then it alert the buzzer, LED, Lcd Display     

### BUZZER
 * Buzzer is used to make sound and it a output to the circuit when micro controller send output signal then buzzer start sound anlong with led turn on

### Button
 * it is used to reset buzzer when we need to swith off buzzer after emergency team arrived so we need switch to reset led, buzzer,lcd display and servo motor
### LED
* It shall turn the led red which indicates red and it alert people to move some safe place which away from the fire zone
### LCD Display
*  LCD (Liquid Crystal Display) is a type of display that uses liquid crystal for its operation. Here, we will accept the serial input from the computer and upload the sketch to Arduino. The characters will be displayed on the LCD.

### Servo motor 
 * it have connected with fire resistor in my project i used this as room lock and unlock feture of emegency door in this ewhen temperature exceed the limit then doors are automatically unlock using micro controller Servo motors are a type of motors whose output shaft can be moved to a specific angular position by sending a coded signal. The servo motor will maintain the position of the shaft as long as you keep applying coded signals. When you change the coded signal, the angular position of the shaft will change.
Provides a common type of survey position control. Servos in nature are usually electric or partially electronic, using an electric motor as the primary means of generating mechanical power. Other types of servos use hydraulics, pneumatics, or magnetic principles.

### power supply
 * Her i used a 5v power supply it is connected with peripherals



![draw](https://user-images.githubusercontent.com/98829237/154810462-d61a4e29-ee06-4c74-bcf1-7e79af0a82ea.png)





