# KidsBlock(Scratch) Tutorial

## 1. About KidsBlock IDE

### 1.1. Download and Install the KidsBlock IDE

- How do I download, install and use the reference link of the KidsBlock IDE：  [https://docs.keyestudio.com/projects/KidsBlock/en/latest/](https://docs.keyestudio.com/projects/KidsBlock/en/latest/)

### 1.2. Interface Setting

After the KidsBlock is installed，open KidsBlock to click![](media/bfbf7c471ede03845519b11961a13837.png)\<“**Beetlebot**”\<“**Connect**”，

Then the **Beetlebot car is connected.** Click**“Go to Editor”**to return the code editor.

![](media/bfbf7c471ede03845519b11961a13837.png)will change into![](media/0f64e7bcfda60830752545e973795914.png).

This means the **Beetlebot car is connected to the COM port**

![](media/da9cf688336d2fd12385d7d14a3b2ba6.png)

![](media/7acce89d54297bf463c91d6ac0bb4fdd.png)

![](media/150c7e7007bdfeddbe4ed0049303958e.png)

![](media/b15ecf407d1f55b5c1bbb3e15cc84b23.png)

![](media/75546e5a326ca5a8e22cb0d389556ca7.png)

If the car is connected, but![](media/db0135c23e5313dac75a33d7d2faa529.png)doesn’t change into ![](media/0f64e7bcfda60830752545e973795914.png)，

Just click![](media/db0135c23e5313dac75a33d7d2faa529.png)to connect the COM port.Click![](media/db0135c23e5313dac75a33d7d2faa529.png)，then click“**Connect**”，after a while, if the “**Connected**” page pops up，the com port will be connected.

![](media/918826a8fb5e09cfef2aa8ee6523ac05.png)

![](media/fe6f25032815b37eb7c04029ba940e97.png)

![](media/b15ecf407d1f55b5c1bbb3e15cc84b23.png)

![](media/75546e5a326ca5a8e22cb0d389556ca7.png)

Then click ![](media/770292e2b4d7555030eaf7951cf58aec.png)to switch the mode ![](media/6647392e2b1488904406ad656f6e08b4.png)

![](media/b3699180fe470cb9747eeb11d7547209.png)

![](media/f6feacfc376ae957d8d05747e37d75f8.png)

## 2. Projects：

### Project 01: 6812 RGB

**Description：**

There are 4 RGB LEDs can be widely used in the decoration of buildings, bridges, roads, gardens, courtyards and so on by colors adjustment.

In this experiment, we will demonstrate different lighting effects with them.

**Component Knowledge**

**SK6812RGB:**

From the schematic diagram, we can see that these four pixel lighting beads are all connected in series. In fact, no matter how many they are, we can use a pin to control a light and let it display any color. The pixel point contains a data latch signal shaping amplifier drive circuit, a high-precision internal oscillator and a 12V high-voltage programmable constant current control part, which effectively ensures the color of the pixel point light is highly consistent.

The data protocol adopts a single-wire zero-code communication method. After the pixel is powered up and reset, the S terminal receives the data transmitted from the controller. The first 24bit data sent is extracted by the first pixel and sent to the data latch of the pixel.

![](media/86e292d0666046b72a1e0e68adfb17e8.png)

**Test Code：**

The SK6812RGB on the PCB board is controlled by the GPIO 14 of the ESP32 board.

![Img](./media/img-20250214083212.png)

**Test Result**

Upload the code to the ESP32 board(If the upload code is not successful, you can press and hold the Boot button on the ESP32 motherboard after clicking ![Img](./media/img-20250214082916.png) , and then release the Boot button when the upload progress percentage appears![](media/dc77bfcf5851c8f43aab6cbe7cec7920.png).

![](media/4b5aaa883d1a05ea658d303a525ede0a.png)

Power up with a USB cable, then 4 RGB LEDs will show different colors

![Img](./media/img-20250214082954.png)

### Project 02: Play Music

1.**Description：**

There is a power amplifier component on the expansion board, which is often used to play music and serve as an external amplifying device for music playback devices. 

In this experiment, we use the speaker amplifier component to play music.

**2. Knowledge：**

Power amplifier modules(equivalent to a passive buzzer) don’t have internal oscillation circuits.

The power amplifier module can chime sounds with different frequency when power it up.

**3. Test Code：**

The speaker component on the PCB board is controlled by the GPIO 2 of the ESP32 board.

![](media/b4e6c42353e9687cdac20a5505b87cd4.png)

**4.Test Result**

Upload the code to the ESP32 board(if the code can’t be uploaded, you can click![](media/dc77bfcf5851c8f43aab6cbe7cec7920.png)

Power up with a USB cable, then the speaker module on the PCB board will play a song.



### Project 03: 8\*8 Dot Matrix

1.**Description：**

Composed of LED emitting tube diodes, the 8*8 LED dot matrix are applied widely to public information display like advertisement screen and bulletin board, by controlling LED to show words, pictures and videos, etc.

**2. Knowledge：**

There are different types of matrices, including 4×4, 8×8 and 16×16 and etc. It contains 64 LEDs.

The inner structure of 8×8 dot matrix is shown below.

![](media/df08c3a7c84497e429ce6fde7253d9b3.jpeg)

Every LED is installed on the cross point of row line and column line. When the voltage on a row line increases, and the voltage on the column line reduces, the LED on the cross point will light up. 8×8 dot matrix has 16 pins. Put the silk-screened side down and the numbers are 1, 8, 9 and 16 in anticlockwise order as marked below.

![](media/6576aff8e8a7fb35335629c2f60de29b.jpeg)

The definition inner pins are shown below:

![](media/4b98c449bae6648d7719a58d9ab2efa7.jpeg)

For instance, to light up the LED on row 1 and column 1, you should increase the voltage of pin 9 and reduce the voltage of pin 13.

**HT16K33 8X8 Dot Matrix**

The HT16K33 is a memory mapping and multi-purpose LED controller driver. The max. Display segment numbers in the device is 128 patterns (16 segments and 8 commons) with a 13*3 (MAX.) matrix key scan circuit. The software configuration features of the HT16K33 makes it suitable for multiple LED applications including LED modules and display subsystems. The HT16K33 is compatible with most microcontrollers and communicates via a two-line bidirectional I2C-bus.

The picture below is the working schematic of HT16K33 chip

![](media/fa5b7bd0d5ce98dbd4cb392dfb0b95e7.png)

We design the drive module of 8*8 dot matrix based on the above principle. We could control the dot matrix by I2C communication and two pins of microcontroller, according to the above diagram.

**Specification:**

- Input voltage: 5V    

- Rated input frequency: 400KHZ 

- Input power: 2.5W  

- Input current: 500mA  

**Introduction for Modulus Tool**

The online version of dot matrix modulus tool:

<http://dotmatrixtool.com/>

①Open the link to enter the following page.

![](media/354693b5679a2615c62e99b7025d6355.png)

②The dot matrix is 8\*8 in this project. So set the height to 8, width to 8; as shown below.

![](media/501ba516e4be9c8ec4ca6f37e2b6915f.png)

③Click **Endian** to select **Big Endian**(MSB)

![](media/1215ba2c27a8c08e4a4bef90b2c53f7d.png)

③ Generate hexadecimal data from the pattern

As shown below, the left button of the mouse is for selection while the right is for canceling. Thus you could use them to draw the pattern you want, then click **Generate**, to yield the hexadecimal data needed.

![](media/32e674da893cc93cd1330a9da73269cb.png)

**Wiring up：**

<table border="1">
<tbody>
<tr class="odd">
<td>8*8 Dot matrix display</td>
<td>PCB Board</td>
</tr>
<tr class="even">
<td>G</td>
<td>G</td>
</tr>
<tr class="odd">
<td>5V</td>
<td>5V</td>
</tr>
<tr class="even">
<td>SDA</td>
<td>SDA</td>
</tr>
<tr class="odd">
<td>SCL</td>
<td>SCL</td>
</tr>
</tbody>
</table>

**3. Test Code：**

The 8\*8 dot matrix is controlled by GPIO21（SDA）and GPIO22（SCL）of the ESP32 board.

![Img](./media/img-20250214083644.png)

**4. Test Result**

Upload the code to the ESP32 board(if the code can’t be uploaded, you can click![](media/dc77bfcf5851c8f43aab6cbe7cec7920.png)

Power up by a USB cable, the 8\*8 dot matrix display will show show patterns.



### Project 04: Servo Rotation

**Description：**

There are two servos on the car. We take the servo connected to pin D9 as an example. 

The servo is a motor that can rotate very accurately. It has been widely applied to toy cars, remote control helicopters, airplanes, robots and other fields. In this project, we will use the Nano motherboard to control the servo to spin.

**Knowledge：**

![](media/99830768916233a9c5900ac399006c17.png)

Servo motor is a position control rotary actuator. It mainly consists of a housing, a circuit board, a core-less motor, a gear and a position sensor. Its working principle is that the servo receives the signal sent by MCU or receiver and produces a reference signal with a period of 20ms and width of 1.5ms, then compares the acquired DC bias voltage to the voltage of the potentiometer and obtain the voltage difference output.

When the motor speed is constant, the potentiometer is driven to rotate through the cascade reduction gear, which leads that the voltage difference is 0, and the motor stops rotating. Generally, the angle range of servo rotation is 0° --180 °

The rotation angle of servo motor is controlled by regulating the duty cycle of PWM (Pulse-Width Modulation) signal. The standard cycle of PWM signal is 20ms (50Hz). Theoretically, the width is distributed between 1ms-2ms, but in fact, it's between 0.5ms-2.5ms. The width corresponds the rotation angle from 0° to 180°. But note that for different brand motors, the same signal may have different rotation angles.   

![](media/708316fde05c62113a3024e0efb0c237.jpeg)

In general, servo has three lines in brown, red and orange. The brown wire is grounded, the red one is a positive pole line and the orange one is a signal line.

![](media/35084ae289a08e35bdb8c89ceb134ba4.png)

**Wire up：**

<table border="1">
<tbody>
<tr class="odd">
<td>Servo</td>
<td>PCB Board</td>
</tr>
<tr class="even">
<td>Brown</td>
<td>G</td>
</tr>
<tr class="odd">
<td>Red</td>
<td>5V</td>
</tr>
<tr class="even">
<td>Orange</td>
<td>S1（GPIO4）</td>
</tr>
</tbody>
</table>

**Test Code：**

The servo for controlling the ultrasonic sensor is controlled by the GPIO4 of the ESP32 board.

![Img](./media/img-20250214083749.png)

**Test Result：**

Upload the code to the ESP32 board(if the code can’t be uploaded, you can click![](media/dc77bfcf5851c8f43aab6cbe7cec7920.png)

Power up with a USB cable, open the monitor and set baud rate to 115200. Then the arm of the servo will rotate to 0°, 45°, 90°, 135° and 180°

### Project 05: Motor Driving and Speed Control 

**1.Description：**

There are many ways to drive motors. This car uses the most commonly used DRV8833 motor driver chip, which provides a dual-channel bridge electric driver for toys, printers and other motor integration applications.

In this experiment, we use the DRV8833 motor driver chip on the expansion board to drive the two DC motors, and demonstrate the effect of forward, backward, left-turning, and right-turning.

2.**Knowledge：**

DRV8833 motor driver chip: Dual H-bridge motor driver with current control function, can drive two DC motors, one bipolar stepper motor, solenoid valve or other inductive loads. Each H-bridge includes circuitry to regulate or limit winding current.

An internal shutdown function with a fault output pin is used for over-current and short circuit protection, under-voltage lockout and over-temperature. A low-power sleep mode is also added. Let's take a look at the schematic diagram of the DRV8833 motor driver chip driving two DC motors: 

![](media/bc839fa0f37fdc3003485b0398dd6d1f.png)

![](media/9cb8b7c00f814e367040f2ed4a3c9f4a.png)

If you want to get insight to it, you can check the specification of this chip. Just browse it in the“Attachments”folder.

![](media/f7674a914ec2cbe10f1ec6446dc66c22.png)

**3. Specification：**

- Input voltage of logic part: DC 5V

- Input voltage of driving part : DC 5V

- Working current of logic part: \<30mA

- Operating current of driving part: \<2A

- Maximum power dissipation: 10W (T=80℃)

- Motor speed: 5V 200 rpm / min

- Motor drive form: dual H-bridge drive

- Control signal input level: high level 2.3V\<Vin\<5V, low level
  -0.3V\<Vin\<1.5V

- Working temperature: -25\~130℃



**4. Drive the car to move**

From the above diagram, the direction pin of the left motor is GPIO33; the speed pin is GPIO26; GPIO32 is the direction pin of the right motor; and GPIO25 is speed pin.

PWM drives the robot car. The PWM value is in the range of 0-255. The more the PWM value is set, the faster the rotation of the motor.

<table border="1">
<tbody>
<tr class="odd">
<td>Function</td>
<td>GPIO33</td>
<td>GPIO26（PWM)</td>
<td>Left motor</td>
<td>GPIO32</td>
<td>GPIO25（PWM）（PWM）</td>
<td>Right motor</td>
</tr>
<tr class="even">
<td>forward</td>
<td>LOW</td>
<td>200</td>
<td>clockwise</td>
<td>LOW</td>
<td>200</td>
<td>clockwise</td>
</tr>
<tr class="odd">
<td>Go back</td>
<td>HIGH</td>
<td>50</td>
<td>anticlockwise</td>
<td>HIGH</td>
<td>50</td>
<td>anticlockwise</td>
</tr>
<tr class="even">
<td>Turn left</td>
<td>HIGH</td>
<td>200</td>
<td>anticlockwise</td>
<td>LOW</td>
<td>200</td>
<td>clockwise</td>
</tr>
<tr class="odd">
<td>Turn right</td>
<td>LOW</td>
<td>200</td>
<td>clockwise</td>
<td>HIGH</td>
<td>200</td>
<td>anticlockwise</td>
</tr>
<tr class="even">
<td>Stop</td>
<td>LOW</td>
<td>0</td>
<td>stop</td>
<td>LOW</td>
<td>0</td>
<td>stop</td>
</tr>
</tbody>
</table>


5.**Test Code：**

![Img](./media/img-20250214083942.png)

**6. Test Result**

Upload the code to the ESP32 board(if the code can’t be uploaded, you can click![](media/dc77bfcf5851c8f43aab6cbe7cec7920.png)

Place batteries in the car, and turn the power switch to ON end and power up. Then the car moves forward for 2s, backward for 2s, turns left for 2s and right for 2s, stops for 2s.



### Project 06: Ultrasonic Sensor


**1.Description：**

There is an ultrasonic sensor on the car. It is a very affordable distance-measuring sensor. 

The ultrasonic sensor sends a high-frequency ultrasonic signal that human hearing can’t hear. When encountering obstacles, these signals will be reflected back immediately. After receiving the returned information, the distance between the sensor and the obstacle will be calculated by judging the time difference between the transmitted signal and the received signal. 

It is mainly used for object avoidance and ranging in various robotics projects.

In this experiment, we use an ultrasonic sensor to measure distance and print the data on a serial monitor.

**2. Knowledge：**

The HC-SR04 ultrasonic sensor uses sonar to determine distance to an object like what bats do. It offers excellent non-contact range detection with high accuracy and stable readings in an easy-to-use package. It comes complete with ultrasonic transmitter and receiver modules.

The HC-SR04 or the ultrasonic sensor is being used in a wide range of electronics projects for creating obstacle detection and distance measuring application as well as various other applications. Here we have brought the simple method to measure the distance with Arduino and ultrasonic sensor and how to use ultrasonic sensor with Arduino.

![](media/e6f6037071e434febf7090b56ac35802.png)

**Use method and timing chart of ultrasonic module:**

\1. Setting the delay time of Trig pin of SR04 to 10μs at least, which can trigger it to detect distance.

\2. After triggering, the module will automatically send eight 40KHz ultrasonic pulses and detect whether there is a signal return. This step will be completed automatically by the module.

\3. If the signal returns, the Echo pin will output a high level, and the duration of the high level is the time from the transmission of the ultrasonic wave to the return.

![](media/db430baa07e2e4d9ac9efca1950b953a.jpeg)

![](media/4114885ac4b6214953e3224d8c1d52c4.png)

Time=Echo pulse width, unit: us

Distance（cm）=time/ 58

Distance(inch)=time/ 148

The HC-SR04 ultrasonic sensor has four pins: Vcc, Trig, Echo and GND.

The Vcc pin provides power generating ultrasonic pulses and is connected to Vcc/+5V. The GND pin is grounded/GND. The Trig pin is where the Arduino sends a signal to start the ultrasonic pulse. The Echo pin is where the ultrasonic sensor sends information about the duration of the ultrasonic pulse stroke to the Arduino control board.

**Wiring Up**

<table border="1">
<tbody>
<tr class="odd">
<td>Ultrasonic Sensor</td>
<td>PCB Board</td>
</tr>
<tr class="even">
<td>Vcc</td>
<td>5V</td>
</tr>
<tr class="odd">
<td>Trig</td>
<td>S2（GPIO5）</td>
</tr>
<tr class="even">
<td>Echo</td>
<td>S1（GPIO18）</td>
</tr>
<tr class="odd">
<td>Gnd</td>
<td>G</td>
</tr>
</tbody>
</table>

**3. Test Code：**

The pin Trig and Echo of the ultrasonic sensor are controlled by the GPIO5 and GPIO18 of the ESP32 board.

![Img](./media/img-20250214084121.png)

**4. Test Result：**

Upload the test code to the ESP32 board, power up with a USB cable, open the serial monitor to click ![](media/5aa7c3468c7015b37236cd95c06280d8.png) and set baud rate to 115200.

When you move an object in front of the ultrasonic sensor, it will detect the distance and the serial monitor will show the distance value.

![](media/6a4ea6df5dfe05bebbfe1bfc03624059.png)

### Project 07: Follow Me

**1.Description：**

In the above experiments, we have learned about the 8*8 dot matrix, motor drivers and speed regulation, ultrasonic sensors, servos and other hardware. In this experiment, we will combine them to create a follow car with the ultrasonic sensor. The car can follow an object to move through measuring distance.

2.**Working Principle：**

<table border="1">
<tbody>
<tr class="odd">
<td>Detection</td>
<td>Detect the front distance</td>
<td>Distance（unit：cm）</td>
</tr>
<tr class="even">
<td>Condition 1</td>
<td>Distance＜8</td>
<td></td>
</tr>
<tr class="odd">
<td>State</td>
<td>Go back（set PWM to 100）</td>
<td></td>
</tr>
<tr class="even">
<td>Condition 2</td>
<td>8≤distance&lt;13</td>
<td></td>
</tr>
<tr class="odd">
<td>State</td>
<td>stop</td>
<td></td>
</tr>
<tr class="even">
<td>Condition 3</td>
<td>13≤distance&lt;35</td>
<td></td>
</tr>
<tr class="odd">
<td>State</td>
<td>Go forward（set PWM to 100）</td>
<td></td>
</tr>
<tr class="even">
<td>Condition 4</td>
<td>distance≥35</td>
<td></td>
</tr>
<tr class="odd">
<td>State</td>
<td>stop</td>
<td></td>
</tr>
</tbody>
</table>

3.**Flow Chart：**

![](media/e1ded45b4454e64b7ff419bad285cb3a.png)

4.**Test Code**

![Img](./media/img-20250214090605.png)

5.**Test Result**

Upload the code to the ESP32 board(if the code can’t be uploaded, you can click![](media/dc77bfcf5851c8f43aab6cbe7cec7920.png)

Place batteries in the car and turn the power switch to ON end and power up. Then the car will follow the obstacle to move.

### Project 08: Avoid obstacles

**1.Description：**

In this project, we will take advantage of the ultrasonic sensor to detect the distance away from the obstacle so as to avoid them

**2. Working Principle：**

<table border="1">
<tbody>
<tr class="odd">
<td></td>
<td>8*8 Dot matrix display</td>
<td></td>
<td></td>
</tr>
<tr class="even">
<td></td>
<td>Set servo to 90°</td>
<td></td>
<td></td>
</tr>
<tr class="odd">
<td><strong>loop</strong></td>
<td>Detect the distance away from the obstacle（unit: cm）</td>
<td></td>
<td></td>
</tr>
<tr class="even">
<td></td>
<td>Condition 1</td>
<td>State</td>
<td></td>
</tr>
<tr class="odd">
<td></td>
<td><strong>0&lt;distance＜10</strong></td>
<td>Stop</td>
<td></td>
</tr>
<tr class="even">
<td></td>
<td></td>
<td>Show the“stop”pattern</td>
<td></td>
</tr>
<tr class="odd">
<td></td>
<td></td>
<td>Set the servo to 180°</td>
<td>Distance away form the obstacle：a1（unit：cm）</td>
</tr>
<tr class="even">
<td></td>
<td></td>
<td>Set the servo to 0°</td>
<td>Distance away form the obstacle：a2（unit：cm）</td>
</tr>
<tr class="odd">
<td></td>
<td></td>
<td>Condition 2</td>
<td>State</td>
</tr>
<tr class="even">
<td></td>
<td></td>
<td><strong>a1＜a2</strong></td>
<td>Car turns right（set PWM to 200）</td>
</tr>
<tr class="odd">
<td></td>
<td></td>
<td></td>
<td>show“turning right”pattern</td>
</tr>
<tr class="even">
<td></td>
<td></td>
<td></td>
<td>Set servo to 90°</td>
</tr>
<tr class="odd">
<td></td>
<td></td>
<td><strong>a1≥a2</strong></td>
<td>Turn left（set PWM to 200）</td>
</tr>
<tr class="even">
<td></td>
<td></td>
<td></td>
<td>display“left turning”pattern</td>
</tr>
<tr class="odd">
<td></td>
<td></td>
<td></td>
<td>Set servo to 90°</td>
</tr>
<tr class="even">
<td></td>
<td><strong>distance≥10</strong></td>
<td>The 8*8 dot matrix display shows“going forward”pattern</td>
<td></td>
</tr>
<tr class="odd">
<td></td>
<td></td>
<td>Go forward（set PWM to 200）</td>
<td></td>
</tr>
</tbody>
</table>

**3. Flow Chart：**

![](media/62cafb9417859896368e046396c58495.png)

**4. Test Code**

![Img](./media/img-20250214091028.png)


**5. Test Result：**

Upload the test code to the ESP32 board, put batteries in the battery holder, turn the power switch to the ON end and power up. Then the car can automatically dodge obstacles

### Project 09: Line Tracking Sensor

**1.Description：**

There are two IR line tracking sensors on the car. They are actually two pairs of ST188L3 infrared tubes and used to detect black and white lines. In this project, we will make a line tracking car

In this experiment, we use ST188L3 infrared tubes to detect black and white lines, then print the data on the serial monitor.

**2. Knowledge：**

**Infrared line tracking:**

The IR line tracking sensor boasts a pair of ST188L3 infrared tubes. ST188L3 tubes has an infrared emitting diode and a receiver tube. When the emitting diode emits an infrared signal then received by the receiving tube after being reflected by the white object. Once the receiving tube receives the signal, the output terminal will output a low level (0); when the infrared emitting diode emits an infrared signal, and the infrared signal is absorbed by the black object, a high level (1) will be output, thus realizing the function of detecting signals through infrared rays. 

Warning: Reflective optical sensors (including IR line tracking sensors) shouldn’t be applied under sunlight as there is a lot of invisible light such as infrared and ultraviolet. 

Values detected by the line tracking sensor are shown in the table.

The value will be 1 if detecting black or no objects and the value 0 will appear if detecting white objects.

he detected black object or no object represents 1, and the detected white object represents 0. 

<table border="1">
<tbody>
<tr class="odd">
<td>Left</td>
<td>Right</td>
<td>Value（Binary ）</td>
</tr>
<tr class="even">
<td>0</td>
<td>0</td>
<td>00</td>
</tr>
<tr class="odd">
<td>0</td>
<td>1</td>
<td>01</td>
</tr>
<tr class="even">
<td>1</td>
<td>0</td>
<td>10</td>
</tr>
<tr class="odd">
<td>1</td>
<td>1</td>
<td>11</td>
</tr>
</tbody>
</table>

**3. Test Code：**

The line tracking sensors of the PCB board are controlled by GPIO17 and GPIO16 of the ESP32 baord.

![](media/4eafeaf5bbb9e3f06754b8b9b2b33a59.png)

**4. Test Result：**

Upload the test code to the ESP32 board, power up with a USB cable, open the serial monitor to click ![img](media/wps588.jpg) and set baud rate to 115200.

Put a black thing under the line tracking sensor of the car and move it, you will see different indicators light up, and at the same time you will see the value on the serial monitor. 

The sensitivity can be adjusted by rotating the potentiometer. When the indicator light is adjusted to the critical point of on and off state, the sensitivity is the highest. 

![](media/644a7f22ec6677f2bd52511708fe0d49.png)

### Project 10: Line Tracking

**1.Description：**

We’ve introduced the knowledge of motor drivers, speed regulation, and infrared line tracking. In this experiment, the car will perform different actions according to the values transmitted by the infrared tracking. 

2.**Working Principle：**

<table border="1">
<tbody>
<tr class="odd">
<td>Left</td>
<td>Right</td>
<td>Value（Binary ）</td>
<td>State</td>
</tr>
<tr class="even">
<td>0</td>
<td>0</td>
<td>00</td>
<td>Stop</td>
</tr>
<tr class="odd">
<td>0</td>
<td>1</td>
<td>01</td>
<td>Turn right</td>
</tr>
<tr class="even">
<td>1</td>
<td>0</td>
<td>10</td>
<td>Turn left</td>
</tr>
<tr class="odd">
<td>1</td>
<td>1</td>
<td>11</td>
<td>Move forward</td>
</tr>
</tbody>
</table>

3.**Flow Chart：**

![](media/c6a0ace5faa949e4fb24fc511d179e08.png)

4.**Test Code：**

![Img](./media/img-20250214091402.png)

5.**Test Result：**

Upload the test code to the ESP32 board, put batteries in the battery holder, turn the power switch to the ON end, power up and put the car on a map we provide. Then it will perform different functions via values sent by line tracking sensors

### Project 11: Photosensor

**1. Description：**

There are two photoresistors on the car. They can vary with the light intensity and send information to the Nano board to control the car.

Photoresistors can determine and conduct the car to move by detecting light.

In this experiment, we will learn the working principle of the photoresistor

**2. Knowledge：**

**Photoresistor:**

It mainly uses a photosensitive resistance element whose resistance varies from the light intensity. The signal terminal of the sensor is connected to the analog port of the microcontroller. 

When the light is stronger, the analog value at the analog port will increase; on the contrary, when the light intensity is weaker, the analog value of the microcontroller will reduce. In this way, the corresponding analog value can reflect the ambient light intensity.

**3. Wire up：**

Through the wiring-up diagram, signal pins of two photoresistors are connected to A6 and A7 of the Nano board.

For the following experiment, we use the photoresistor connected to A6 to finish experiments. First, let’s read analog values.

<table border="1">
<tbody>
<tr class="odd">
<td>Left photoresistor</td>
<td>PCB board</td>
</tr>
<tr class="even">
<td>G</td>
<td>G</td>
</tr>
<tr class="odd">
<td>V</td>
<td>V</td>
</tr>
<tr class="even">
<td>S</td>
<td>S（GPIO34）</td>
</tr>
</tbody>
</table>

**4. Test Code：**

The left photoresistor is controlled by the GPIO34 of the ESP32 board.

![](media/54d0658209cd6dc96c451c8da2f57428.png)

**5. Test Result：**

Upload the test code to the ESP32 board, power up with a USB cable, open the serial monitor to click ![](media/5aa7c3468c7015b37236cd95c06280d8.png) and set baud to 115200.

When the light intensifies, the analog value will get increased; on the contrary, the analog value will get reduced.

![](media/812937e5c7008a1cc7cd8943eec8ed60.png)

### Project 12: Light Following Car

1.**Description：**

We have learned the working principle of photoresistor, motor and speed regulation. In this experiment, we will use a photoresistor to detect the intensity of light as as to achieve the light following effect.

2.**Working Principle：**

<table border="1">
<tbody>
<tr class="odd">
<td>Analog value of the left sensor</td>
<td>Analog value of the right sensor</td>
<td>Function</td>
</tr>
<tr class="even">
<td>&gt;3000</td>
<td>&gt;3000</td>
<td>Move forward</td>
</tr>
<tr class="odd">
<td>&gt;3000</td>
<td>≤3000</td>
<td>Move to left</td>
</tr>
<tr class="even">
<td>≤3000</td>
<td>&gt;3000</td>
<td>Move to right</td>
</tr>
<tr class="odd">
<td>&lt;3000</td>
<td>&lt;3000</td>
<td>Stop</td>
</tr>
</tbody>
</table>

3.**Wiring up：**

<table border="1">
<tbody>
<tr class="odd">
<td>Left Photoresistor</td>
<td><p>PCB</p>
<p>Board</p></td>
<td></td>
<td>Right photoresistor</td>
<td><p>PCB</p>
<p>Board</p></td>
</tr>
<tr class="even">
<td>G</td>
<td>G</td>
<td></td>
<td>G</td>
<td>G</td>
</tr>
<tr class="odd">
<td>V</td>
<td>V</td>
<td></td>
<td>V</td>
<td>V</td>
</tr>
<tr class="even">
<td>S</td>
<td>S（GPIO34）</td>
<td></td>
<td>S</td>
<td>S（GPIO35）</td>
</tr>
</tbody>
</table>

4.**Flow Chart：**

![](media/8a5840a7da0fc461c19be88f0283ce50.png)

5.**Test Code：**

The left and right photoresistors are controlled by GPIO34 and GPIO35 of the ESP32 board.

![Img](./media/img-20250214091715.png)

**6. Test Result：**

Upload the test code to the ESP32 board, put batteries in the battery holder, turn the power switch to the ON end and power up. Then the car will follow the light to move.

### Project 13: IR Remote Control

**1.Description：**

Infrared remote controls are everywhere in daily life. It is used to control various home appliances, such as TV, speakers, video recorders and satellite signal receivers.

The remote control is composed of an IR emitter, an IR receiver and a decoding MCU. In this project, we will make a IR remote control car.

In this experiment, we will combine the IR receiver and the IR remote control to read key values and show them on the serial monitor.

2.**Knowledge：**

**IR Remote Control：**

It is a device with buttons. When the key is pressed, IR signals will be sent.

Infrared remote control technology is widely used, such as TVs, air conditioners and so on. And it can control air conditioners and TVs

The infrared remote control adopts NEC coding, and the signal period is 110ms.

The remote control is shown below:

![](media/3c9d76cb0d24d9861811ce2cb0bb6ae4.png)

Infrared (IR) receiver:

It can receive infrared light and be used to detect the infrared signal emitted by the infrared remote control.

It can demodulate the received infrared light signal and convert it back to binary, and then transmit the information to the microcontroller.

![](media/3da1969e509f53706643c77d0534eb73.png)

**NEC Infrared communication protocol：**

**NEC Protocol**

To my knowledge the protocol I describe here was developed by NEC (Now Renesas). I've seen very similar protocol descriptions on the internet, and there the protocol is called Japanese Format.

I do admit that I don't know exactly who developed it. What I do know is that it was used in my late VCR produced by Sanyo and was marketed under the name of Fisher. NEC manufactured the remote control IC.

This description was taken from my VCR's service manual. Those were the days, when service manuals were filled with useful information\!

**Features**

- > 8 bit address and 8 bit command length.

- > Extended mode available, doubling the address size.

- > Address and command are transmitted twice for reliability.

- > Pulse distance modulation.

- > Carrier frequency of 38kHz.

- > Bit time of 1.125ms or 2.25ms.

**Modulation**

![](media/da33571c6f0afb94b1ec1d91caba3edb.png)

The NEC protocol uses pulse distance encoding of the bits. Each pulse is a 560µs long 38kHz carrier burst (about 21 cycles). A logical "1" takes 2.25ms to transmit, while a logical "0" is only half of that, being 1.125ms. The recommended carrier duty-cycle is 1/4 or 1/3

**Protocol**

![](media/f970404e7bbfb5711fea5c776f689f3a.png)

The picture above shows a typical pulse train of the NEC protocol. With this protocol the LSB is transmitted first. In this case Address $59 and Command $16 is transmitted. A message is started by a 9ms AGC burst, which was used to set the gain of the earlier IR receivers. This AGC burst is then followed by a 4.5ms space, which is then followed by the Address and Command. Address and Command are transmitted twice. The second time all bits are inverted and can be used for verification of the received message. The total transmission time is constant because every bit is repeated with its inverted length. If you're not interested in this reliability you can ignore the inverted values, or you can expand the Address and Command to 16 bits each! 

Keep in mind that one extra 560µs burst has to follow at the end of the message in order to be able to determine the value of the last bit. 

![](media/63364daf21e5522c64eb8dfa82f2cef2.png)

A command is transmitted only once, even when the key on the remote control remains pressed. Every 110ms a repeat code is transmitted for as long as the key remains down. This repeat code is simply a 9ms AGC pulse followed by a 2.25ms space and a 560µs burst. 

![](media/afea92a3b5cc1aa2457d2b118b157c84.png)

**Extended NEC protocol**

The NEC protocol is so widely used that soon all possible addresses were used up. By sacrificing the address redundancy the address range was extended from 256 possible values to approximately 65000 different values. This way the address range was extended from 8 bits to 16 bits without changing any other property of the protocol. 

By extending the address range this way the total message time is no longer constant. It now depends on the total number of 1's and 0's in the message. If you want to keep the total message time constant you'll have to make sure the number 1's in the address field is 8 (it automatically means that the number of 0's is also 8). This will reduce the maximum number of different addresses to just about 13000. 

The command redundancy is still preserved. Therefore each address can still handle 256 different commands. 

![](media/2f78d1ce7f001926f6b90ad966796e91.png)

Keep in mind that 256 address values of the extended protocol are invalid because they are in fact normal NEC protocol addresses. Whenever the low byte is the exact inverse of the high byte it is not a valid extended address. 

**3.Test Code：**

The IR receiver on the PCB board is controlled by GPIO19 of the ESP32 board.

![Img](./media/img-20250214091912.png)

**4.Test Result：**

Upload the test code to the ESP32 board, power up with a USB cable, open the serial monitor to click ![](media/5aa7c3468c7015b37236cd95c06280d8.png) and set to 115200.

Press a key on the IR remote control, you will view a code on the serial monitor. If FFFFFFFF shows up, just ignore it.

![](media/f2849c33aea11342f98d53e15e073875.png)

**Code of each key**

![](media/ebcf0cb2055f7784505f76ceeaef9f47.jpeg)

### Project 14: IR Remote Control Car

**1.Description：**

In the above experiment, we have learned about the knowledge of the 8*8 dot matrix display, the motor driver and speed regulation, the infrared receiver and the infrared remote control. In this experiment, we will use the infrared remote control and the infrared receiver to control the car.

**2. Working Principle：**

|          Keys           | Keys Code | Functions                                    |
| :---------------------: | :-------: | -------------------------------------------- |
| ![img](./media/wps49.jpg) |  FF629D   | Go forward<br />Display “forward” pattern    |
| ![img](./media/wps50.jpg) |  FFA857   | Go back<br />Display “back” pattern          |
| ![img](./media/wps51.jpg) |  FF22DD   | Turn left<br />Show “left” pattern           |
| ![img](./media/wps52.jpg) |  FFC23D   | Turn right<br />Show “right turning” pattern |
| ![img](./media/wps53.jpg) |  FF02FD   | stop<br />show “stop” pattern                |

3.**Flow Chart：**

![](media/b8ecdfd8dbc04c43021b09bd2c6a48f0.png)

4.**Test Code：**

![Img](./media/img-20250214092144.png)

5.**Test Result：**

Upload the test code to the ESP32 motherboard, install batteries, turn the power switch to the ON end, power up and press a key of the IR remote control. Then the car will make the corresponding movement.



### Project 15: Read APP Button String

**1.Description：**

In the previous experiments, we have learned about the three modes of ESP32: WIFI Station mode, WIFI AP mode and WIFI AP+Station mode. Then in this chapter, we will use the WIFI Station mode of ESP32 to control a multi-function car via app

In this experiment, we first use the WIFI Station mode of ESP32 to read the characters via app.

**2. Components**

|                                                 |                                                              |                                                              |
| ----------------------------------------------- | ------------------------------------------------------------ | ------------------------------------------------------------ |
| ![](media/729232b0c2d2c01984808289b222890c.png) | ![image-20230505170459495](media/image-20230505170459495.png) | ![image-20230505170504241](media/image-20230505170504241.png)![image-20230505170507293](media/image-20230505170507293.png) |
| USB cable x1                                    | ESP32\*1                                                     | Cellphone/iPad\*1                                            |

3.**Install APP**

**Android system：**

![Img](./media/img-20250214092833.png)


Transfer the file Beetlebot.apk to your cellphone or IPAD, click it to install, and click“**ALLOW**”→“**INSTALL**”→“**OPEN**”.

![](media/655b30a1d179bd4a3055309ce07a3701.png)

![](media/ae159de2dfb79a1ce2bc06b256168bdb.png)

![](media/85c6702f6ed02ca8961778355d97044f.png)

![](media/bec3fc042dfcb68e8100dc4fc0edf8d1.png)

![](media/52cccc53b43b9abeaeb091f0d87261cf.jpeg)

**IOS system**

Open App Store

![](media/27924fdb3d67692df7c63d8d0fb72287.png)

Search Beetlebot，click“![](media/962a57f92b78eea1f0e3e81463497a9c.png)”to download Beetlebot.

The installation instructions are similar with Android system.

4.**Test Code：**

**⚠️ATTENTION:** Before uploading code, please replace the WiFi name(**REPLACE_WITH_YOUR_SSID**) in the code and the passwords(**REPLACE_WITH_YOUR_PASSWORD**) into yours.

![Img](./media/img-20250214093218.png)


**5. Test Result**

Upload the code to the ESP32 board(if the code can’t be uploaded, you can click![](media/dc77bfcf5851c8f43aab6cbe7cec7920.png)

Place batteries in the car, turn the power switch to ON end and power up.

Open the serial monitor and set baud rate to 115200; then the monitor will print detected WiFi IP address, open app to enter the detected Wifi IP address in the text box, as shown below;

For example, the following IP address is 192.168.1.137. Then click button ![img](media/wps589.jpg) to connect wifi.

If the IP address 192.168.1.137 is shown in the test box, which means wifi is connected with app.

![](media/3adbbce53f9e8e68090c8ebde9c01bd7.png)

Click each key on app, then the monitor will receive corresponding characters

If the monitor doesn’t display anything, press reset button to reboot

![](media/1fd21fafd84d2b529931a89d21a03d6a.png)

![](media/276bef7e8c96a8a76955f5094fcfc06c.png)

### Project 16: WiFi Control 8\*8 Dot Matrix Display  

**1.Description：**

In this experiment, we will use the WIFI Station mode to control the 8\*8 dot matrix display on the car through APP and WIFI.

**2.Install APP**

**⚠️<span style="color: rgb(255, 76, 65);">Special note:</span>** If you have downloaded and installed the APP, this step is skipped; If not, please refer to the installation instructions of link: [Project 18：Read WiFi APP Button String](https://url/) .

**3. Test Code：**

**⚠️ATTENTION:** Before uploading code, please replace the WiFi name(**REPLACE_WITH_YOUR_SSID**) in the code and the passwords(**REPLACE_WITH_YOUR_PASSWORD**) into yours.

![Img](./media/img-20250214093654.png)

**4. Test Result**

Open app, click ![](media/db52b661d5b22528618e9c14aefa367e.png), then the 8\*8 display will show the forward pattern; click ![](media/6abdf809090a56fb251e9ee4d44c70f4.png), the display will show the stop pattern; click ![](media/aca24e8c4a86a9a2702160be4a4d9970.png) to show the backward pattern

### Project 17: WiFi Control Multi-purpose Car

1.**Description**

In this project we will demonstrate how to control the car with app

**2.Install APP**

**⚠️<span style="color: rgb(255, 76, 65);">Special note:</span>** If you have downloaded and installed the APP, this step is skipped; If not, please refer to the installation instructions of link: [Project 18：Read WiFi APP Button String](https://url/) .

3.**Test Code**

**⚠️ATTENTION:** Before uploading code, please replace the WiFi name(**REPLACE_WITH_YOUR_SSID**) in the code and the passwords(**REPLACE_WITH_YOUR_PASSWORD**) into yours.

![Img](./media/img-20250214093849.png)

4.**Test Result**

Operate the APP according to the figure below to control the WiFi multi-function car

![](media/d3289f9c64ddb3b1e8129b0d6649b0dd.png)

