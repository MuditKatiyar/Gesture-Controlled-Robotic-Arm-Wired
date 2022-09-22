# Gesture-Controlled-Robotic-Arm-normal-

##_**Gesture Controlled Robotic Arm Wired Model**_



_**Video At END**_

_ROBOTIC ARM_
_Project Design_


The Robotic Arm of this project consist of various component.

**1) End Effector.**
Used to grip the Objects.

![image](https://user-images.githubusercontent.com/113198082/189498488-69e559d7-0b3d-4bca-a646-939a0be85084.png)
![image](https://user-images.githubusercontent.com/113198082/189498519-370e6205-096f-4f33-b309-423f647a144f.png)



**2) Actuator.**
Servo in the robotic arm will work as actuator, similar to our muscles. These actuator help the arm of the robot to lift up and down as well as carry weight. This is the major component in the Robotic arm.
![image](https://user-images.githubusercontent.com/113198082/191836405-d32ced30-1049-4a45-a2a4-5326164d5f0d.png)
For choosing the servo motor in the Robotic arm, we must look at the torque and speed of the motor. There are two types of Motor used in this project as follows –
1)	Mg90 mini servo
2)	MG995 Servo
3)	Sg90 mini servo

![image](https://user-images.githubusercontent.com/113198082/191836511-e2da4d51-75ad-4c38-900d-9f18f271ab99.png)
![image](https://user-images.githubusercontent.com/113198082/191836563-c7e0fe61-a92b-4e0a-9e3e-25ad7c9c1b85.png)

Connecting Pins are VCC, GND & PWM.

**_For connection refer to repository report file_**






**3) Sensor.**

Flex sensor is also called a blend sensor or it is flexible potentiometer.

![image](https://user-images.githubusercontent.com/113198082/189498665-6d5093c7-777b-48da-b564-1dcc6f236b42.png)



**4) Controller.**

MPU6050 module is MEMS which stands for Micro Electro- Mechanical System which provide 3 axis Accelerometer and 3 axis Gyroscope. This can be used to measure acceleration, orientation, velocity and displacement. We will use ROLL, PITCH and YAW values to determine the position and orientation of a body at 115200 or 9600 baud rate for the serial monitor. It has a default address 0x68 for the communication b/w Arduino and MPU 6050. There are three 16 bit ADC converter for each Accelerometer and Gyroscope value

![image](https://user-images.githubusercontent.com/113198082/189498564-0aa4b7d9-3175-47a2-af12-dab539293d72.png)
![image](https://user-images.githubusercontent.com/113198082/189498724-990865a8-d6e2-4be1-8389-593f64b7f9c5.png)

**_For connection refer to repository report file_**



![image](https://user-images.githubusercontent.com/113198082/189498327-ecb4988f-2867-4e43-9064-787618c42925.png)
![image](https://user-images.githubusercontent.com/113198082/189498407-ed95c33c-a604-4952-8e54-617bc507cd70.png)
![image](https://user-images.githubusercontent.com/113198082/189498416-668cfd2f-0726-4fed-99a6-effdda904a54.png)


**Whole Project Image**

![image](https://user-images.githubusercontent.com/113198082/189498599-2ae94b4a-1930-4838-bb50-fa2cb759bb9f.png)
![image](https://user-images.githubusercontent.com/113198082/189498607-3a003ccd-df41-445d-9c13-f6291fc318e9.png)

Flex sensor & MPU6050 attached to Glove to control the motion of Robotic Arm

_Video to Watch_


    https://user-images.githubusercontent.com/113198082/189499251-03c0c845-0dc3-46e7-a956-3b829e66e24e.mp4


**_Code_**

    https://github.com/MuditKatiyar/Gesture-Controlled-Robotic-Arm-Wired/blob/176c3a942e415d15a9ec2cff70e1df8459cc33be/Myproject.ino
