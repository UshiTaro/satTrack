#include <Servo.h>

Servo Azimuth;
Servo Elevation;

 void setup() {
  Serial.begin(9600);
  Azimuth.attach(9);
  Elevation.attach(10); 
  Azimuth.write(180);
  Elevation.write(180);
  delay(1000);
}

void loop() {
  while(!Serial.available());
  String com = Serial.readStringUntil('\n');
  char buf[32];
  com.toCharArray(buf, 32);
  
  float az = 360-atof(strtok(buf, ","));
  float el = atof(strtok(NULL, ","));

  if(az>180){
    az = az-180;
    el = 180 - el;
  }
  
  Azimuth.write(az);
  Elevation.write(el);
  Serial.print(az);
  Serial.print('\t');
  Serial.println(el);
}
