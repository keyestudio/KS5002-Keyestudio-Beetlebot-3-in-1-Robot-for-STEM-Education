# MicroPython Tutorial

<span style="color: rgb(2550, 10, 50);"><span style="font-size: 20px;">Please download and unzip the code files in your computer, and move it to a disk that is convenient for using, for instance, **Disk(D:)** in this tutorial, and the path is **`D:..\Codes\MicroPython_Code`**</span></span>. You can also store the code in other disks as needed.

## 1. About MicroPython IDE

**⚠️<span style="color: rgb(255, 76, 65);">ATTENTION</span>**: In this tutorial, we use Thonny IDE 4.1.7. Other versions may not be compatible.

### 1.1. Download Thonny(<span style="color: rgb(255, 76, 65);">Important</span>)

#### Windows

**Operating System: Windows 10**

Enter [Thonny IDE official](https://thonny.org) to download the Thoony for Windows version. 

![Img](./media/img-20241226141144.png)

![Img](./media/img-20241226141544.png)

#### MAC

Please refer to Windows.

![Img](./media/img-20241226141651.png)

![Img](./media/img-20241226141850.png)

#### Linux

Please refer to Windows.

![Img](./media/img-20241226142011.png)

![Img](./media/img-20241226142806.png)

### 1.2. Install Thonny(<span style="color: rgb(255, 76, 65);">Important</span>)

Thonny supports two installation methods:

- Thonny+Python package

  Python IDE and Thonny are packaged together and can be directly installed and used. It is fast and easy so is recommended for beginners. There are also two ways to install this package:

  - Installer

    ![Img](./media/img-20241226142431.png)

  - Portable variant

    ![Img](./media/img-20241226142617.png)

- Thonny only

  Thonny is actually a package of python. When the user already has a python environment, click **pip install thonny** to install Thonny only, which is more suitable for developers.

  ![Img](./media/img-20241226142716.png)

Please download the corresponding version according to your requirements.

#### Installer

Download the app according to your operation system. Here we demonstrate under **64bit Windows 10** to download <span style="color: rgb(255, 76, 65);">Installer with 64-bit Python 3.10</span>.

(1) Click ![Img](./media/img-20241226143222.png) and you will see “Select Setup Install Mode”. Choose **Install for me only**.

![Img](./media/img-20241226143608.png)

(2) **Next**.

![Img](./media/img-20241226144000.png)

(3) Tick **I accept the agreement** and Click **Next**.

![Img](./media/img-20241226144027.png)

(4) The default installation path is in Disk C. You may click **Browse...** to choose another disk. And then click **Next**.

![Img](./media/img-20241226144111.png)

(5) By default, a shortcut to the program is created in the Start menu folder. Click **Browse...** to set another path for the shortcut and **Next**.

![Img](./media/img-20241226144156.png)

(6) Tick **Create desktop icon** and **Next**.

![Img](./media/img-20241226144233.png)

(7) Install.

![Img](./media/img-20241226144309.png)

(8) “**Finish**”!

![Img](./media/img-20241226144341.png)

(9) Back to the desktop and start Thonny to choose a language.

![Img](./media/img-20241226144416.png)

(10) Done.

![Img](./media/img-20241226144716.png)

#### Portable Variant

Download the app according to your operation system. Here we demonstrate under **64bit Windows 10** to download <span style="color: rgb(255, 76, 65);">Installer with 64-bit Python 3.10</span>.

(1) Click ![Img](./media/img-20241226144801.png) to start Thonny and choose a language.

![Img](./media/img-20241226144825.png)

(2) Done.

![Img](./media/img-20241226144852.png)

(3) For ease of use, you can create a shortcut to the desktop. Click ![Img](./media/img-20241226144956.png) and choose “**Send to**” to create a **shortcut to the desktop**.

![Img](./media/img-20241226145708.png)

The shortcut to the desktop: ![Img](./media/img-20241226145741.png) 

---

### 1.3. Install Driver

We need a driver to start our ESP32 MPU. Otherwise, the COM port connected to your computer will not be found. For how to install the driver: [https://docs.keyestudio.com/projects/Arduino/en/latest/Arduino%20IDE%20Tutorial.html#install-driver](https://docs.keyestudio.com/projects/Arduino/en/latest/Arduino%20IDE%20Tutorial.html#install-driver)

According to ESP32 board and computer system, click the corresponding link to go to the guide.

![Img](./media/img-20250213140334.png)

---

### 1.4. Burn Firmware(<span style="color: rgb(255, 76, 65);">Important</span>)

<span style="color: rgb(255, 76, 65);">The ESP32 MicroPython firmware we provided is saved in folder **Firmware esp32**.</span>

![Img](./media/img-20241226161849.png)

1\. Connect the ESP32 board to your computer via Micro USB.

![Img](./media/img-20241226150654.png)

2\. Click “**Run**” to choose “**Configuration interpreter**”.

![Img](./media/img-20241226151659.png)

3\. Choose “**Interpreter**” and “**MicroPython(ESP32)**”, and then “**Install or update MicroPython(esptool)(UF2)**”.

![Img](./media/img-20241226153049.png)

4\. Click the “![Img](./media/img-20241226153241.png)” icon to “**Select local MicroPython image...**”. Find the firmware in the folder **Firmware esp32** and choose “<span style="color: rgb(255, 76, 65);">ESP32_GENERIC-20241129-v1.24.1.bin</span>” to “**Open**”.

![Img](./media/img-20241226153443.png)

![Img](./media/img-20241226154627.png)

![Img](./media/img-20241226155410.png)

5\. Choose the “**USB serial port(COMXX)**” (*Serial port numbers(COMXX) vary from boards*) to “**Install**” it.

![Img](./media/img-20241226155606.png)

6\. After installation, “**Close**” and “**OK**”.

![Img](./media/img-20241226155935.png)

![Img](./media/img-20241226160105.png)

![Img](./media/img-20241226160246.png)

7\. Now the firmware of ESP32 is installed.

![Img](./media/img-20241226161232.png)

---

### 1.5. Use Thonny

#### Homepage

Click **View** and tick **Files** to open the file manager.

![Img](./media/img-20241226162125.png)

![Img](./media/img-20241226162905.png)

#### Toolbar

![Img](./media/img-20241226165931.png)

|          Icon          |       Function       |
| :---------------------: | :---------------: |
|![Img](./media/img-20241226162932.png) |       New       |
| ![Img](./media/img-20241226162959.png) |      Open...      |
| ![Img](./media/img-20241226163022.png)|       Save       |
| ![Img](./media/img-20241226163047.png) |   Run current script   |
| ![Img](./media/img-20241226163210.png) |   Debug current script   |
| ![Img](./media/img-20241226163235.png) |       Step over       |
| ![Img](./media/img-20241226163308.png) |   Step into   |
| ![Img](./media/img-20241226163322.png) |    Step out   |
| ![Img](./media/img-20241226163339.png) |     Resume     |
| ![Img](./media/img-20241226163357.png) | Stop/Restart backend |

---

### 1.6. Test

<span style="color: rgb(255, 76, 65);">Please download and unzip the code files in your computer, and move it to a disk that is convenient for using, for instance, **Disk(D:)** in this tutorial, and the path is **`D:..\Codes\MicroPython_Code`**. You can also store the code in other disks as needed.</span>

In Files, click **This computer**.

![Img](./media/img-20241226165526.png)

Open **Disk(D:)** and choose **Codes** folder to open **MicroPython_Code**. All codes in this tutorial are stored in it.

![Img](./media/img-20241226170235.png)

Connect the ESP32 board to your computer via Micro USB.

![Img](./media/img-20241226170549.png)

![Img](./media/img-20241226171231.png)

#### Test Shell Command

Input the following code in “Shell”.	

```python
print('hello world')
```
![Img](./media/img-20241226171458.png)

Then press the **Enter** on the keyboard, and the “Shell” shows **hello world**.

![Img](./media/img-20241226171618.png)

---

#### Test Online Running

Connect the LED and a 220Ω resistor to the ESP32 board, and connect the ESP32 board to your computer via USB cable.

![Img](./media/img-20241226173246.png)

In Files, open **2-3-01_Hello_LED!.py**.

![Img](./media/img-20241226172701.png)

Click ![Img](./media/img-20241226133629.png) to run the code, and you will see the red LED lights up for 1 second and goes off for 1 second, repeatedly.

![Img](./media/img-20240823164506.png)

Click ![Img](./media/img-20241226133854.png) to exit the execution.

---

#### Test Offline Running

**Method ①**: Run the already written program offline

First make sure the Thonny IDE is not in **Online** state. Click ![Img](./media/img-20241226133854.png) to exit online running.

In Files, open **2-3-01_Hello_LED!.py** and choose **File** --> **Save as...** 

![Img](./media/img-20241226172701.png)

![Img](./media/img-20241226174029.png)

Choose **MicroPython device**.

![Img](./media/img-20241226174101.png)

Name the file to **main\.py** (it has to be this name, otherwise the offline running will fail). Click **OK** and you can see the main\.py in **MicroPython device**.

![Img](./media/img-20241226174417.png)

![Img](./media/img-20241226175235.png)

After uploading, unplug the USB cable connecting the ESP32 main board to the computer.

Then power on again (connect the ESP32 board to the computer via USB cable), it will automatically run the program in main\.py, you can see the red LED turns on for 1 second, then off for 1 second, repeatedly.

![Img](./media/img-20240823164506.png)

**Method ②**: Run the newly written program offline

Connect the ESP32 board to your computer via Micro USB.

![Img](./media/img-20241226175528.png)

In Files, open **2-3-01_Hello_LED!.py** and copy and paste it to a new program **<untitled\>**. You may click ![Img](./media/img-20241226175719.png) to create a new script <untitled\>.

![Img](./media/img-20241226180013.png)

Click ![Img](./media/img-20241226180051.png) to save it in **MicroPython device**.

![Img](./media/img-20241227080924.png)

Name the file to **main\.py** (it has to be this name, otherwise the offline running will fail). Click **OK** and you can see the main\.py in **MicroPython device**.

![Img](./media/img-20241227081216.png)

![Img](./media/img-20241227081308.png)

After uploading, unplug the USB cable connecting the ESP32 main board to the computer.

Then power on again (connect the ESP32 board to the computer via USB cable), it will automatically run the program in main\.py, you can see the red LED turns on for 1 second, then off for 1 second, repeatedly.

![Img](./media/img-20240823164506.png)

---

### 1.7. Import MicroPython Library(<span style="color: rgb(255, 76, 65);">Important</span>)

For some projects, libraries are required. Therewith, we need to import needed libraries to the ESP32 main board before uploading code.

1\. Connect the ESP32 board to your computer via Micro USB.

![Img](./media/img-20241226170549.png)

2\. Open Thonny IDE and choose “**MicroPython(ESP32) . USB Serial @ COMxx**”.

![Img](./media/img-20250103163129.png)

3\. Tick “ **View** -> **Files** ”.

![Img](./media/img-20250103163703.png)

4\. Choose the path to the downloaded **Library** folder, and open **MicroPython_Library**. 
(<span style="color: rgb(255, 76, 65);">⚠️Note that here we download the **Libray** to disk D. You need to choose your path which saves the **Libray** you donwload.</span>)

![Img](./media/img-20250103165338.png)

5\. Click the **gfx\.py** file in the ***MicroPython_Libray*** folder to “***Upload to/***” the “**MicroPython device**”.

![Img](./media/img-20250103171456.png)

6\. You can see the file that you just uploaded to the “**MicroPython device**”.

![Img](./media/img-20250103172153.png)

7\. Similarly, import all libraries to “**MicroPython device**”.

8\. And all libraries are in “**MicroPython device**”.

![Img](./media/img-20250103173306.png)

## 2. Projects

### Project 01: 6812 RGB

 **1. Description：**

There are 4 RGB LEDs can be widely used in the decoration of buildings, bridges, roads, gardens, courtyards and so on by colors adjustment.

In this experiment, we will demonstrate different lighting effects with them.

 **2. Knowledge：**

**Working Principle**

From the schematic diagram, we can see that these four pixel lighting beads are all connected in series. In fact, no matter how many they are, we can use a pin to control a light and let it display any color. The pixel point contains a data latch signal shaping amplifier drive circuit, a high-precision internal oscillator and a 12V high-voltage programmable constant current control part, which effectively ensures the color of the pixel point light is highly consistent.

The data protocol adopts a single-wire zero-code communication method. After the pixel is powered up and reset, the S terminal receives the data transmitted from the controller. The first 24bit data sent is extracted by the first pixel and sent to the data latch of the pixel.

![](media/86e292d0666046b72a1e0e68adfb17e8.png)

 **3. Test Code：**

The SK6812RGB on the PCB board is controlled by the GPIO 14 of the ESP32 board.


Open “Thonny IDE” and choose “This Computer” → “D:” → “Codes” → “MicroPython_Code”. Open the file “Project_01_6812_RGB.py” or copy and paste the following code into “Thonny IDE”.

```python
# Import Pin, neopiexl and time modules.
from machine import Pin
import neopixel
import time

# Define the number of pin and LEDs connected to neopixel.
pin = Pin(14, Pin.OUT)
np = neopixel.NeoPixel(pin, 4)

# brightness :0-255
brightness=100                                
colors=[[brightness,0,0],                    # red
        [0,brightness,0],                    # green
        [0,0,brightness],                    # blue
        [brightness,brightness,brightness],  # white
        [0,0,0]]                             # close

# Nest two for loops to make the module repeatedly display five states of red, green, blue, white and OFF.    
while True:
    for i in range(0,5):
        for j in range(0,4):
            np[j]=colors[i]
            np.write()
            time.sleep_ms(50)
        time.sleep_ms(500)
    time.sleep_ms(500)
```

Connect the ESP32 main board to your computer via Micro USB cable. Click ![Img](./media/img-20241226133629.png) to run the code. After uploading the code, then the RGB LEDs will will show red, green, blue and white color then go off, loop alternately

![](media/0d23e6891643e73ce98dc2f93def946d.jpeg)

Click ![Img](./media/img-20241226133854.png) to exit the execution.

![](media/1479e2552446d8810501bf0c2320cd32.png)

### Project 02: Play Music

 **1. Description：**

There is a power amplifier component on the expansion board, which is often used to play music and serve as an external amplifying device for music playback devices.

In this experiment, we use the speaker amplifier component to play music.

 **2. Knowledge：**

Power amplifier modules(equivalent to a passive buzzer) don’t have internal oscillation circuits.

The power amplifier module can chime sounds with different frequency when power it up.

 **3. Test Code：**

The speaker component on the PCB board is controlled by the GPIO 2 of the ESP32 board.



Open “Thonny IDE” and choose “This Computer” → “D:” → “Codes” → “MicroPython_Code”. Open the file “Project_02_Buzzer.py” or copy and paste the following code into “Thonny IDE”.

```python
from machine import Pin, PWM
import time

beeper = PWM(Pin(2, Pin.OUT)) 

notes = [1915, 1700, 1519, 1432, 1275, 1136, 1014, 956, 834, 765, 593, 468, 346, 224, 655, 715]

for note in notes:     
    if note == 0:        
        beeper.duty(0)
    else:
        beeper.duty(512)  
        beeper.freq(note) 
    time.sleep(0.2)       
    beeper.duty(0)        
    time.sleep(0.1)
```

**4. Test Result：**

Connect the ESP32 main board to your computer via Micro USB cable. Click ![Img](./media/img-20241226133629.png) to run the code. After uploading the code,  then the speaker module on the PCB will emit sounds.

Click ![Img](./media/img-20241226133854.png) to exit the execution.


### Project 03: 8*8 Dot Matrix Display

 **1. Description：**

Composed of LED emitting tube diodes, the 8\*8 LED dot matrix are applied widely to public information display like advertisement screen and bulletin board, by controlling LED to show words, pictures and videos, etc.

 **2. Knowledge：**

 Dot matrix

There are different types of matrices, including 4×4, 8×8 and 16×16 and etc. It contains 64 LEDs.

The inner structure of 8×8 dot matrix is shown below.

![](media/df08c3a7c84497e429ce6fde7253d9b3.jpeg)

Every LED is installed on the cross point of row line and column line. When the voltage on a row line increases, and the voltage on the column line reduces, the LED on the cross point will light up. 8×8 dot matrix has 16 pins. Put the silk-screened side down and the numbers are 1, 8, 9 and 16 in anticlockwise order as marked below.

![](media/6576aff8e8a7fb35335629c2f60de29b.jpeg)

The definition inner pins are shown below:

![](media/4b98c449bae6648d7719a58d9ab2efa7.jpeg)

For instance, to light up the LED on row 1 and column 1, you should increase the voltage of pin 9 and reduce the voltage of pin 13.

 **HT16K33 8X8 Dot Matrix**

The HT16K33 is a memory mapping and multi-purpose LED controller driver. The max. Display segment numbers in the device is 128 patterns (16 segments and 8 commons) with a 13\*3 (MAX.) matrix key scan circuit. The software configuration features of the HT16K33 makes it suitable for multiple LED applications including LED modules and display subsystems. The HT16K33 is compatible with most microcontrollers and communicates via a two-line bidirectional I2C-bus.

 **Working schematic of HT16K33 chip**

![](media/fa5b7bd0d5ce98dbd4cb392dfb0b95e7.png)

We design the drive module of 8\*8 dot matrix based on the above principle. We could control the dot matrix by I2C communication and two pins of microcontroller, according to the above diagram.

 **Specification**

- Input voltage: 5V    

- Rated input frequency: 400KHZ 

- Input power: 2.5W  

- Input current: 500mA  

 **3. Introduction for Modulus Tool**

The online version of dot matrix modulus tool:<http://dotmatrixtool.com/>

①Open the link to enter the following page.

![](media/354693b5679a2615c62e99b7025d6355.png)

②The dot matrix is 8\*8 in this project. So set the height to 8, width to 8; as shown below.

![](media/501ba516e4be9c8ec4ca6f37e2b6915f.png)

**③**Click **Byte Order** to select **Row Major**

Click **Endian** to select **Big Endian**(MSB)

![](media/4da6da68aeb2cb71e95fe6ece173a5d5.png)

![](media/1215ba2c27a8c08e4a4bef90b2c53f7d.png)

③ Generate hexadecimal data from the pattern

As shown below, the left button of the mouse is for selection while the right is for canceling. Thus you could use them to draw the pattern you want, then click **Generate**, to yield the hexadecimal data needed.

![](media/32e674da893cc93cd1330a9da73269cb.png)

The generated hexadecimal code（0x00, 0x66, 0x00, 0x00, 0x18, 0x42, 0x3c, 0x00) is what will be displayed, so you need to save it for next procedure.

 **4. Wiring up：**

| 8*8 Dot matrix display | PCB Board |
| :--------------------: | :-------: |
|           G            |     G     |
|           5V           |    5V     |
|          SDA           |    SDA    |
|          SCL           |    SCL    |

 **5. Test Code：**

The 8\*8 dot matrix is controlled by GPIO21（SDA）and GPIO22（SCL）of the ESP32 board.



Open “Thonny IDE” and choose “This Computer” → “D:” → “Codes” → “MicroPython_Code”. Open the file “Project_03_8×8_Dot_Matrix_Display.py” or copy and paste the following code into “Thonny IDE”.


```python
# IMPORTS
import utime as time
from machine import I2C, Pin, RTC
from ht16k33matrix import HT16K33Matrix

# CONSTANTS
DELAY = 0.01
PAUSE = 3

# START
if __name__ == '__main__':
    i2c = I2C(scl=Pin(22), sda=Pin(21))
    display = HT16K33Matrix(i2c)
    display.set_brightness(2)

    # Draw a custom icon on the LED
    icon = b"\x00\x66\x00\x00\x18\x42\x3c\x00"
    display.set_icon(icon).draw()
    # Rotate the icon
    display.set_angle(0).draw()
    time.sleep(PAUSE)
```

Note: the code ![](media/b0cf48986eb2530a91a69ce69b1eb01a.png) changes into the code.

![](media/a9aee1521e3e842183824bb13d1f0036.png)

 **6. Test Result：**

Connect the ESP32 main board to your computer via Micro USB cable. Click ![Img](./media/img-20241226133629.png) to run the code. After uploading the code,  then the 8\*8 module will show a smile pattern. 

Click ![Img](./media/img-20241226133854.png) to exit the execution.

### Project 04: Servo Rotation

 **1. Description：**

There are two servos on the car. We take the servo connected to pin D9 as an example.

The servo is a motor that can rotate very accurately. It has been widely applied to toy cars, remote control helicopters, airplanes, robots and other fields. In this project, we will use the Nano motherboard to control the servo to spin.

 **2. Knowledge：**

![](media/99830768916233a9c5900ac399006c17.png)

Servo motor is a position control rotary actuator. It mainly consists of a housing, a circuit board, a core-less motor, a gear and a position sensor. Its working principle is that the servo receives the signal sent by MCU or receiver and produces a reference signal with a period of 20ms and width of 1.5ms, then compares the acquired DC bias voltage to the voltage of the potentiometer and obtain the voltage difference output.

When the motor speed is constant, the potentiometer is driven to rotate through the cascade reduction gear, which leads that the voltage difference is 0, and the motor stops rotating. Generally, the angle range of servo rotation is 0° --180 °

The rotation angle of servo motor is controlled by regulating the duty cycle of PWM (Pulse-Width Modulation) signal. The standard cycle of PWM signal is 20ms (50Hz). Theoretically, the width is distributed between 1ms-2ms, but in fact, it's between 0.5ms-2.5ms. The width corresponds the rotation angle from 0° to 180°. But note that for different brand motors, the same signal may have different rotation angles.  

![](media/708316fde05c62113a3024e0efb0c237.jpeg)

In general, servo has three lines in brown, red and orange. The brown wire is grounded, the red one is a positive pole line and the orange one is a signal line.

![](media/35084ae289a08e35bdb8c89ceb134ba4.png)

 **3. Wire up：**

| Servo  |  PCB Board  |
| :----: | :---------: |
| Brown  |      G      |
|  Red   |     5V      |
| Orange | S1（GPIO4） |

 **4. Test Code：**

The servo for controlling the ultrasonic sensor is controlled by the GPIO4 of the ESP32 board.



Open “Thonny IDE” and choose “This Computer” → “D:” → “Codes” → “MicroPython_Code”. Open the file “Project_04_Servo_Sweep.py” or copy and paste the following code into “Thonny IDE”.

```python
import machine
import time

# Create a PWM (Pulse Width Modulation) object on Pin 4
servo = machine.PWM(machine.Pin(4))

# Set the frequency of the PWM signal to 50 Hz, common for servos
servo.freq(50)

# Define a function for interval mapping
def interval_mapping(x, in_min, in_max, out_min, out_max):
    return (x - in_min) * (out_max - out_min) / (in_max - in_min) + out_min

# Define a function to write an angle to the servo
def servo_write(pin, angle):

    pulse_width = interval_mapping(angle, 0, 180, 0.5, 2.5) # Calculate the pulse width
    duty = int(interval_mapping(pulse_width, 0, 20, 0, 1023))     # Calculate the duty cycle
    pin.duty(duty) # Set the duty cycle of the PWM signal

# Create an infinite loop
while True:
    # Loop through angles from 0 to 180 degrees
    for angle in range(180):
        servo_write(servo, angle)
        time.sleep_ms(20)

    # Loop through angles from 180 to 0 degrees in reverse
    for angle in range(180, -1, -1):
        servo_write(servo, angle)
        time.sleep_ms(20)
```

 **5. Test Result：**

Place batteries in the battery holder, turn the power switch to ON end and power up.

Connect the ESP32 main board to your computer via Micro USB cable. Click ![Img](./media/img-20241226133629.png) to run the code. After uploading the code, then the servo rotate from 0° to 180°, then from 180° to 0°, loop alternately.

Press “Ctrl+C” or click ![](media/27451c8a9c13e29d02bc0f5831cfaf1f.png) to exit.

![](media/4991039a1f318584a098e274663485b0.png)

### Project 05: Motor Driving and Speed Control 

 **1. Description：**

There are many ways to drive motors. This car uses the most commonly used DRV8833 motor driver chip, which provides a dual-channel bridge electric driver for toys, printers and other motor integration applications.

In this experiment, we use the DRV8833 motor driver chip on the expansion board to drive the two DC motors, and demonstrate the effect of forward, backward, left-turning, and right-turning.

 **2. Knowledge：**

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

- Control signal input level: high level 2.3V\<Vin\<5V, low level -0.3V\<Vin\<1.5V

- Working temperature: -25\~130℃


 **4. Drive the car to move**

From the above diagram, the direction pin of the left motor is GPIO33; the speed pin is GPIO26; GPIO32 is the direction pin of the right motor; and GPIO25 is speed pin.

PWM drives the robot car. The PWM value is in the range of 0-255. The more the PWM value is set, the faster the rotation of the motor.

|  Function  | GPIO33 | GPIO26（PWM) |  Left motor   | GPIO32 | GPIO25（PWM) |  Right motor  |
| :--------: | :----: | :----------: | :-----------: | :--: | :----: | :----------: |
|  forward   |  LOW   |     200      |   clockwise   |  LOW   |     200      |   clockwise   |
|  Go back   |  HIGH  |      50      | anticlockwise |  HIGH  |      50      | anticlockwise |
| Turn left  |  HIGH  |     200      | anticlockwise |  LOW   |     200      |   clockwise   |
| Turn right |  LOW   |     200      |   clockwise   |  HIGH  |     200      | anticlockwise |
|    Stop    |  LOW   |      0       |     stop      |  LOW   |      0       |     stop      |

**5. Test Code：**



Open “Thonny IDE” and choose “This Computer” → “D:” → “Codes” → “MicroPython_Code”. Open the file “Project_05_Motor_Drive_And_Speed_Regulation.py” or copy and paste the following code into “Thonny IDE”.


```python
from machine import Pin,PWM
import time

# right wheel
pin1=Pin(32,Pin.OUT)
pin2=PWM(Pin(25),freq=12500)

# left wheel
pin3=Pin(33,Pin.OUT)
pin4=PWM(Pin(26),freq=12500)

# As a function of the car going forward.
def car_forward(): 
  pin1.value(0)
  pin2.duty(1000) 
  pin3.value(0)
  pin4.duty(1000)  

# As a function of the car going backwards.
def car_back(): 
  pin1.value(1)
  pin2.duty(250) 
  pin3.value(1)
  pin4.duty(250)

# As a function of the car going left.
def car_left(): 
  pin1.value(0)
  pin2.duty(1000) 
  pin3.value(1)
  pin4.duty(500)  

# As a function of the car going right.
def car_right(): 
  pin1.value(1)
  pin2.duty(500) 
  pin3.value(0)
  pin4.duty(1000)

# As a function of the car stopping.
def car_stop(): 
  pin1.value(0)
  pin2.duty(0) 
  pin3.value(0)
  pin4.duty(0)   
try:
    while True:
        car_forward() #Car ahead
        time.sleep(2) # delay 2s
        car_back() # Car goes back
        time.sleep(2)    
        car_left() # Car to the left
        time.sleep(2)    
        car_right() # Car to the right
        time.sleep(2)    
        car_stop() # Car stop
        time.sleep(2)     
except:
    pass 
```

 **6.Test Result**

Place batteries, turn the power switch to ON end and power up. 

Connect the ESP32 main board to your computer via Micro USB cable. Click ![Img](./media/img-20241226133629.png) to run the code. After uploading the code, then the car will move forward for 2s, back for 2s, turn left for 2s, right for 2s and stops for 2s, loop alternately.

Press“Ctrl+C”or click ![](media/27451c8a9c13e29d02bc0f5831cfaf1f.png) to exit.

![](media/1abf8c357085069e213814914cc278ec.png)

### Project 06: Ultrasonic Sensor

 **1. Description：**

There is an ultrasonic sensor on the car. It is a very affordable distance-measuring sensor. 

The ultrasonic sensor sends a high-frequency ultrasonic signal that human hearing can’t hear. When encountering obstacles, these signals will be reflected back immediately. After receiving the returned information, the distance between the sensor and the obstacle will be calculated by judging the time difference between the transmitted signal and the received signal. It is mainly used for object avoidance and ranging in various robotics projects.

In this experiment, we use an ultrasonic sensor to measure distance and print the data on a serial monitor.

 **2. Knowledge：**

The HC-SR04 ultrasonic sensor uses sonar to determine distance to an object like what bats do. It offers excellent non-contact range detection with high accuracy and stable readings in an easy-to-use package. It comes complete with ultrasonic transmitter and receiver modules.

The HC-SR04 or the ultrasonic sensor is being used in a wide range of electronics projects for creating obstacle detection and distance measuring application as well as various other applications. Here we have brought the simple method to measure the distance with Arduino and ultrasonic sensor and how to use ultrasonic sensor with Arduino.

![](media/e6f6037071e434febf7090b56ac35802.png)

**Use method and timing chart of ultrasonic module:**

1.  Setting the delay time of Trig pin of SR04 to 10μs at least, which can trigger it to detect distance.

2.  After triggering, the module will automatically send eight 40KHz ultrasonic pulses and detect whether there is a signal return. This step will be completed automatically by the module.

3.  If the signal returns, the Echo pin will output a high level, and the duration of the high level is the time from the transmission of the ultrasonic wave to the return.

![](media/4114885ac4b6214953e3224d8c1d52c4.png)

Time=Echo pulse width, unit: us

$$
Distance（cm）= time/ 58
$$

$$
Distance (inch) = time / 148
$$

The HC-SR04 ultrasonic sensor has four pins: Vcc, Trig, Echo and GND.

The Vcc pin provides power generating ultrasonic pulses and is connected to Vcc/+5V. The GND pin is grounded/GND.

The Trig pin is where the Arduino sends a signal to start the ultrasonic pulse. The Echo pin is where the ultrasonic sensor sends information about the duration of the ultrasonic pulse stroke to the Arduino control board.

 **3. Wiring Up**

| Ultrasonic Sensor |  PCB Board   |
| :---------------: | :----------: |
|        Vcc        |      5V      |
|       Trig        | S2（GPIO5）  |
|       Echo        | S1（GPIO18） |
|        Gnd        |      G       |

 **4. Test Code：**

The pin Trig and Echo of the ultrasonic sensor are controlled by the GPIO5 and GPIO18 of the ESP32 board.

Open “Thonny IDE” and choose “This Computer” → “D:” → “Codes” → “MicroPython_Code”. Open the file “Project_06_Ultrasonic_Sensor.py” or copy and paste the following code into “Thonny IDE”.

```python
from machine import Pin
import time

# Define the control pins of the ultrasonic ranging module.  
trigPin=Pin(5,Pin.OUT,0)
echoPin=Pin(18,Pin.IN,0)
# Set the speed of sound.
soundVelocity=340
distance=0

# Subfunction getSonar() is used to start the Ultrasonic Module to begin measurements,
# and return the measured distance in centimeters. In this function, first let trigPin
# send 10us high level to start the Ultrasonic Module. Then use pulseIn() to read
# the Ultrasonic Module and return the duration time of high level.
# Finally, the measured distance according to the time is calculated.
def getSonar():
    trigPin.value(1)
    time.sleep_us(10)
    trigPin.value(0)
    while not echoPin.value():
        pass
    pingStart=time.ticks_us()
    while echoPin.value():
        pass
    pingStop=time.ticks_us()
    pingTime=time.ticks_diff(pingStop,pingStart)
    distance=pingTime*soundVelocity//2//10000
    return int(distance)

# Delay for 2 seconds and wait for the ultrasonic module to stabilize,
# Print data obtained from ultrasonic module every 500 milliseconds.
time.sleep_ms(2000)
while True:
    time.sleep_ms(500)
    print('Distance: ',getSonar(),'cm' )
```

 **5. Test Result**

Connect the ESP32 main board to your computer via Micro USB cable. Click ![Img](./media/img-20241226133629.png) to run the code. After uploading the code, then the shell monitor will print distance value between the ultrasonic sensor and the object; press“Ctrl+C”or click ![](media/27451c8a9c13e29d02bc0f5831cfaf1f.png) to exit.

![](media/8d2fe34f07c0705026a176b0fc1482b1.png)

![](media/ce873cf513307a15f9aa58078c8dd7d6.png)

### Project 07: Follow Me

 **1. Description：**

In the above experiments, we have learned about the 8\*8 dot matrix, motor drivers and speed regulation, ultrasonic sensors, servos and other hardware. In this experiment, we will combine them to create a follow car with the ultrasonic sensor. The can can follow an object to move through measuring distance.

 **2. Working Principle：**

![image-20230602095856287](media/image-20230602095856287.png)

 **3. Flow Chart：**

![](media/e1ded45b4454e64b7ff419bad285cb3a.png)

 **4. Test Code：**

Open “Thonny IDE” and choose “This Computer” → “D:” → “Codes” → “MicroPython_Code”. Open the file “Project_07_Follow_Me.py” or copy and paste the following code into “Thonny IDE”.

```python
from machine import Pin, PWM
import time

# Define GPIO4’s output frequency as 50Hz and its duty cycle as 77, and assign them to PWM
servoPin = Pin(4)
pwm = PWM(servoPin, freq=50)
pwm.duty(77)
time.sleep(1)

# Set the pin and sound speed of the ultrasonic sensor
trigPin=Pin(5,Pin.OUT,0)
echoPin=Pin(18,Pin.IN,0)
soundVelocity=340
distance=0
# right wheel
pin1=Pin(32,Pin.OUT)
pin2=PWM(Pin(25),freq=50,duty=0)
# left wheel
pin3=Pin(33,Pin.OUT)
pin4=PWM(Pin(26),freq=50,duty=0)

# As a function of the car going forward.
def car_forward(): 
  pin1.value(0)
  pin2.duty(800) 
  pin3.value(0)
  pin4.duty(800)  

# As a function of the car going backwards.
def car_back(): 
  pin1.value(1)
  pin2.duty(550) 
  pin3.value(1)
  pin4.duty(550)
  
# As a function of the car stopping.  
def car_stop():
  pin2.deinit()
  pin4.deinit()
  pin1.value(0)
 # pin2.duty(0) 
  pin3.value(0)
 # pin4.duty(0)

# Subfunction getSonar() is used to start the Ultrasonic Module to begin measurements,
# and return the measured distance in centimeters. In this function, first let trigPin
# send 10us high level to start the Ultrasonic Module. Then use pulseIn() to read
# the Ultrasonic Module and return the duration time of high level.
# Finally, the measured distance according to the time is calculated.
def getSonar(): 
    trigPin.value(1)
    time.sleep_us(10)
    trigPin.value(0)
    while not echoPin.value():
        pass
    pingStart=time.ticks_us()
    while echoPin.value():
        pass
    pingStop=time.ticks_us()
    pingTime=time.ticks_diff(pingStop,pingStart)
    distance=pingTime*soundVelocity//2//10000
    time.sleep_ms(10)
    return int(distance)

try:
    while True:
        Distance=getSonar() # Get the distance measured by ultrasound.
        print(Distance) # Send a pulse to calculate the distance in centimeters and print the result.
        if Distance<8: # If the distance is less than 8
            pin2=PWM(Pin(25),freq=50)
            pin4=PWM(Pin(26),freq=50)
            car_back() # Car goes back
        elif Distance>=8 and Distance<13: # If the distance is greater than or equal to 8, it's less than 13.
            car_stop() # Car stop
        elif Distance>=13 and Distance<35: # If the distance is greater than or equal to 13, it's less than 35.
            pin2=PWM(Pin(25),freq=50)
            pin4=PWM(Pin(26),freq=50)
            car_forward() # Car ahead
        else:
           car_stop() 
except:
    pass 
```

 **5. Test Result**

Place batteries, turn the power switch to ON end and power up.

Connect the ESP32 main board to your computer via Micro USB cable. Click ![Img](./media/img-20241226133629.png) to run the code. After uploading the code, then the car will follow the obstacle to move.

Press “Ctrl+C” or click ![](media/27451c8a9c13e29d02bc0f5831cfaf1f.png) to exit.

![](media/169099e3ee48e585f65963c01687873f.png)

### Project 08: Avoid obstacles

 **1. Description：**

In this project, we will take advantage of the ultrasonic sensor to detect the distance away from the obstacle so as to avoid them

 **2. Working Principle：**

**Loop**: 8*8 Dot matrix display --> 

| Set servo to 90°      | Detect the distance away from the obstacle (cm) |
| --------------------- | ----------------------------------------------- |
| Set the servo to 180° | Distance away form the obstacle：a1（unit：cm） |
| Set the servo to 0°   | Distance away form the obstacle：a2（unit：cm） |

| Condition 1    | Condition 2 | State                                                        |
| -------------- | ----------- | ------------------------------------------------------------ |
| 0<distance＜10 |             | Stop<br />Show the “stop” pattern                            |
|                | a1＜a2      | Car turns right（set PWM to 200）<br />show “turning right” pattern<br />Set servo to 90° |
|                | a1≥a2       | Turn left（set PWM to 200）<br />display “left turning” pattern<br />Set servo to 90° |
| distance≥10    |             | Go forward（set PWM to 200）<br />The 8*8 dot matrix display shows “going forward” pattern |

 **3. Flow Chart：**

![](media/62cafb9417859896368e046396c58495.png)

 **4. Test Code：**

Open “Thonny IDE” and choose “This Computer” → “D:” → “Codes” → “MicroPython_Code”. Open the file “Project_08_Avoid_Obstacles.py” or copy and paste the following code into “Thonny IDE”.


```python
import utime as time
from machine import I2C, Pin, RTC, PWM 
from ht16k33matrix import HT16K33Matrix

# Define GPIO4’s output frequency as 50Hz and its duty cycle as 77, and assign them to PWM.
servoPin = Pin(4)
pwm = PWM(servoPin, freq=50)
pwm.duty(77)
time.sleep(1)

# Set the pin and sound speed of the ultrasonic sensor.
trigPin=Pin(5,Pin.OUT,0)
echoPin=Pin(18,Pin.IN,0)
soundVelocity=340
distance=0
# right wheel
pin1=Pin(32,Pin.OUT)
pin2=PWM(Pin(25),freq=50,duty=0)
# left wheel
pin3=Pin(33,Pin.OUT)
pin4=PWM(Pin(26),freq=50,duty=0)

# As a function of the car going forward.
def car_forward():
  pin1.value(0)
  pin2.duty(200) 
  pin3.value(0)
  pin4.duty(250)  

# As a function of the car going left.
def car_left():
  pin1.value(0)
  pin2.duty(500) 
  pin3.value(1)
  pin4.duty(500)  

# As a function of the car going right.
def car_right():
  pin1.value(1)
  pin2.duty(500) 
  pin3.value(0)
  pin4.duty(500)

# As a function of the car stopping.
def car_stop():
  pin2.deinit()
  pin4.deinit()
  pin1.value(0)
#  pin2.duty(0) 
  pin3.value(0)
#  pin4.duty(0)
  
  
# Subfunction getSonar() is used to start the Ultrasonic Module to begin measurements,
# and return the measured distance in centimeters. In this function, first let trigPin
# send 10us high level to start the Ultrasonic Module. Then use pulseIn() to read
# the Ultrasonic Module and return the duration time of high level.
# Finally, the measured distance according to the time is calculated.  
def getSonar(): 
    trigPin.value(1)
    time.sleep_us(10)
    trigPin.value(0)
    while not echoPin.value():
        pass
    pingStart=time.ticks_us()
    while echoPin.value():
        pass
    pingStop=time.ticks_us()
    pingTime=time.ticks_diff(pingStop,pingStart)
    distance=pingTime*soundVelocity//2//10000
    time.sleep_ms(10)
    return int(distance)

# CONSTANTS
DELAY = 0.01
PAUSE = 3
# START
if __name__ == '__main__':
    i2c = I2C(scl=Pin(22), sda=Pin(21))
    display = HT16K33Matrix(i2c)
    display.set_brightness(2)

try:
    while True:
        Distance=getSonar() # Get the distance measured by ultrasound.
        if Distance>0 and Distance<10: # If the distance is greater than 0, it's less than 10.
            car_stop() # Car stop
            # Draw a custom icon on the LED
            icon = b"\x18\x18\x18\x18\x18\x00\x00\x18"
            display.set_icon(icon).draw()
            # Rotate the icon
            display.set_angle(0).draw()
            time.sleep(0.3)
            pwm = PWM(servoPin, freq=50)
            pwm.duty(128)
            time.sleep(0.5)
            a1=getSonar()
            time.sleep(0.3)
            pwm = PWM(servoPin, freq=50)
            pwm.duty(25)
            time.sleep(0.5)
            a2=getSonar()
            time.sleep(0.2)
            if a1>a2:
                pin2=PWM(Pin(25),freq=50)
                pin4=PWM(Pin(26),freq=50)
                car_left()
                icon = b"\x48\x24\x12\x09\x09\x12\x24\x48"
                display.set_icon(icon).draw()
                display.set_angle(0).draw()
                pwm = PWM(servoPin, freq=50)
                pwm.duty(77)
                time.sleep(0.5)
                icon = b"\x18\x24\x42\x99\x24\x42\x81\x00"
                display.set_icon(icon).draw()
                display.set_angle(0).draw()
            else:
                pin2=PWM(Pin(25),freq=50)
                pin4=PWM(Pin(26),freq=50)
                car_right()
                icon = b"\x12\x24\x48\x90\x90\x48\x24\x12"
                display.set_icon(icon).draw()
                # Rotate the icon
                display.set_angle(0).draw()
                pwm = PWM(servoPin, freq=50)
                pwm.duty(77)
                time.sleep(0.5)
                icon = b"\x18\x24\x42\x99\x24\x42\x81\x00"
                display.set_icon(icon).draw()
                display.set_angle(0).draw()
        else:
            pin2=PWM(Pin(25),freq=50)
            pin4=PWM(Pin(26),freq=50)
            car_forward() # Car ahead
            icon = b"\x18\x24\x42\x99\x24\x42\x81\x00"
            display.set_icon(icon).draw()
            display.set_angle(0).draw()
except:
    pass
```

 **5. Test Result**

Place batteries, turn the power switch to ON end and power up.

Connect the ESP32 main board to your computer via Micro USB cable. Click ![Img](./media/img-20241226133629.png) to run the code. After uploading the code, then the car can automatically dodge obstacles; press“Ctrl+C”or click ![](media/27451c8a9c13e29d02bc0f5831cfaf1f.png) to exit

![](media/2f3701b99abc5f4a2129105c9ab06115.png)

### Project 09: Line Tracking Sensor

**1.Description：**

There are two IR line tracking sensors on the car. They are actually two pairs of ST188L3 infrared tubes and used to detect black and white lines. In this project, we will make a line tracking car.

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

The line tracking sensors of the PCB board are controlled by GPIO17 and GPIO16 of the ESP32 board.

Open “Thonny IDE” and choose “This Computer” → “D:” → “Codes” → “MicroPython_Code”. Open the file “Project_09_Line_Tracking_Sensor.py” or copy and paste the following code into “Thonny IDE”.

```python 
from machine import Pin
import time
    
tracking_left = Pin(17, Pin.IN)
tracking_right = Pin(16, Pin.IN)
    
while True:
    L_value = tracking_left.value()
    R_value = tracking_right.value()
    print("L_value:%d, R_value:%d" %(L_value, R_value))
    time.sleep(0.5) 

```

 **4.Test Result**

Connect the ESP32 main board to your computer via Micro USB cable. Click ![Img](./media/img-20241226133629.png) to run the code. After uploading the code, put a black thing under the line tracking sensor of the car and move it, you will see different indicators light up, and at the same time you will see the value on the serial monitor.

Press “Ctrl+C” or click ![](media/27451c8a9c13e29d02bc0f5831cfaf1f.png) to exit.

The sensitivity can be adjusted by rotating the potentiometer. When the indicator light is adjusted to the critical point of on and off state, the sensitivity is the highest.

![](media/3f5408865f10f90c607d14066df7671e.png)

![](media/7b57898ccc7423695e6078a3e015fb90.png)

### Project 10: Line Tracking

 **1.Description：**

We’ve introduced the knowledge of motor drivers, speed regulation, and infrared line tracking. In this experiment, the car will perform different actions according to the values transmitted by the infrared tracking.

 **2.Working Principle：**

| Left | Right | Value（Binary ） | State        |
| ---- | ----- | ---------------- | ------------ |
| 0    | 0     | 00               | Stop         |
| 0    | 1     | 01               | Turn right   |
| 1    | 0     | 10               | Turn left    |
| 1    | 1     | 11               | Move forward |

 **3. Flow Chart：**

![](media/c6a0ace5faa949e4fb24fc511d179e08.png)

 **4. Test Code：**

Open “Thonny IDE” and choose “This Computer” → “D:” → “Codes” → “MicroPython_Code”. Open the file “Project_10_Line_Tracking.py” or copy and paste the following code into “Thonny IDE”.


```python
from machine import Pin, PWM
import time

# Define GPIO4’s output frequency as 50Hz and its duty cycle as 77, and assign them to PWM.
servoPin = Pin(4)
pwm = PWM(servoPin, freq=50)
pwm.duty(77)
time.sleep(1)

# Set the pin of the tracking sensor
tracking_left = Pin(17, Pin.IN)
tracking_right = Pin(16, Pin.IN)
# right wheel
pin1=Pin(32,Pin.OUT)
pin2=PWM(Pin(25),freq=50,duty=0)
# left wheel
pin3=Pin(33,Pin.OUT)
pin4=PWM(Pin(26),freq=50,duty=0)

# As a function of the car going forward.
def car_forward(): 
  pin1.value(0)
  pin2.duty(200) 
  pin3.value(0)
  pin4.duty(200)  

# As a function of the car going left.
def car_left(): 
  pin1.value(0)
  pin2.duty(180) 
  pin3.value(1)
  pin4.duty(1023)  

# As a function of the car going right.
def car_right(): 
  pin1.value(1)
  pin2.duty(1023) 
  pin3.value(0)
  pin4.duty(220)

# As a function of the car stopping.
def car_stop():
  pin2.deinit()
  pin4.deinit()
  pin1.value(0)
#  pin2.duty(0) 
  pin3.value(0)
#  pin4.duty(0)

try:
    while True:
        L_value = tracking_left.value() # Left infrared tracking value is assigned to the variable L_value.
        R_value = tracking_right.value() # Right infrared tracking value is assigned to the variable R_value.
        if L_value == 1 and R_value == 1: # Black lines were detected in both left and right infrared tracking.
            pin2=PWM(Pin(25),freq=50)
            pin4=PWM(Pin(26),freq=50)
            car_forward() # Car ahead
        elif L_value == 1 and R_value == 0:
            pin2=PWM(Pin(25),freq=50)
            pin4=PWM(Pin(26),freq=50)
            car_left()
        elif L_value == 0 and R_value == 1:
            pin2=PWM(Pin(25),freq=50)
            pin4=PWM(Pin(26),freq=50)
            car_right()
        else:
            car_stop() 
except:
    pass
```

 **5. Test Result**

Place batteries, turn the power switch to ON end and power up.

Connect the ESP32 main board to your computer via Micro USB cable. Click ![Img](./media/img-20241226133629.png) to run the code. After uploading the code, then it will perform different functions via values sent by line tracking sensors; press“Ctrl+C”or click ![](media/27451c8a9c13e29d02bc0f5831cfaf1f.png) to exit.

![](media/12e5251cdcaf5274e64a5b8e865c61b2.png)

### Project 11: Photosensor

 **1. Description：**

There are two photoresistors on the car. They can vary with the light intensity and send information to the Nano board to control the car.

Photoresistors can determine and conduct the car to move by detecting light.

In this experiment, we will learn the working principle of the photoresistor

 **2. Knowledge：**

**Photoresistor:**

It mainly uses a photosensitive resistance element whose resistance varies from the light intensity. The signal terminal of the sensor is connected to the analog port of the microcontroller. When the light is stronger, the analog value at the analog port will increase; on the contrary, when the light intensity is weaker, the analog value of the microcontroller will reduce. In this way, the corresponding analog value can reflect the ambient light intensity.

 **3. Wire up：**

Through the wiring-up diagram, signal pins of two photoresistors are connected to GPIO34 and GPIO35 of the ESP32 board.

For the following experiment, we use the photoresistor connected to GPIO34 to finish experiments. First, let’s read analog values.

| Left photoresistor |  PCB board  |
| :----------------: | :---------: |
|         G          |      G      |
|         V          |      V      |
|         S          | S（GPIO34） |

 **4. Test Code：**

The left photoresistor is controlled by the GPIO34 of the ESP32 board.

Open “Thonny IDE” and choose “This Computer” → “D:” → “Codes” → “MicroPython_Code”. Open the file “Project_11_Photosensor.py” or copy and paste the following code into “Thonny IDE”.


```python
from machine import ADC, Pin
import time
# Initialize the photoresistance to pin 34 (ADC function)
adc = ADC(Pin(34))
adc.atten(ADC.ATTN_11DB)
adc.width(ADC.WIDTH_10BIT)

# Print the current adc value of the photoresistance cyclically 
try:
    while True:
        adcValue = adc.read() # read the ADC value of photoresistance
        print("ADC Value:", adcValue) #Send the ADC value of photoresistance and print the result.
        time.sleep(0.5)
except:
    pass
```

 **5. Test Result**

Connect the ESP32 main board to your computer via Micro USB cable. Click ![Img](./media/img-20241226133629.png) to run the code. After uploading the code, the Shell monitor will show scripts and code will be run.

When the light intensifies, the analog value will get increased; on the contrary, the analog value will get reduced.

Press “Ctrl+C” or click ![](media/27451c8a9c13e29d02bc0f5831cfaf1f.png) to exit

![](media/62a7dd0249ec8b7b72dfa159c62cf093.png)

![](media/2779d2006487d514963e0c9b095864be.png)

### Project 12: Light Following Car

 **1. Description：**

We have learned the working principle of photoresistor, motor and speed regulation. In this experiment, we will use a photoresistor to detect the intensity of light as as to achieve the light following effect.

 **2. Working Principle：**

| Analog value of the left sensor | Analog value of the right sensor |   Function    |
| :-----------------------------: | :------------------------------: | :-----------: |
|              >700               |               >700               | Move forward  |
|              >700               |               ≤700               | Move to left  |
|              ≤700               |               >700               | Move to right |
|              <700               |               <700               |     Stop      |

 **3. Wiring up：**

| Left Photoresistor |  PCB Board  |      | Right photoresistor |  PCB Board  |
| :----------------: | :---------: | ---- | :-----------------: | :---------: |
|         G          |      G      |      |          G          |      G      |
|         V          |      V      |      |          V          |      V      |
|         S          | S（GPIO34） |      |          S          | S（GPIO35） |


![](media/8a5840a7da0fc461c19be88f0283ce50.png)

 **4. Test Code：**

The left and right photoresistors are controlled by GPIO34 and GPIO35 of the ESP32 board.

Open “Thonny IDE” and choose “This Computer” → “D:” → “Codes” → “MicroPython_Code”. Open the file “Project_12_Light_Following_Car.py” or copy and paste the following code into “Thonny IDE”.


```python
from machine import Pin, ADC, PWM
import time

# Define GPIO4’s output frequency as 50Hz and its duty cycle as 77, and assign them to PWM.
servoPin = Pin(4)
pwm = PWM(servoPin, freq=50)
pwm.duty(77)
time.sleep(1)

# Initialize the left photoresistance to pin 34 (ADC function)
adc1 = ADC(Pin(34))
adc1.atten(ADC.ATTN_11DB)
adc1.width(ADC.WIDTH_10BIT)
# Initialize the right photoresistance to pin 35 (ADC function)
adc2 = ADC(Pin(35))
adc2.atten(ADC.ATTN_11DB)
adc2.width(ADC.WIDTH_10BIT)

# right wheel
pin1=Pin(32,Pin.OUT)
pin2=PWM(Pin(25),freq=50,duty=0)
# left wheel
pin3=Pin(33,Pin.OUT)
pin4=PWM(Pin(26),freq=50,duty=0)

# As a function of the car going forward.
def car_forward(): 
  pin1.value(0)
  pin2.duty(300) 
  pin3.value(0)
  pin4.duty(300)  

# As a function of the car going backwards.
def car_back(): 
  pin1.value(1)
  pin2.duty(200) 
  pin3.value(1)
  pin4.duty(200)

# As a function of the car going left.
def car_left(): 
  pin1.value(0)
  pin2.duty(200) 
  pin3.value(1)
  pin4.duty(900)  

# As a function of the car going right.
def car_right(): 
  pin1.value(1)
  pin2.duty(900) 
  pin3.value(0)
  pin4.duty(200)

# As a function of the car stopping.
def car_stop():
  pin2.deinit()
  pin4.deinit() 
  pin1.value(0)
#  pin2.duty(0) 
  pin3.value(0)
#  pin4.duty(0)   

try:
    while True:
        adcValue1 = adc1.read() # read the ADC value of the left photoresistance.
        adcValue2 = adc2.read() # read the ADC value of the right photoresistance.
        print("ADC Value1:", adcValue1 ,"ADC Value2:", adcValue2)
        time.sleep(0.5)
        if adcValue1 > 700 and adcValue2 > 700: # Range values measured by left and right photoresistances.
            pin2=PWM(Pin(25),freq=50)
            pin4=PWM(Pin(26),freq=50)
            car_forward() # Car ahead
        elif adcValue1 > 700 and adcValue2 <= 700:
            pin2=PWM(Pin(25),freq=50)
            pin4=PWM(Pin(26),freq=50) 
            car_left()
        elif adcValue1 <= 700 and adcValue2 > 700:
            pin2=PWM(Pin(25),freq=50)
            pin4=PWM(Pin(26),freq=50)
            car_right()
        else:
            car_stop()
except:
    pass
```

 **5. Test Result**

Place batteries, turn the power switch to ON end and power up.

Connect the ESP32 main board to your computer via Micro USB cable. Click ![Img](./media/img-20241226133629.png) to run the code. After uploading the code, the car will follow the light to move.; press “Ctrl+C” or click ![](media/27451c8a9c13e29d02bc0f5831cfaf1f.png) to exit.

![](media/3f77abefe6509f442a9a856526233e12.png)

### Project 13: IR Remote Control

 **1. Description：**

Infrared remote controls are everywhere in daily life. It is used to control various home appliances, such as TV, speakers, video recorders and satellite signal receivers.

The remote control is composed of an IR emitter, an IR receiver and a decoding MCU. In this project, we will make a IR remote control car.

In this experiment, we will combine the IR receiver and the IR remote control to read key values and show them on the serial monitor.

 **2. Knowledge：**

 **IR Remote Control：**

It is a device with buttons. When the key is pressed, IR signals will be sent.

Infrared remote control technology is widely used, such as TVs, air conditioners and so on. And it can control air conditioners and TVs

The infrared remote control adopts NEC coding, and the signal period is 110ms.

The remote control is shown below:

![](media/3c9d76cb0d24d9861811ce2cb0bb6ae4.png)

 **Infrared (IR) receiver:**

It can receive infrared light and be used to detect the infrared signal emitted by the infrared remote control.

It can demodulate the received infrared light signal and convert it back to binary, and then transmit the information to the microcontroller.

![](media/3da1969e509f53706643c77d0534eb73.png)

 **NEC Infrared communication protocol：**

**NEC Protocol**

To my knowledge the protocol I describe here was developed by NEC (Now Renesas). I've seen very similar protocol descriptions on the internet, and there the protocol is called Japanese Format.

I do admit that I don't know exactly who developed it. What I do know is that it was used in my late VCR produced by Sanyo and was marketed under the name of Fisher. NEC manufactured the remote control IC.

This description was taken from my VCR's service manual. Those were the days, when service manuals were filled with useful information\!

 **Features**

- 8 bit address and 8 bit command length.

- Extended mode available, doubling the address size.

- Address and command are transmitted twice for reliability.

- Pulse distance modulation.

- Carrier frequency of 38kHz.

- Bit time of 1.125ms or 2.25ms.

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

 **3. Test Code：**

The IR receiver on the PCB board is controlled by GPIO19 of the ESP32 board.

Open “Thonny IDE” and choose “This Computer” → “D:” → “Codes” → “MicroPython_Code”. Open the file “Project_13_IR_Remote_Control.py” or copy and paste the following code into “Thonny IDE”.

```python
from irrecvdata import irGetCMD #Import the infrared decoder.

recvPin = irGetCMD(19) #Associate the infrared decoder with Pin(19).

#When infrared key value is obtained, print it out in"Shell" repetitively.
try:
    while True:
        irValue = recvPin.ir_read() #Call ir_read() to read the value of the pressed key and assign it to IRValue.
        if irValue:
           print(irValue) # Send the irValue of Infrared Receiver and print the result.
except:
    pass
```

 **4. Test Result**

Connect the ESP32 main board to your computer via Micro USB cable. Click ![Img](./media/img-20241226133629.png) to run the code. After uploading the code, point the IR remote control at the IR receiver and press keys on the remote control, then the monitor will display key values.

Press “Ctrl+C” or click ![](media/27451c8a9c13e29d02bc0f5831cfaf1f.png) to exit.

![](media/4a071eb7da0b45b94c0fe70b8d4f9e77.png)

![](media/623f8fa842b90a093d286954835483c6.png)

**Code of each key**

![](media/ebcf0cb2055f7784505f76ceeaef9f47.jpeg)

### Project 14: IR Remote Control Car

 **1. Description：**

In the above experiment, we have learned about the knowledge of the 8\*8 dot matrix display, the motor driver and speed regulation, the infrared receiver and the infrared remote control. In this experiment, we will use the infrared remote control and the infrared receiver to control the car.

 **2. Working Principle：**

|          Keys           | Keys Code | Functions                                    |
| :---------------------: | :-------: | -------------------------------------------- |
| ![img](media/wps49.jpg) |  FF629D   | Go forward<br />Display “forward” pattern    |
| ![img](media/wps50.jpg) |  FFA857   | Go back<br />Display “back” pattern          |
| ![img](media/wps51.jpg) |  FF22DD   | Turn left<br />Show “left” pattern           |
| ![img](media/wps52.jpg) |  FFC23D   | Turn right<br />Show “right turning” pattern |
| ![img](media/wps53.jpg) |  FF02FD   | stop<br />show “stop” pattern                |

 **3. Flow Chart：**

![](media/b8ecdfd8dbc04c43021b09bd2c6a48f0.png)

 **4. Test Code：**

Open “Thonny IDE” and choose “This Computer” → “D:” → “Codes” → “MicroPython_Code”. Open the file “Project_14_IR_Remote_Control_Car.py” or copy and paste the following code into “Thonny IDE”.

```python
# Import libraries
import utime as time
from machine import I2C, Pin, RTC, PWM 
from ht16k33matrix import HT16K33Matrix
from irrecvdata import irGetCMD 

recvPin = irGetCMD(19) # Associate the infrared decoder with Pin(19).

# Define GPIO4’s output frequency as 50Hz and its duty cycle as 77, and assign them to PWM.
servoPin = Pin(4)
pwm = PWM(servoPin, freq=50)
pwm.duty(77)
time.sleep(1)

# right wheel
pin1=Pin(32,Pin.OUT)
pin2=PWM(Pin(25),freq=50,duty=0)
# left wheel
pin3=Pin(33,Pin.OUT)
pin4=PWM(Pin(26),freq=50,duty=0)

# CONSTANTS
DELAY = 0.01
PAUSE = 3

# START
if __name__ == '__main__':
    i2c = I2C(scl=Pin(22), sda=Pin(21))
    display = HT16K33Matrix(i2c)
    display.set_brightness(2)
    
# As a function of the car going forward.
def car_forward(): 
  pin1.value(0)
  pin2.duty(1000) 
  pin3.value(0)
  pin4.duty(1000)  

# As a function of the car going backwards.
def car_back(): 
  pin1.value(1)
  pin2.duty(250) 
  pin3.value(1)
  pin4.duty(250)

# As a function of the car going left.
def car_left(): 
  pin1.value(0)
  pin2.duty(1000) 
  pin3.value(1)
  pin4.duty(500)  

# As a function of the car going right.
def car_right(): 
  pin1.value(1)
  pin2.duty(500) 
  pin3.value(0)
  pin4.duty(1000)

# As a function of the car stopping.
def car_stop():
  pin2.deinit()
  pin4.deinit()
  pin1.value(0)
#  pin2.duty(0) 
  pin3.value(0)
#  pin4.duty(0)
  
def handleControl(value): 
    if value == '0xff629d':
        pin2=PWM(Pin(25),freq=50)
        pin4=PWM(Pin(26),freq=50)
        car_forward() #Car ahead
   # Dot matrix shows a forward pattern 
        icon = b"\x18\x24\x42\x99\x24\x42\x81\x00"
        display.set_icon(icon).draw()
        display.set_angle(0).draw()
        time.sleep(PAUSE)
    elif value == '0xffa857':
        pin2=PWM(Pin(25),freq=50)
        pin4=PWM(Pin(26),freq=50)
        car_back() # Car goes back
    # Dot matrix shows a backward pattern
        icon = b"\x00\x81\x42\x24\x99\x42\x24\x18"
        display.set_icon(icon).draw()
        display.set_angle(0).draw()
        time.sleep(PAUSE)
    elif value == '0xff22dd': 
        pin2=PWM(Pin(25),freq=50)
        pin4=PWM(Pin(26),freq=50)
        car_left() # Car to the left
    # Dot matrix shows a left pattern
        icon = b"\x48\x24\x12\x09\x09\x12\x24\x48"
        display.set_icon(icon).draw()
        display.set_angle(0).draw()
        time.sleep(PAUSE)
    elif value == '0xffc23d': 
        pin2=PWM(Pin(25),freq=50)
        pin4=PWM(Pin(26),freq=50)
        car_right() # Car to the right
    # Dot matrix displays a right pattern
        icon = b"\x12\x24\x48\x90\x90\x48\x24\x12"
        display.set_icon(icon).draw()
        display.set_angle(0).draw()
        time.sleep(PAUSE)
    elif value == '0xff02fd': 
        car_stop() # Car to the right
    # Dot matrix displays a stop pattern
        icon = b"\x18\x18\x18\x18\x18\x00\x00\x18"
        display.set_icon(icon).draw()
        display.set_angle(0).draw()
        time.sleep(PAUSE)
try:
    while True:
        irValue = recvPin.ir_read() # Call ir_read() to read the value of the pressed key and assign it to IRValue.
        if irValue:
            print(irValue)
            handleControl(irValue)
except:
    pass
```

 **5. Test Result**

Place batteries, turn the power switch to ON end and power up.

Connect the ESP32 main board to your computer via Micro USB cable. Click ![Img](./media/img-20241226133629.png) to run the code. After uploading the code, point the remote control at the IR receiver and press keys, then the car will make the corresponding movement.; press “Ctrl+C” or click ![](media/27451c8a9c13e29d02bc0f5831cfaf1f.png) to exit.

![](media/3f865d7066ed13b720b4311adf913e4d.png)

### Project 15：WIFI Station Mode

**1. Description：**

One of the most useful features of the ESP32 is that it can not only act as a Web server, but also to create its own network for other devices to connect to and access web pages. ESP32 can run in three modes: Station (STA) mode, Soft Access Point (AP) mode, and Station+AP mode.

- Station mode: Actively connect to the router as a WiFi device, also known as WiFi Client
- AP mode: As an Access Point for other WiFi devices to connect to, i.e., WiFi hotspots
- Station+AP mode: While the ESP32 connects to the router, it is also a hotspot for other WiFi devices to connect to.

All WiFi programming projects must be configured with WiFi running mode before using, otherwise the WiFi cannot be used. In this project, we are going to learn the ESP32 WiFi Station Mode.

 **2. Components**

| ![image-20230602090714020](media/image-20230602090714020.png) | ![image-20230602081901843](media/image-20230602081901843.png) |
| ------------------------------------------------------------ | ------------------------------------------------------------ |
| USB  Cable x1                                                | ESP32*1                                                      |


Plug the ESP32 to the USB port of your PC

![image-20230602103357603](media/image-20230602103357603.png)

 **3. Component Knowledge：**

**Station mode：**

When setting Station mode, the ESP32 is taken as a WiFi client. It can connect to the router network and communicate with other devices on the router via a WiFi connection. As shown in the figure below, the PC and the router have been connected. If the ESP32 wants to communicate with the PC, the PC and the router need to be connected.

![](media/f74baff97695aa2ee33a8c19370d2547.png)

 **4. Test Code：**

**⚠️ATTENTION:** Before uploading code, please replace the WiFi name(**REPLACE_WITH_YOUR_SSID**) in the code and the passwords(**REPLACE_WITH_YOUR_PASSWORD**) into yours.

Open “Thonny IDE” and choose “This Computer” → “D:” → “Codes” → “MicroPython_Code”. Open the file “Project_15_WiFi_Station_Mode.py” or copy and paste the following code into “Thonny IDE”.

```python
import time
import network # Import network module

# Enter correct router name and password
ssidRouter     = 'REPLACE_WITH_YOUR_SSID' # Enter the router name
passwordRouter = 'REPLACE_WITH_YOUR_PASSWORD' # Enter the router password

def STA_Setup(ssidRouter,passwordRouter):
    print("Setup start")
    sta_if = network.WLAN(network.STA_IF) # Set ESP32 in Station mode
    if not sta_if.isconnected():
        print('connecting to',ssidRouter)
# Activate ESP32’s Station mode, initiate a connection request to the router
# and enter the password to connect.
        sta_if.active(True)
        sta_if.connect(ssidRouter,passwordRouter)
# Wait for ESP32 to connect to router until they connect to each other successfully.
        while not sta_if.isconnected():
            pass
# Print the IP address assigned to ESP32 in “Shell”.
    print('Connected, IP address:', sta_if.ifconfig())
    print("Setup End")

try:
    STA_Setup(ssidRouter,passwordRouter)
except:
    sta_if.disconnect()
```

 **5. Test Result**

Since the router name and password are different in various places, before running the code, the user needs to enter the correct router name and password in the red box shown above.

After entering the correct router name and password, click ![](media/c005d91eb85d5c58566746609ab80254.png), the code will be run.

The Shell monitor will print the IP address of the ESP32 when connecting the ESP32 to your router.

![](media/93283ae7cb7a82e51f252d2cf2607c7e.png)

### Project 16：WIFI AP Mode

 **1. Component Knowledge：**

**AP Mode:**

When setting AP mode, a hotspot network will be created, waiting for other WiFi devices to connect. As shown below; take the ESP32 as the hotspot. If a phone or PC needs to communicate with the ESP32, it must be connected to the ESP32's hotspot. Communication is only possible after a connection is established via the ESP32.

![](media/35d90f1ce10814ea1897ba63f8bd7ad9.png)

 **2. Test Code:**

**⚠️ATTENTION:** The AP name, AP password, local_IP, gateway and IP address do not need to be modified, and can be directly used.

Open “Thonny IDE” and choose “This Computer” → “D:” → “Codes” → “MicroPython_Code”. Open the file “Project_16_WiFi_AP_Mode.py” or copy and paste the following code into “Thonny IDE”.

```python
import network

# Enter correct AP name and password.
ssidAP         = 'ESP32_WiFi' # Enter the router name
passwordAP     = '12345678'  # Enter the router password

local_IP       = '192.168.1.149'
gateway        = '192.168.1.1'
subnet         = '255.255.255.0'
dns            = '8.8.8.8'

# Set ESP32 in AP mode.
ap_if = network.WLAN(network.AP_IF)

def AP_Setup(ssidAP,passwordAP):
    ap_if.ifconfig([local_IP,gateway,subnet,dns]) # Configure IP address, gateway and subnet mask for ESP32.
    print("Setting soft-AP  ... ")
# Turn on an AP in ESP32, whose name is set by ssid_AP and password is set by password_AP
    ap_if.config(essid=ssidAP,authmode=network.AUTH_WPA_WPA2_PSK, password=passwordAP)
    ap_if.active(True)
    print('Success, IP address:', ap_if.ifconfig())
    print("Setup End\n")

try:
    AP_Setup(ssidAP,passwordAP)
except:
    print("Failed, please disconnect the power and restart the operation.")
    ap_if.disconnect() # If the program is running abnormally, the AP disconnection function will be called.
```

 **3. Test Result**

You can modify the AP name and password or keep them unchanged.

Click ![](media/c005d91eb85d5c58566746609ab80254.png)“Run current script”, the code will be run. Open the AP function of the ESP32, the Shell monitor will print the information.

![](media/2292bb8b4e64b975df8bcea39d308f08.png)

Enable Wifi, then you can see the ssid\_AP which is called "ESP32\_Wifi" in this code. You can enter the password "12345678" to connect it, or you can modify its AP name and password by code.

![](media/3e0ad895bea7f5100cc02a415adcace7.png)

### Project 17：WIFI AP+Station Mode

 **1. Component Knowledge：**

**AP+Station mode**

In addition to the AP mode and the Station mode, **AP+Station mode** can be used at the same time. Turn on the Station mode of the ESP32, connect it to the router network, and it can communicate with the Internet through the router. Then turn on the AP mode to create a hotspot network. Other WiFi devices can be connected to the router network or the hotspot network to communicate with the ESP32.

 **2. Test Code：**

**⚠️ATTENTION:** Before uploading code, please replace the WiFi name(**REPLACE_WITH_YOUR_SSID**) in the code and the passwords(**REPLACE_WITH_YOUR_PASSWORD**) into yours. 

But, the AP name, AP password, local_IP, gateway and IP address do not need to be modified, and can be directly used. 

Open “Thonny IDE” and choose “This Computer” → “D:” → “Codes” → “MicroPython_Code”. Open the file “Project_17_WiFi_AP_Station_Mode.py” or copy and paste the following code into “Thonny IDE”.

```python
import network

ssidRouter     = 'REPLACE_WITH_YOUR_SSID' # Enter the router name
passwordRouter = 'REPLACE_WITH_YOUR_PASSWORD' # Enter the router password

ssidAP         = 'ESP32_WiFi'# Enter the AP name
passwordAP     = '12345678' # Enter the AP password

local_IP       = '192.168.1.149'
gateway        = '192.168.1.1'
subnet         = '255.255.255.0'
dns            = '8.8.8.8'

sta_if = network.WLAN(network.STA_IF)
ap_if = network.WLAN(network.AP_IF)
    
def STA_Setup(ssidRouter,passwordRouter):
    print("Setting soft-STA  ... ")
    if not sta_if.isconnected():
        print('connecting to',ssidRouter)
        sta_if.active(True)
        sta_if.connect(ssidRouter,passwordRouter)
        while not sta_if.isconnected():
            pass
    print('Connected, IP address:', sta_if.ifconfig())
    print("Setup End")
    
def AP_Setup(ssidAP,passwordAP):
    ap_if.ifconfig([local_IP,gateway,subnet,dns])
    print("Setting soft-AP  ... ")
    ap_if.config(essid=ssidAP,authmode=network.AUTH_WPA_WPA2_PSK, password=passwordAP)
    ap_if.active(True)
    print('Success, IP address:', ap_if.ifconfig())
    print("Setup End\n")

try:
    AP_Setup(ssidAP,passwordAP)    
    STA_Setup(ssidRouter,passwordRouter)
except:
    sta_if.disconnect()
    ap_if.idsconnect()
```

 **3. Test Result**

Before running the code, you need to modify ssidRouter, passwordRouter, ssidAP, and passwordAP. After making sure that the code is modified correctly, click ![](media/da852227207616ccd9aff28f19e02690.png), the code starts to run, and the "Shell" window will display the following:

![](media/0b01aeeebb9fae819d6a1133b3a8cf69.png)

Enable WiFi, then you can see ssid\_AP on the ESP32 board.

![](media/3e0ad895bea7f5100cc02a415adcace7.png)




