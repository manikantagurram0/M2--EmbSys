## System Level Block Diagram
![draw](https://user-images.githubusercontent.com/98829237/156922691-f06d3071-48d1-4384-841f-d8b01ca31d5e.png)
##


## Components Used In Fire Alarm
#


### Fire sensor (i used potentiometer in place of fire sensor due to unavailability)
![Copy of Copy of draw](https://user-images.githubusercontent.com/98829237/156931658-2bf89966-4d7e-4dfb-9cf8-989e12957f8f.png)
 * A potentiometer is an instrument used to measure voltage or electrical potential. This provides a variable resistance when the device shaft is twisted. Here, we will measure the amount of resistance as the analog value produced by the potentiometer.


#
### ATMEGA328
![micro of draw](https://user-images.githubusercontent.com/98829237/156931814-e775e895-1acb-410a-9b7b-1a994672c6ce.png)
 * it is used to control the all circuit and send commands and operate buzzer basically when temperature or some sensor senses analog input it send to micro
 controller then it alert the buzzer, LED, Lcd Display     
#
### BUZZER
![buzzer w](https://user-images.githubusercontent.com/98829237/156932118-d3fb98e8-9e5c-44c1-94b1-cdc69596ea2c.png)
 * Buzzer is used to make sound and it a output to the circuit when micro controller send output signal then buzzer start sound anlong with led turn on
#
### Button
![button of draw](https://user-images.githubusercontent.com/98829237/156932325-437d1490-b459-4102-aee7-34b022e86859.png)
 * it is used to reset buzzer when we need to swith off buzzer after emergency team arrived so we need switch to reset led, buzzer,lcd display and servo motor
#
### LED
![LED of draw](https://user-images.githubusercontent.com/98829237/156932472-5da5ff25-9c40-4e42-aa05-fd817520d339.png)
* It shall turn the led red which indicates red and it alert people to move some safe place which away from the fire zone
#
### LCD Display
![Display of draw](https://user-images.githubusercontent.com/98829237/156932601-cbd38f47-9ace-477f-9da5-522005d92881.png)
*  LCD (Liquid Crystal Display) is a type of display that uses liquid crystal for its operation. Here, we will accept the serial input from the computer and upload the sketch to Arduino. The characters will be displayed on the LCD.
#
### Servo motor 
![servo of draw](https://user-images.githubusercontent.com/98829237/156932678-7b994107-b7b1-4f21-8a3e-7f45eeded163.png)
 * it have connected with fire resistor in my project i used this as room lock and unlock feture of emegency door in this ewhen temperature exceed the limit then doors are automatically unlock using micro controller Servo motors are a type of motors whose output shaft can be moved to a specific angular position by sending a coded signal. The servo motor will maintain the position of the shaft as long as you keep applying coded signals. When you change the coded signal, the angular position of the shaft will change.
Provides a common type of survey position control. Servos in nature are usually electric or partially electronic, using an electric motor as the primary means of generating mechanical power. Other types of servos use hydraulics, pneumatics, or magnetic principles.
#
### power supply
![Power supply of draw](https://user-images.githubusercontent.com/98829237/156932822-3fd83541-0a7a-4ee2-a1f7-83743582da8f.png)
 * Her i used a 5v power supply it is connected with peripherals
#
### Behavioral Diagram
![uml diagram (1)](https://user-images.githubusercontent.com/98829237/156934392-3fd746a7-50a7-4820-a6fa-e8a523f86cee.png)

#
### Flow chart
![flowchart (2)](https://user-images.githubusercontent.com/98829237/156927005-73d2a261-c01e-406d-bf6f-fd987e6f0bcb.png)

 #
 ### Subsystem level Diagram
![draw](https://user-images.githubusercontent.com/98829237/154841779-da2af976-0328-4623-9cd5-789a9e0bdaa2.png)



