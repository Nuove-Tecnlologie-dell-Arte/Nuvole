int led1=2;
int led2=3;
int led3=4;
int led4=5;
int led5=6;
int led6=7;
int led7=8;
int led8=9;
int led9=10;
int led10=11;

int velocita = 40;
int fade = 100;  //fadein fulmine lento diminuire per rallentare, alzare per velocizzare
int fade2 = 13; //fadeout fulmine lento
int fadeIdleIn = 5; //fadein idle
int fadeIdleOut = 3; //fadeout idle
int maxSlowValueIn = 700;  //gestione tempo fadein fulmini lenti mai scendere sotto i 700
int maxSlowValueOut = 1000; //gestione tempo fadeout fulmini lenti mai scendere sotto i 1000
int valueIdle = 100; //valore massimo in idle
int maxValueIdle = 1500; //gestione tempo fade idle
int randNumber = 0;

void setup() {

  // initialize serial communication with computer:
  Serial.begin(9600);
  randomSeed(analogRead(0));
}

void loop(){

  randNumber = random(1, 20);
  Serial.println(randNumber);

  if (randNumber==1){

    for (int value = 0; value <= maxSlowValueIn; value += fade){
        
      if (value <= 255){
        analogWrite(led1, value);
      }

      if (value >= 100 && value <= 355){
        analogWrite(led2, value - 100);
      }

      if (value >= 200 && value <= 455){
        analogWrite(led3, value - 200);
      }

      if (value >= 300 && value <= 555){
        analogWrite(led4, value - 300);
      }

      if (value >= 400 && value <= 655){
        analogWrite(led5, value - 400);
      }

      delay(velocita);
    }
    
    for (int value = maxSlowValueOut; value >= 0; value -= fade2){
     
      if (value <= maxSlowValueOut && value >= maxSlowValueOut - 255){
        analogWrite(led1, value - maxSlowValueOut + 255);
     }

      if (value <= maxSlowValueOut - 255 && value >= maxSlowValueOut - 355){
        analogWrite(led2, value - maxSlowValueOut + 355);
     }

      if (value <= maxSlowValueOut - 355 && value >= maxSlowValueOut - 455){
        analogWrite(led3, value - maxSlowValueOut + 455);
     }

      if (value <= maxSlowValueOut - 455 && value >= maxSlowValueOut - 555){
        analogWrite(led4, value - maxSlowValueOut + 555);
     }

      if (value <= maxSlowValueOut - 555 && value >= maxSlowValueOut - 655){
        analogWrite(led5, value - maxSlowValueOut + 655);
     }
      delay(velocita);
    }
  }
  
  else {
    
    for (int value = 0; value <= valueIdle; value += fadeIdleIn){

        analogWrite(led1, value);
        analogWrite(led2, value);
        analogWrite(led3, value);
        analogWrite(led4, value);
        analogWrite(led5, value);
        delay(velocita);
    }
      delay(maxValueIdle);

    for (int value = valueIdle; value >= 0; value -= fadeIdleOut){

        analogWrite(led1, value);
        analogWrite(led2, value);
        analogWrite(led3, value);
        analogWrite(led4, value);
        analogWrite(led5, value);
        delay(velocita);
    }
      delay(maxValueIdle);
  }
}