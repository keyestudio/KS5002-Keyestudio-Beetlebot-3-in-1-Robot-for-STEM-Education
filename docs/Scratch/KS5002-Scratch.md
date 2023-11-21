# KS5002 Keyestudio Beetlebot 3 in 1 Robot for STEM Education-Scratch


## **Get started with Arduino**

**Contents**

**1. Windows System：**

![](media/6cf6312dc7c7db27794b54d58a8bf80c.png)

**1.1 Installing Arduino IDE**

When you get control board, you need to download Arduino IDE and driver firstly.

You could download Arduino IDE from the official website: <https://www.arduino.cc/>, click the **SOFTWARE** on the browse bar,
click“DOWNLOADS” to enter download page, as shown below:

![](media/bfe8c9e405c71123dee7921eddff86d3.png)

![](media/7250961db41ba42e4b881d77bd76a319.png)

There are various versions of IDE for Arduino. Just download a version compatible with your system. Here we will show you how to download and install the windows version of Arduino IDE.

![](media/894116c5cf0023dd9720946cfb441790.png)

There are two versions of IDE for WINDOWS system. You can choose between the installer (.exe) and the Zip file. For installer, it can be directly downloaded, without the need of installing it manually while for Zip package, you will need to install the driver manually.

![](media/a983a2f2eceb968afbff8ba0f0376240.png)

You just need to click JUST DOWNLOAD. After the Arduino is downloaded, click“I Agree”to continue installing

![](media/00e334d3c756a2495da6f0d1b2db680a.png)

Click **Next**

![](media/de541d90a1cda992ad8e3f0cbaf95f94.png)

Then click **Install.**

![](media/7da9aca1e8432c59372e7c7ab2574bd9.png)

If the following page appears, click **Install.**

![](media/85b29de2aa791ecc77280ccde91e53c5.png)

![](media/739c41701fbcab202f0e587f534bad30.png)

![](media/d28223c55a30f949760779720fe4ec24.png)

1.2 Install a driver on Windows：

If you have installed the driver, just skip it.

Before using the ESP32 board, you must install a driver, otherwise it will not communicate with computer.

Unlike the USB series chip (ATMEGA8U2) of the Arduino UNO R3, the ESP32 board is used the CP2102 chip USB series chip and USB type C interface.

The driver of the CP2102 chip is included in 1.8.0 version and newer version of Arduino IDE. Usually, you connect the board to the computer and wait for Windows to begin its driver installation process. After a few moments, the process will succeed.

If the driver installation process fail, you need to install the driver manually.

Note:

1\. Please make sure that your IDE is updated to 1.8.0 or newer version

2. If the version of Arduino IDE you download is below 1.8, you should download the driver of CP2102 and install it manually.

Link to download the driver of CP2102:

[**https://fs.keyestudio.com/CP2102-WIN**](https://fs.keyestudio.com/CP2102-WIN)

To install the drive manually, open the device manager of computer. Right click Computer----- Click Properties-----Click Device Manager. Look under Ports (COM & LPT) or other device.

A yellow exclamation mark means that the CP2102 driver installation failed.

![](media/9af2e34bf9bdd6675bdf5fa8cd291971.png)

Double-click ![](media/a2455b26773cb8d6cb3fccc605ea4dd7.png) and click **Update drive...**”

![](media/a122cd6fef74eb5c0c7fe16fac2fed59.png)

Click“Browse my computer for updated driver software”.

![](media/a02d3e643231cfe267d4debf0ef258c4.png)

There is a DRIVERS folder in Arduino software installed package（![](media/aae89b3213589edf1c320d5502489820.png)), open driver folder and you can see
the driver of CP210X series chips.

Click“Browse”, then find the driver folder, or you could enter“driver”to search in rectangular box, then click“Next”,

![](media/eb6ca318005b5c570ad4fbef73024351.png)

![](media/4f2af46602a5ef73985914170911c519.png)

Open device manager, you will find the yellow exclamation mark disappear. The driver of CP2102 is installed successfully.

![](media/af2324b73308f1796b8b7c9dc14878e7.png)

1.3. Install the ESP32 on Arduino IDE：

Note：you need to download Arduino IDE 1.8.5 or advanced version to install the ESP32

1)  Click![](media/4f2de68a91c7f59024aa87a522e36ab3.png)to open Arduino IDE
    

![](media/8aca9b5378e794375f2c15d3b4e238ba.png)

2)  **Click File**” →**“Preferences”**，copy the website address <https://dl.espressif.com/dl/package_esp32_index.json> in the “**Additional Boards Manager URLs:**”and click“**OK**”

![](media/a8febbd62268514a30cec4e183b1eaed.png)

![](media/ea68c66041f48b44b4682eb3a0e11e79.png)

Click“**Tools**”→“**Board:**”then click “**Boards Manager...**”to enter“**Boards Manager**”.

Enter **ESP32**”as follows, then click **Install**

![](media/a710d2a8166e3e62d9b48d9b7386e9e4.png)

![](media/9824059733dcbbfb3dff58736923a4a9.png)

After installing, click“**Close**”

1.4. **Arduino IDE Setting**

Click![](media/675ae7298ce0973df720b2fbbb514caa.png)icon to pen Arduino IDE.

![](media/8aca9b5378e794375f2c15d3b4e238ba.png)

When downloading the sketch to the board, you must select the correct name of Arduino board that matches the board connected to your computer. As shown below;

(Note: we use the ESP32 board in this tutorial; therefore, we select ESP32**)**

![](media/78695faae974868fb29c972e89a9d917.png)

![](media/3a3bbc0ce1845aceb35af40aea7c84ca.png)

Set the board type as follows;

![](media/43b6c4d7f639f1e4b7adb017db805ea1.png)

Then select the correct COM port (you can see the corresponding COM port after the driver is successfully installed).

![](media/94587092f31929ebb9cdbcc5fe1718de.png)

![](media/97ab2e53b87bd0812b2b064405f86196.png)

![](media/1235ef274c17d00db74fca324072ff84.png)

A- Used to verify whether there is any compiling mistakes or not.

B- Used to upload the sketch to your Arduino board.

C- Used to create shortcut window of a new sketch.

D- Used to directly open an example sketch.

E- Used to save the sketch.

F- Used to send the serial data received from board to the serial monitor.

2.**Mac System**

![](media/a6fc83596009c574d8e29ef383748549.png)

2.1. **Download Arduino IDE:**

​    ![](media/5d58d3cf67b308423ddb9f286f6cb697.png)



**2.2 How to install the CP2102 driver：**

If you have installed the driver, just skip it. Connect the ESP32 board to your computer, and open Arduino IDE

![](media/a72fe5a29c6af0cd24aba7ab59b4996e.emf)

Click **Tools→Board:ESP32 Dev Module and /dev/cu.usbserial-0001.**![](media/00d823dbf27e569a2ba23277b1e15a41.jpeg)

Click ![](media/9c9158a5d49baa740ea2f0048f655017.png) to upload code.

Note: If code is uploaded unsuccessfully, you need to install driver of CP2102, please continue to follow the instructions as below:

Download the driver of CP2102: <https://www.silabs.com/products/development-tools/software/usb-to-uart-bridge-vcp-drivers>

Select Mac OSX edition, as shown below;

![](media/c09e7c279a858574756d1192b3a995aa.png)

Unzip the downloaded package.

![](media/6870a714ddd11015dc43b1d5743e0666.jpeg)

Open folder and double-click **SiLabsUSBDriverDisk.dmg** file.

![](media/61ae3e706a1c4afa7948d5fb2e797a6d.png)

You will view the following files as follows:

![](media/3f1afe9499f6d852492cfb9d6b11e9ab.jpeg)

Double-click Install CP210x VCP Driver, tick **on’t warn me when opening application on this** **disk image** and tap **Open.**

![](media/14f6ebb088e654abc2f0149645e34ed1.png)

Tap **Continue**

![](media/b1cb125dccf6470ebe255f8f65b902eb.jpeg)

Tap **Agree,** and **Continue**

![](media/865dcc76cb7f58854b56f1020233f05e.jpeg)

Click **Continue** and input your password.

![](media/1ef6d65b61ad7c6e0a3989ba59de74d5.jpeg)

![](media/29bbca3360d806164717733460574356.png)

**Select Open Security Preferences**

![](media/ca6bc6e536202f07a53c09201a0996ff.png)

Click the lock to unlock security & privacy preference.

![](media/cb6be428257143635fc4f729487549c5.jpeg)

Tap **Unlock and** enter **your Username and password**

![](media/e8f637a3a9510aa8f90c65820d4d1cd8.jpeg)

Then click **Allow**

![](media/250a1cbb7f93fc2a572944bea9fe5494.jpeg)

Back to installation page, and wait to install.

![](media/0da6d0d4296d6e3de0b30dfd3c615265.jpeg)

Successfully installed

![](media/7cca827fe946096f228797dadce10661.jpeg)

Then enter ArduinoIDE, click **Tools** and select Board**ESP32 Dev Module** and **/dev/cu.usbserial-0001**

![](media/00d823dbf27e569a2ba23277b1e15a41.jpeg)

Click![](media/b7c913eaa4dcea1bc326dd7a7b5a2af6.png) to upload code and show“Done uploading”.

**3. How to Add Libraries?**

**(1) What are Libraries ?**

[Libraries ](https://www.arduino.cc/en/Reference/Libraries)are a collection of code that make it easy for you to connect a sensor,display, module, etc.

For example, the built-in LiquidCrystal library helps talk to LCD displays. There are hundreds of additional libraries available on the Internet for download.

The built-in libraries and some of these additional libraries are listed in the reference. (https://www.arduino.cc/en/Reference/Libraries)

**(2) How to Install a Library ?**

Here we will introduce the most simple way to add libraries .

**Step 1:** After downloading well the Arduino IDE, you can right-click the icon of Arduino IDE.

Find the option "Open file location"

![](media/2b05ac39b2ad481965c9384dd5347194.png)

**Step 2:** Click **Open file location** \>libraries

![](media/89211927cafc8f4c735d72c87d9dc05e.png)

**Step 3:** Next, find out the“libraries”folder (seen in the link: https://fs.keyestudio.com/KS5002)

![](media/c26daeec56d40470236c88e8cb6003be.png)

![](media/ecbd53eae13f686c3b2e48e6359a8d92.png)

Copy ![](media/a37c907c372496e0b082af8c151e1b0e.png)in the libraries folder of Arduino. Then click“Replace the files in the destination”

![](media/48cc1fcf111ce12c3e174393eee4991d.png)

![](media/6ce316693a4a6b2b0b2d0712219fe7ef.png)



## **Keyestudio ESP32 Core Board**

<img src="media/d59fe9d9aced2ab49f5b9c6e59d9afde.jpeg" style="zoom:50%;" />

Description:

This keyestudio ESP32 core board is a Mini development board based on the ESP-WROOM-32 module.

The board has brought out most I/O ports to pin headers of 2.54mm pitch. These provide an easy way of connecting peripherals according to your own needs.

When it comes to developing and debugging with the development board, the both side standard pin headers can make your operation more simple and handy.

The ESP-WROOM-32 module is the industry's leading integrated WiFi + Bluetooth solution with less than 10 external components.

It integrates antenna switch, RF balun, power amplifiers, low noise amplifiers, filters and power management modules.

At the same time, it also integrates with TSMC's low-power 40nm technology, so that power performance and RF performance are safe and reliable, easy to expand to a variety of applications.

Technical Details:

  - Microcontroller: ESP-WROOM-32 module

  - USB to Serial Port Chip: CP2102-GMR

  - Operating Voltage: DC 5V

  - Operating Current: 80mA (average)

  - Current Supply: 500mA (Minimum)

  - Operating Temperature Range: -40℃ \~ +85℃

  - WiFi mode: Station/SoftAP/SoftAP+Station/P2P

  - WiFi protocol: 802.11 b/g/n/e/i (802.11n, speed up to 150 Mbps

  - WiFi frequency range: 2.4 GHz \~ 2.5 GHz

  - Bluetooth protocol: conform to Bluetooth v4.2 BR/EDR and BLE standards
    
  - Dimensions: 55mm\*26mm\*13mm

  - Weight: 9.3g
    
    ![](media/4f12fd6a86b4179a4706c57f37b32ee2.jpeg)

**Pin out**

![](media/faad4453ca14a342def16fdc3d46ef79.png)

Warning: The voltage level of the ESP32 pins is 3.3V. If you want to connect the ESP32 to other devices that operate at 5V, you should use a level shifter to convert the voltage levels.

● Power pins: The module has two power pins: +5V and 3.3V. You can use these two pins to power other devices and modules.

![](media/2a90758b3a2e998d7af545fdbb432f08.png)

● GND pin: There are 3 pins for grounding of this module.

Enable Pin (EN): This pin is used to enable and disable the module. The module is enabled when the pin is high, and disabled when the pin is low.

● Input/Output Pins (GPIO): You can use 32 GPIO pins to communicate with LEDs, switches and other input/output devices.

You can pull up or pull down these pins

Note: GPIO6 to GPIO11 pins (SCK/CLK, SDO/SD0, SDI/SD1, SHD/SD2, SWP/SD3 and SCS/CMD pins) are used for SPI communication of the module's internal flash memory, we do not recommend using them.

● ADC: You can use the 16 ADC pins on this module to convert analog voltages (the output of some sensors) into digital voltages. Some of these converters are connected to internal amplifiers and are capable of measuring small voltages with high accuracy.

● DAC: The ESP32 module has two A/D converters with 8-bit precision.

● Touch pads: There are 10 pins on the ESP32 module, which are sensitive to changes in capacitance. You can connect these pins to some pads (pads on the PCB) and use them as a touch switch.

● SPI: There are two SPI interfaces on this module which can be used to connect the display screen, the SD / microSD memory card module and external flash memory, etc.

● I2C: SDA and SCL pins are used for I2C communication.

● Serial communication (UART): There are two UART serial interfaces on this module. You can transfer information up to 5Mbps between two devices with these pins. UART0 also has CTS and RTS controls.

● PWM: Almost all ESP32 input/output pins can be used for PWM (Pulse Width Modulation), which can control motors, LED lights, colors, and more.

![](media/4e99a4f953b9ede17b5c135232ddb476.png)

Install the Beetlebot car

<img src="media/4ea30cc75eb77e63441dccef9f0ca3cb.png" style="zoom:50%;" />

|       Step 1        |                                                              |
| :-----------------: | :----------------------------------------------------------: |
| Components Required | ![image-20230426115833541](media/image-20230426115833541.png) |
|                     | ![image-20230426115851722](media/image-20230426115851722.png) |
|                     | ![image-20230426115858132](media/image-20230426115858132.png) |

| Step 2              |                                                              |
| ------------------- | ------------------------------------------------------------ |
| Components Required | ![image-20230426115928182](media/image-20230426115928182.png) |
|                     | ![image-20230426115937814](media/image-20230426115937814.png) |
|                     | ![image-20230426115942374](media/image-20230426115942374.png) |

| Step 3              |                                                              |
| ------------------- | ------------------------------------------------------------ |
| Components Required | ![image-20230426120004055](media/image-20230426120004055.png) |
|                     | ![image-20230426120008758](media/image-20230426120008758.png) |
|                     | ![image-20230426120012646](media/image-20230426120012646.png) |

| Step 4              |                                                              |
| ------------------- | ------------------------------------------------------------ |
| Components Required | ![image-20230426120034637](media/image-20230426120034637.png) |
|                     | ![image-20230426120038262](media/image-20230426120038262.png) |
|                     | ![image-20230426120046332](media/image-20230426120046332.png) |

| Step 5                                                       |
| ------------------------------------------------------------ |
| Connect the motor and the 8*8 dot matrix display to PCB boards: |

|                          Left motor                          |                         Right motor                          |
| :----------------------------------------------------------: | :----------------------------------------------------------: |
|                              L                               |                              R                               |
|                                                              |                                                              |
|                       **8*8 display**                        |                        **PCB board**                         |
|                              G                               |                              G                               |
|                              5V                              |                              5V                              |
|                             SDA                              |                             SDA                              |
|                             SCL                              |                             SCL                              |
|                                                              |                                                              |
| ![image-20230426120402073](media/image-20230426120402073.png) | <img src="media/image-20230426120410024.png" alt="image-20230426120410024" style="zoom:60%;" /> |

| Step 5              |                                                              |
| ------------------- | ------------------------------------------------------------ |
| Components Required | ![image-20230426120118330](media/image-20230426120118330.png) |
|                     | ![image-20230426120418105](media/image-20230426120418105.png) |
|                     | ![image-20230426120557680](media/image-20230426120557680.png) |

| Step 6              |                                                              |
| ------------------- | ------------------------------------------------------------ |
| Components Required | ![image-20230426120608930](media/image-20230426120608930.png) |
|                     | ![image-20230426120703339](media/image-20230426120703339.png) |
|                     | ![image-20230426120707254](media/image-20230426120707254.png) |

| Step 7              |                                                              |
| ------------------- | ------------------------------------------------------------ |
| Components Required | ![image-20230426120724555](media/image-20230426120724555.png) |
|                     | ![image-20230426120728778](media/image-20230426120728778.png) |
|                     | ![image-20230426120732969](media/image-20230426120732969.png) |

| Step 8              |                                                              |
| ------------------- | ------------------------------------------------------------ |
| Components Required | ![image-20230426120754157](media/image-20230426120754157.png) |
|                     | ![image-20230426120759035](media/image-20230426120759035.png) |
|                     | ![image-20230426120803339](media/image-20230426120803339.png) |

| Step 9                                                       |
| ------------------------------------------------------------ |
| Adjust the angle of the servo to 90 degree before installing the car |

|    Servo    |     PCB     |
| :---------: | :---------: |
| Brown line  |      G      |
|  Red line   |     5V      |
| Orange line | S1（GPIO4） |

**Method 1：Arduino**

```c
#include <Arduino.h>
// servo channels 
int channel_PWM = 3;  
// Servo frequency, then the period is 1/50, which is 20ms, PWM has a total of 16 channels, 0-7 high-speed channels are driven by 80Mhz clock, and the last 8 low-speed channels are driven by 1Mhz clock
int freq_PWM = 50;   
//PWM resolution, the value is between 0-20, here is 10, then the pwm value filled in the following ledcWrite is between 0-2 to the 10th power, that is, 0-1024.
int resolution_PWM = 10;   
//
const int PWM_Pin = 4;  //connect pwm to GPIO4
void setup() {
  ledcSetup(channel_PWM, freq_PWM, resolution_PWM); // Set servo channel, servo frequency, PWM resolution.
  ledcAttachPin(PWM_Pin, channel_PWM);  //connect LEDC channels to IO ports
}
void loop() {
  ledcWrite(channel_PWM, 77);  //The 20ms high level is about 2.5ms, which is 2.5/20*1024, and the angle of the steering gear is 90°.
}
```

Copy the above code to the main board of the Beetlebot car; or you can check this code as follows; 

![image-20230426121011132](media/image-20230426121011132.png)

**Method 2：Scratch-KidsBlock code**

You also can adjust the initial angle of the servo via Scratch-KidsBlock code.

![image-20230426121032699](media/image-20230426121032699.png)

Or you can get it in the following folder

![image-20230426121042314](media/image-20230426121042314.png)

**Method 3：MicroPython code**

```python
from machine import Pin, PWM
import time

#Define GPIO4’s output frequency as 50Hz and its duty cycle as 77, and assign them to PWM
servoPin = Pin(4)
pwm = PWM(servoPin, freq=50)
pwm.duty(77)
time.sleep(1)
```

![image-20230426121123872](media/image-20230426121123872.png)

| Step 9              |                                                              |
| ------------------- | ------------------------------------------------------------ |
| Components Required | ![image-20230426121201645](media/image-20230426121201645.png) |
|                     | ![image-20230426131033578](media/image-20230426131033578.png) |

| Step 10             |                                                              |      |
| ------------------- | ------------------------------------------------------------ | ---- |
| Components Required | ![image-20230426131105765](media/image-20230426131105765.png) |      |
|                     | ![image-20230426131110761](media/image-20230426131110761.png) |      |
|                     | ![image-20230426131116394](media/image-20230426131116394.png) |      |

| Step 11             |                                                              |      |
| ------------------- | ------------------------------------------------------------ | ---- |
| Components Required | ![image-20230426131200859](media/image-20230426131200859.png) |      |
|                     | ![image-20230426131218769](media/image-20230426131218769.png) |      |
|                     | ![image-20230426131231178](media/image-20230426131231178.png) |      |

Wiring up


| Ultrasonic Sensor |     PCB      |
| :---------------: | :----------: |
|        Vcc        |      5V      |
|       Trig        | S2（GPIO5）  |
|       Echo        | S1（GPIO18） |
|        Gnd        |      G       |

![image-20230426131419437](media/image-20230426131419437.png)

|    Servo    |     PCB     |
| :---------: | :---------: |
| Brown line  |      G      |
|  Red line   |     5V      |
| Orange line | S1（GPIO4） |

![image-20230426131435807](media/image-20230426131435807.png)

| Left photoresistor |     PCB     |      | right photoresistor |     PCB     |
| :----------------: | :---------: | ---- | :-----------------: | :---------: |
|         G          |      G      |      |          G          |      G      |
|         V          |      V      |      |          V          |      V      |
|         S          | S（GPIO34） |      |          S          | S（GPIO35） |

![image-20230426131452362](media/image-20230426131452362.png)<img src="media/image-20230426131518018.png" alt="image-20230426131518018" style="zoom:70%;" />

| Complete Installation | ![image-20230426131605246](media/image-20230426131605246.png) |
| --------------------- | ------------------------------------------------------------ |
|  |  |



Install a soccer goal 

| Step 1                           |                                  |
|----------------------------------|----------------------------------|
|  Required Parts                  | ![](media/0fc16ff134aa3503319d4101362338d8.png) |
|                                  | ![](media/1bd86df44aba070fea465a1da26df9e9.png) |
|                                  | ![](media/f3749804b3ac033cfdd7b4423ddea660.png) |
| |  |
| **Step 2**                       |                                  |
|  Required Parts                  | ![](media/8d3f4c81812931c8cb3140c5fc33aa1a.png) |
|                                  | ![](media/dcc81f3f50258615595745676921b34c.png) |
|                                  | ![](media/567e873c86303e9e7ef0f6c919ae8fac.png) |
|                                  |                                  |
| **Step 3**                       |                                  |
|  Required Parts                  | ![](media/99d485c0ce81fe195bd9d4282403b8f1.png) |
|                                  | ![](media/5d749f5431468ffc7be947dfafd68223.png) |
|                                  | ![](media/89031df8ec6afe07c8e58fe26a2974c4.png) |
|  | **Then the soccer goal is installed well.** |


Install the soccer robot

| Step 1                           |                                  |
|----------------------------------|----------------------------------|
| Remove two photoresistors        | ![](media/5e64e86f88135f370916439bbabb2d5a.png) |
| Required Parts                   | ![](media/52bddcd05b409305adfbb39a9af55ee6.png) |
|                                  | ![](media/448e4708895f49afd985391c8ac0cd04.png) |
|                                  | ![](media/448e4708895f49afd985391c8ac0cd04.png) |
|                                  |                                  |
| **Step 2**                       |                                  |
| Required Parts                   | ![](media/b7ca00b9d07fc08780f5e6e39595d974.png) |
|                                  | ![](media/d124cb9095a9cecb1eea4c9b565da3dd.png) |
|                                  | ![](media/ef1331144242e5bc24bc426842d98573.png) |
|                                  |                                  |
| **Step 3**                       |                                  |
| Required Parts                   | ![](media/2520ee435d034c60b66058e4bacfadb6.png) |
|                                  | ![](media/1d88fd0c5f6b4aff89c3900b3df5533d.png) |
|                                  | ![](media/d05ab09c6662e3fb4d62be4f355a91be.png) |
|                                  |                                  |
| **Step 4**                       |                                  |
| Required Parts                   | ![](media/82c5dd6fbe0818dbdbaf33ee0b019215.png) |
|                                  | ![](media/5964ab1fd800a0522923960dd32be299.png) |
|                                  | ![](media/29abea2f58433515043942fd37af34e7.png) |
|                                  |                                  |
| **Step 5**                       |                                  |
| Required Parts                   | ![](media/91e35080c03e1ca03b2a58b71da76e43.png) |
|                                  | ![](media/a643659079fdbf1433bb40658a590675.png) |
|                                  | ![](media/9ec78ee08c51b297ccaa34b13fa8ae8d.png) |
|                                  |                                  |
| **Step 6**                       |                                  |
| Required Parts                   | ![](media/d3ae331c69d05147a98b9d8353496a9f.png) |
|  | ![image-20230426132056793](media/image-20230426132056793.png) |
|                                  | ![](media/f939d187c78455662d9c3fd3bc77d8b7.png) |
|                                  |                                  |
| **Step 7**                       |                                  |
| Required Parts                   | ![](media/f2a0fea032c9ca807196bae481054b82.png) |
|                                  | ![](media/e9fb139ce5954ee5d0cc32028b15d1a4.png) |
|                                  | ![](media/dc849d125d6cf7748725d369ca39b6f2.png) |
|                                  |                                  |
| **Step 8**                       |                                  |
| Required Parts                   | ![](media/f45d4a0edb9caf49703f6a14061d3356.png) |
|     | Adjust the angle of the claw. Then make it close and face front |
|  | ![](media/d65a5580f2fc3292ad22005e1b480a3c.png) |
|                                  | ![](media/54d2787ec549a6d651753475ca760f6b.png) |

| Step 9                                   |
| ---------------------------------------- |
| Set the angle of the servo to 180 degree |

| Servo  |  PCB Board   |
| :----: | :----------: |
| Brown  |      G       |
|  Red   |      5V      |
| Orange | S2（GPIO23） |

```c
//*********************************************************************
#include <Arduino.h>

//Servo channels 
int channel_PWM = 4;  
// Servo frequency, then the period is 1/50, which is 20ms, PWM has a total of 16 channels, 0-7 high-speed channels are driven by 80Mhz clock, and the last 8 low-speed channels are driven by 1Mhz clock.
int freq_PWM = 50;   
// PWM resolution, the value is between 0-20, here is 10, then the pwm value filled in the following ledcWrite is between 0-2 to the 10th power, that is, 0-1024.
int resolution_PWM = 10;   
//
const int PWM_Pin = 23;  //connect pwm to GPIO23 output.

void setup() {
  ledcSetup(channel_PWM, freq_PWM, resolution_PWM); // Set servo channel, servo frequency, PWM resolution..
  ledcAttachPin(PWM_Pin, channel_PWM);  //
}

void loop() {
  ledcWrite(channel_PWM, 128);  //The 20ms high level is about 2.5ms, which is 2.5/20*1024, and the angle of the steering gear is 180°.
.
}
//*************************************************
```

Upload the code of the servo to the main board of the Beetlebot car, as shown below:

![image-20230426132353810](media/image-20230426132353810.png)

You can also initialize the angle of the servo through the following code

![image-20230426132405025](media/image-20230426132405025.png)

Check the Scratch-KidsBlock code as follows，then upload the code to the main board of the Beetlebot car

![image-20230426132414672](media/image-20230426132414672.png)

| Step 9         |                                                              |
| -------------- | ------------------------------------------------------------ |
| Required Parts | ![image-20230426132443154](media/image-20230426132443154.png) |
|                | Keep the claw close and face front before installing the gear |
|                | ![image-20230426132451394](media/image-20230426132451394.png) |
|                | ![image-20230426132506192](media/image-20230426132506192.png) |
|                |                                                              |
| **Step 10**    |                                                              |
| Required Parts | ![image-20230426132545747](media/image-20230426132545747.png) |
|                | ![image-20230426132549843](media/image-20230426132549843.png) |
|                | ![image-20230426132554327](media/image-20230426132554327.png) |
|                |                                                              |
| **Step 11**    |                                                              |
| Required Parts | ![image-20230426132618628](media/image-20230426132618628.png) |
|                | ![image-20230426132622947](media/image-20230426132622947.png) |
|                | ![image-20230426132626371](media/image-20230426132626371.png) |
|                | ![image-20230426132637191](media/image-20230426132637191.png) |

| Wiring Diagram         |                                                              |
| ---------------------- | ------------------------------------------------------------ |
| Wire up the LEGO servo | ![image-20230426132700692](media/image-20230426132700692.png) |



Install the catapult

| Step 1              |                                                  |
| ------------------- | ------------------------------------------------ |
| Required components | ![](media/ef12c46a8dc6e5f5c7f7ee6fc3c3dc55.png)  |
|                     | ![](media/85116f87b7e67a5ab0de47507da771aa.png)  |
|                     | ![](media/bb5d2d9bc07a9cfdc997f798c6c56eca.png)  |
|                     |                                                  |
| **Step 2**          |                                                  |
| Required components | ![](media/d827f9196a2aed7686c9d767e64b7f66.png)  |
|                     | ![](media/7e4fed5d035aac6b58ee79afd3aca1a1.png)  |
|                     | ![](media/088c8c481e0b48b3625f465a4ceed269.png)  |
|                     |                                                  |
| **Step 3**          |                                                  |
| Required components | ![](media/52da40da0bbeae39083c81a57c1117e6.png)  |
|                     | ![](media/42004639ab3aaca47c5121bf7ac18a2d.png)  |
|                     | ![](media/08f91fa357f53479f8a121bd2b6d8883.png)  |
|                     |                                                  |
| **Step 4**          |                                                  |
| Required components | ![](media/1678f2dcaaed186ba12fbcbc9a6d34c2.png)  |
|                     | ![](media/8b54d0c59f13bbbc54fafefec90bbb24.png)  |
|                     | ![](media/b2900c9594fb64b10ee734e2a533cfbf.png)  |
|                     |                                                  |
| **Step 5**          |                                                  |
| Required components | ![](media/9975825da874d5431f9e672ca9a4479e.png)  |
|                     | ![](media/5c41a82613abc2c43016fb25edc5c68c.png)  |
|                     | ![](media/08ebb224d83a88b37ebd8b5cb80bb3ad.png)  |
|                     |                                                  |
| **Step 6**          |                                                  |
| Required components | ![](media/9c247eddce7a872899c34e013e12db31.png)  |
|                     | ![](media/3a2946b85862bf346ffab23458553bb3.png)  |
|                     | ![](media/531619d92526f175188479be5fe9c403.png)  |
|                     |                                                  |
| **Step 7**          |                                                  |
| Required components | ![](media/76541a6311535fd572743b0ad47f1254.png)  |
|                     | ![](media/a75726411d9f0bcccda1600a3f3b3cdc.png)  |
|                     | ![](media/216440c8133bb1fa5f9670d084815ee6.png)  |
|                     |                                                  |
| **Step 8**          |                                                  |
| Required components | ![](media/7e7a7032c111bbfc5e4a6605abb84dd7.png)  |
|                     | ![](media/b933ff3a1efee59f590e3d511c1d2864.png)  |
|                     | ![](media/be75847ab4f10c2750868daf02cad97d.png)  |
|                     |                                                  |
| **Step 9**          |                                                  |
| Required components | ![](media/8a0a23b5a1a7a332209e87d032815609.png)  |
|                     | ![](media/5887d93dd221b4c3aeb7dcfe2a466846.png)  |
|                     | ![](media/dae339a4baed35100a3580384bf228db.png)  |
|                     |                                                  |
| **Step 10**         |                                                  |
| Required components | ![](media/a376478c51daef7b169d65b91257cff1.png)  |
|                     | ![](media/ea08ecc209960e32eee4c930201c6112.png)  |
|                     | ![](media/03394d1ec20bdfec33c01fcbaca3272a.png)  |
|                     |                                                  |
| **Step 11**         |                                                  |
| Required components | ![](media/ccbf96f8a832f1b7429dd84c5d4345c8.png)  |
|                     | ![](/media/e4eeea6acd26fc704b516a4eed86d280.png) |
|                     | ![](media/275b434c0be9b0b29b0414c86f8016dd.png)  |
|                     |                                                  |
| **Step 12**         |                                                  |
| Required components | ![](media/b7dcfd9502c3fd7b10667b6c8e02d9c2.png)  |
|                     | ![](media/0805a74bbabfd014c772223f269034e6.png)  |
|                     | ![](media/997424695d7920037017741fdbba2fac.png)  |
|                     |                                                  |
| **Step 13**         |                                                  |
| Required components | ![](media/6348991aedca79b2dd8d672bf92a11d5.png)  |
|                     | ![](media/a6b15b1c9cf2b4c57eb99613f3b101c4.png)  |
|                     | ![](media/dc88133e92982bd31fecefee7ad8a7c1.png)  |
|                     |                                                  |
| **Step 14**         |                                                  |
| Required components | ![](media/4647a2f97a30479a02a9166625ff8691.png)  |
|                     | ![](media/cca8268d5c1cea871a6724f38440bf44.png)  |
|                     | ![](media/ff899bedee462220afed7d6b57e5c4fb.png)  |
|                     |                                                  |
| **Step 15**         |                                                  |
| Required components | ![](media/2ff9dd7a9593ae1d87ee1ef78f5ec79c.png)  |
|                     | ![](media/2c0b652b42d4695eaeaf57802f7d0ab7.png)  |
|                     | ![](media/7e28f9049c1d8081f7bb24b07c75471f.png)  |
|                     |                                                  |
| **Step 16**         |                                                  |
| Required components | ![](media/f62f9d4b93b1b0ac66738baa034e710d.png)  |
|                     | ![](media/3f1f8d3bfd3dd6c810d55ffceefe6ca3.png)  |
|                     | ![](media/857bff0ba903623bc8d3a44d6410d828.png)  |

| Step 17                                  |
| ---------------------------------------- |
| Set the angle of the servo to 180 degree |

| Servo  |  PCB Board   |
| :----: | :----------: |
| Brown  |      G       |
|  Red   |      5V      |
| Orange | S2（GPIO23） |

```c
//*********************************************************************
#include <Arduino.h>

//Servo channels 
int channel_PWM = 4;  
// Servo frequency, then the period is 1/50, which is 20ms, PWM has a total of 16 channels, 0-7 high-speed channels are driven by 80Mhz clock, and the last 8 low-speed channels are driven by 1Mhz clock.
int freq_PWM = 50;   
// PWM resolution, the value is between 0-20, here is 10, then the pwm value filled in the following ledcWrite is between 0-2 to the 10th power, that is, 0-1024.
int resolution_PWM = 10;   
//
const int PWM_Pin = 23;  //connect pwm to GPIO23 output.

void setup() {
  ledcSetup(channel_PWM, freq_PWM, resolution_PWM); // Set servo channel, servo frequency, PWM resolution..
  ledcAttachPin(PWM_Pin, channel_PWM);  //
}

void loop() {
  ledcWrite(channel_PWM, 128);  //The 20ms high level is about 2.5ms, which is 2.5/20*1024, and the angle of the steering gear is 180°.
.
}
//************************************************
```

Upload the code of the servo to the main board of the Beetlebot car, as shown below

![image-20230426133131669](media/image-20230426133131669.png)

You can also initialize the angle of the servo through the following code

![image-20230426133139862](media/image-20230426133139862.png)

Check the Scratch-KidsBlock code as follows，then upload the code to the main board of the Beetlebot car

![image-20230426133148166](media/image-20230426133148166.png)

| Step 17             |                                                              |
| ------------------- | ------------------------------------------------------------ |
| Required components | ![image-20230426133213266](media/image-20230426133213266.png) |
|                     | ![image-20230426133220039](media/image-20230426133220039.png) |
|                     | ![image-20230426133225798](media/image-20230426133225798.png) |
|                     |                                                              |
| **Step 18**         |                                                              |
| Required components | ![image-20230426133250745](media/image-20230426133250745.png) |
|                     | ![image-20230426133256149](media/image-20230426133256149.png) |
|                     | ![image-20230426133301303](media/image-20230426133301303.png) |

| Wiring up           |                                                              |
| ------------------- | ------------------------------------------------------------ |
| Interface the servo | ![image-20230426133322928](media/image-20230426133322928.png) |



Install the handling robot

| Step 1                           |                                  |
|----------------------------------|----------------------------------|
| Dismantle the ultrasonic sensor  | ![](media/f05a58fdd61093240a78a884d2484bab.png)  |
| Required components              | ![](media/1f8438657adee5ee0931a2e0db8c8d79.png)  |
|                                  | ![](/media/b9cb95a5c53ab96b85b41d648c19534f.png) |
|                                  | ![](media/502348fe825fa6e57cd61d1700c93c0f.png)  |
| |  |
| **Step 2**                       |                                  |
| Required components              | ![](media/6ce5dc24243321d0d31e385997059e21.png)  |
|                                  | ![](media/d33b93e264a8c2833ce2b3d4dcd91517.png)  |
|                                  | ![](media/c9a151d3856720e100dabe436d62d230.png)  |
|                                  |                                  |
| **Step 3**                       |                                  |
| Required components              | ![](media/a2b2a96f444801e2da559161cc5b2b65.png)  |
|                                  | ![](media/077d7de8e6260998b60e008593bff7e5.png)  |
|                                  | ![](media/a9a493a264445b0feab48159837fe725.png)  |
|                                  |                                  |
| **Step 4**                       |                                  |
| Required components              | ![](media/a86c18982b0afaa1921a3b0072989a95.png)  |
|                                  | ![](media/0f804e35e2f7dc6e2a028d21f21e392e.png)  |
|                                  | ![](media/4a759b55f056a6cd9dfdee0cece5dfd1.png)  |
|                                  |                                  |
| **Step 5**                       |                                  |
| Required components              | ![](media/e99bf266cf59d343b34f2cca10de5b49.png)  |
|                                  | ![](media/ce5e3e8e4548aba8fad60910214bcca6.png)  |
|                                  | ![](media/9b2185eaf2f66f35b57754d5476b1ddd.png)  |
|                                  |                                  |
| **Step 6**                       |                                  |
| Required components              | ![](media/4dfd662862d57090e60b71b18cd3291f.png)  |
|                                  | ![](/media/7164d7dd08e97a62bc77ae08aadf1526.png) |
|                                  | ![](media/1cccaf2a536170c11bbc4cdf7683484a.png) |
|                                  |                                  |
| **Step 7**                       |                                  |
| Required components              | ![](media/7d3e50e74ae36545217c4fa15a53d04e.png)  |
|                                  | ![](media/7d32a51858167fd8aee486b72f287ae3.png)  |
|                                  | ![](media/83dbaa2175018608dc84f4dda726fa96.png) |
|                                  |                                  |
| **Step 8**                       |                                  |
| Required components | ![](media/6e73265906657a00ca17c5323f65dcec.png) |
|                                  | ![](media/f60d276bb389be3c440b15adea292adf.png) |
|                                  | ![](media/86f43f7d15cfb6c4ac807423b2510de0.png)  |

| Step 9                                   |
| ---------------------------------------- |
| Set the angle of the servo to 180 degree |

| Servo  | PCB Board |
| :----: | :-------: |
| Brown  |     G     |
|  Red   |    5V     |
| Orange | S2（A0）  |

```c
//*********************************************************************
#include <Arduino.h>

//Servo channels 
int channel_PWM = 4;  
// Servo frequency, then the period is 1/50, which is 20ms, PWM has a total of 16 channels, 0-7 high-speed channels are driven by 80Mhz clock, and the last 8 low-speed channels are driven by 1Mhz clock.
int freq_PWM = 50;   
// PWM resolution, the value is between 0-20, here is 10, then the pwm value filled in the following ledcWrite is between 0-2 to the 10th power, that is, 0-1024.
int resolution_PWM = 10;   
//
const int PWM_Pin = 23;  //connect pwm to GPIO23 output.

void setup() {
  ledcSetup(channel_PWM, freq_PWM, resolution_PWM); // Set servo channel, servo frequency, PWM resolution..
  ledcAttachPin(PWM_Pin, channel_PWM);  //
}

void loop() {
  ledcWrite(channel_PWM, 128);  //The 20ms high level is about 2.5ms, which is 2.5/20*1024, and the angle of the steering gear is 180°.
.
}
//*********************************************************************
```

Upload the code of the servo to the main board of the Beetlebot car, as shown below

![img](media/wps494.jpg) 

You can also initialize the angle of the servo through the following code

![img](media/wps495.jpg) 

Check the Scratch-KidsBlock code as follows，then upload the code to the main board of the Beetlebot car

![image-20230426133704799](media/image-20230426133704799.png)

| Step 9              |                                                              |
| ------------------- | ------------------------------------------------------------ |
| Required components | ![image-20230426133729531](media/image-20230426133729531.png) |
|                     | ![image-20230426133736763](media/image-20230426133736763.png) |
|                     | ![image-20230426133740493](media/image-20230426133740493.png) |
|                     |                                                              |
| **Step 10**         |                                                              |
| Required components | ![image-20230426133800890](media/image-20230426133800890.png) |
|                     | ![image-20230426133805162](media/image-20230426133805162.png) |
|                     | ![image-20230426133810650](media/image-20230426133810650.png) |
|                     | ![image-20230426133816746](media/image-20230426133816746.png) |
|                     | ![image-20230426133822490](media/image-20230426133822490.png) |
|                     | ![image-20230426133827738](media/image-20230426133827738.png) |

| Wiring up     |                                                              |
| ------------- | ------------------------------------------------------------ |
| Wire up servo | ![image-20230426133843434](media/image-20230426133843434.png) |













