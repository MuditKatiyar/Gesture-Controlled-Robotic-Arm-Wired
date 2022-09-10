//Code for Gesture Controlled Robotic ARM (Arduino Nano & MPU6050)
//Circuit Digest

#include<Wire.h>                //I2C Wire Library 
#include<Servo.h>               //Servo Motor Library

Servo servo_1;      
Servo servo_2;
Servo servo_3;
Servo servo_4;

const int flexPin=A0;
const int MPU_addr=0x68;        //MPU6050 I2C Address
int16_t axis_X,axis_Y,axis_Z;
int minVal=265;
int maxVal=402;
int a;

double x;
double y;
double z;
 
void setup()
{
  Serial.begin(9600);
  
  Wire.begin();                      //Initilize I2C Communication
  Wire.beginTransmission(MPU_addr);  //Start communication with MPU6050
  Wire.write(0x6B);                  //Writes to Register 6B
  Wire.write(0);                     //Writes 0 into 6B Register to Reset
  Wire.endTransmission(true);        //Ends I2C transmission
  
  servo_1.attach(3);   // Forward/Reverse_Motor
//  servo_2.attach(5);   // Up/Down_Motor
  servo_3.attach(5);   // Gripper_Motor
  servo_4.attach(6);   // Left/Right_Motor
  
}

void loop()
{

  int flexValue;
  Wire.beginTransmission(MPU_addr);    
  Wire.write(0x3B);                  //Start with regsiter 0x3B 
  Wire.endTransmission(false);     
  Wire.requestFrom(MPU_addr,14,true);  //Read 14 Registers 
  
  axis_X=Wire.read()<<8|Wire.read();                //Reads the MPU6050 X,Y,Z AXIS Value
  axis_Y=Wire.read()<<8|Wire.read();
  axis_Z=Wire.read()<<8|Wire.read();
  
  int xAng = map(axis_X,minVal,maxVal,-90,90);     // Maps axis values in terms of -90 to +90  
  int yAng = map(axis_Y,minVal,maxVal,-90,90);
  int zAng = map(axis_Z,minVal,maxVal,-90,90);
       
  x= RAD_TO_DEG * (atan2(-yAng, -zAng)+PI);       //Formula to convert into degree
  y= RAD_TO_DEG * (atan2(-xAng, -zAng)+PI);
  z= RAD_TO_DEG * (atan2(-yAng, -xAng)+PI);


//Code For motor

  if(x >=0 && x <= 60) 
  {
     int mov1 = map(x,0,90,0,180);
     Serial.print("Movement in F/R = ");
     Serial.print(mov1);
     Serial.println((char)176);
     servo_1.write(mov1);
  }
 
 /* else if(x >=300 && x <= 345) 
  {
     int mov2 = map(x,345,300,45,90);
     Serial.print("Movement in Up/Down = ");
     Serial.print(mov2);
     Serial.println((char)176);
     servo_2.write(mov2);
     delay(1000);
  }*/

 if(y >=0 && y <= 45) 
  {
     int mov3 = map(y,0,45,90,180);
     Serial.print("Movement in Right = ");
     Serial.print(mov3);
     Serial.println((char)176);
     servo_4.write(mov3);
  } 
 
 else if(y >=300 && y <= 345) 
  {
     int mov3 = map(y,300,345,0,90);
     Serial.print("Movement in Left = ");
     Serial.print(mov3);
     Serial.println((char)176);
     servo_4.write(mov3);
  }
  
// Code for Flex Sensor  
  flexValue=analogRead(flexPin);
  Serial.println("Flex value is:");
  Serial.println(flexValue);
  if(flexValue>970){
    servo_3.write(180);
  }
  else{
    servo_3.write(150);
  }
  delay(1000);
}
