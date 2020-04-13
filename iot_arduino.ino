//include libraries
#include <Blynk.h>
#define BLYNK_PRINT Serial
#include<ESP8266WiFi.h>
#include<BlynkSimpleEsp8266.h>
#include <Servo.h>
//initialise servo motors
Servo thumb;
Servo index1;
Servo middle;
Servo ring;
Servo pinky;
//blynk User connection
char auth[] = "a8ce131697354845957b4dacaff464ed";
char ssid[] = "A-905(2.4G)";
char pass[] = "9989088369";

void setup()
{
  Serial.begin(9600);
  Blynk.begin(auth, ssid, pass);

  thumb.attach(15); // NodeMCU D8 pin
  index1.attach(13);// NodeMCU D7 pin
  middle.attach(12);// NodeMCU D6 pin
  ring.attach(14);// NodeMCU D5 pin
  pinky.attach(2);// NodeMCU D4 pin
  thumb.write(180);
  index1.write(180);
  middle.write(180);
  ring.write(180);
  pinky.write(180);
 }
  
void loop()
{
  
  Blynk.run();
  
}
BLYNK_WRITE(V1)//a bar for controlling thumb finger only
{
   thumb.write(param.asInt());
}

BLYNK_WRITE(V2)//a bar for controlling index finger only
{
  index1.write(param.asInt());
}
BLYNK_WRITE(V3)//a bar for controlling middle finger only
{
  middle.write(param.asInt());
}
BLYNK_WRITE(V4)//a bar for controlling ring finger only
{
  ring.write(param.asInt());
}
BLYNK_WRITE(V5)//a bar for controlling pinky finger only
{
  pinky.write(param.asInt());
}
BLYNK_WRITE(V6)//a button assigned for OK emoji
{
  delay(200);
  thumb.write(0);
  delay(200);
  index1.write(0);
  delay(200);
  middle.write(180);
  delay(200);
  ring.write(180);
  delay(200);
  pinky.write(180);
  delay(200);
}
BLYNK_WRITE(V7)//a button assigned for YO emoji
{
  delay(200);
  thumb.write(180);
  delay(200);
  index1.write(180);
  delay(200);
  middle.write(0);
  delay(200);
  ring.write(0);
  delay(200);
  pinky.write(180);
  delay(200);
}
BLYNK_WRITE(V8)//a button assigned for peace emoji
{
  delay(200);
  thumb.write(0);
  delay(200);
  index1.write(180);
  delay(200);
  middle.write(180);
  delay(200);
  ring.write(0);
  delay(200);
  pinky.write(0);
  delay(200);
}
BLYNK_WRITE(V9)//a button assigned for HI-Five emoji
{
  delay(200);
  thumb.write(180);
  delay(200);
  index1.write(180);
  delay(200);
  middle.write(180);
  delay(200);
  ring.write(180);
  delay(200);
  pinky.write(180);
  delay(200);
}
