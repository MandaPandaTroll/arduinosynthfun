//notes

int A = 110;
int Aa = 116;
int B = 123;
int C = 130;
int Cc = 138;
int D = 146;
int Dd = 155;
int E = 164;
int F = 174;
int Ff = 185;
int G = 196;
int Gg = 208;

//pins

int keyA = 2;
int keyB = 3;
int keyC = 4;
int keyD = 5;
int keyE = 6;
int keyF = 7;
int keyG = 8;
int keyA1 = 9;
int pitchOut = 13;
int kick = 10;


//subdivisions

float t = 3;
   float baseSpeed = 1000;

   float varSpeed = baseSpeed / t;
  
  float wh = varSpeed , ha = wh/2, third = wh/3, fifth = wh/4, sixth = wh/6, eighth = wh/8, sixteenth = wh / 16, thirtysecond = wh/32;



void setup() {
  // put your setup code here, to run once:
pinMode(keyA, INPUT);
pinMode(keyB, INPUT);
pinMode(keyC, INPUT);
pinMode(keyD, INPUT);
pinMode(keyE, INPUT);
pinMode(keyF, INPUT);
pinMode(keyG, INPUT);
pinMode(keyA1, INPUT);
pinMode(pitchOut, OUTPUT);
pinMode(kick, OUTPUT);



}

void loop() {
  // put your main code here, to run repeatedly:

 


  
if (digitalRead(keyA) == HIGH){



  tone(pitchOut, A);
delay(third);

}

if (digitalRead(keyB) == HIGH){


  
    tone(pitchOut, B);
    delay(third);
}
  
if (digitalRead(keyC) == HIGH){


  
  tone(pitchOut, C);
  delay(third);

}
  
if (digitalRead(keyD) == HIGH){



tone(pitchOut, D);
delay(third);

  
}

  
if (digitalRead(keyE) == HIGH){



    tone(pitchOut, E);
    delay(third);

}

  
if (digitalRead(keyF) == HIGH){


   
 tone(pitchOut, F);
 delay(third);

}

  
if (digitalRead(keyG) == HIGH){



  tone(pitchOut, G);
  delay(third);


}

  
if (digitalRead(keyA1) == HIGH){

   
   tone(pitchOut, A*2);
   delay(third);

}

else {
  noTone(pitchOut);

}

}
