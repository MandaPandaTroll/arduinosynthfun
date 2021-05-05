//Just Intonation Ultrasonar "theremin". The pitch library is quite extensive, but the default is A minor.
//based on the VMA306 ultrasonic sensor and the distance measurement code found
//here: https://alselectro.wordpress.com/2013/03/08/arduinoultrasonic-sensor-for-distance-measurement/ 




#define ECHOPIN 3        // Pin to receive echo pulse
#define TRIGPIN 2        // Pin to send trigger pulse
#include "pitches.h"
 
void setup()
{
  Serial.begin(9600);
  pinMode(ECHOPIN, INPUT);
  pinMode(TRIGPIN, OUTPUT);
  pinMode(10, OUTPUT);
}

void loop()
{
  // Start Ranging -Generating a trigger of 10us burst
  digitalWrite(TRIGPIN, LOW);
  delayMicroseconds(2);
  digitalWrite(TRIGPIN, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIGPIN, LOW);

  // Distance Calculation

 
  float distance = pulseIn(ECHOPIN, HIGH);
  distance= distance/58; 

/* The speed of sound is 340 m/s or 29 us per cm.The Ultrasonic burst travels out & back.So to find the distance of object we divide by 58  */

  Serial.print(distance);
  Serial.println(" cm");
  

 
  
    if (distance < 5){
      tone(10, bI);
    }
    if (distance < 10 && distance > 5){
      tone(10, bIV);
    }

    
if (distance < 15 && distance > 10){
      tone(10, bV);
    }

if (distance < 20 && distance > 15){
      tone(10, bVII);
}
      if (distance < 25 && distance > 20){
      tone(10, bX);
      
    }
if (distance < 30 && distance > 25){
      tone(10, bXI);
    }

    if (distance < 35 && distance > 30 ){
      tone(10, bXV);
    }

    if (distance < 40 && distance > 35){
      tone(10, cI);
    }

        if (distance < 45 && distance > 40){
      tone(10, cIV);
    }

    
if (distance < 50 && distance > 45){
      tone(10, cV);
    }

if (distance < 55 && distance > 50){
      tone(10, cVII);
}
      if (distance < 60 && distance > 55){
      tone(10, cX);
      
    }
if (distance < 65 && distance > 60){
      tone(10, cXI);
    }

    if (distance < 70 && distance > 65 ){
      tone(10, cXV);
    }

    if (distance < 75 && distance > 70){
      tone(10, dI);
    }




if (distance > 75){  // Tells the arduino to stay at the most recent note played. You can also put either noTone() (to make it go silent without input) or tone(10, the note of your choosing), here.
  delay (10);
}

delay (100); // Can be adjusted to taste, but needs to be >= 50 ms.

    
}


  
  
