int led1=2;
int led2=3;
int led3=4;
int led4=5;
int led5=6;
int led6=7;
int led7=8;

int velocita = 60; // la velocita con cui cambia il fade + è alto piu glitcha
int fadeSlowOut = 20; //fadeout fulmine lento diminuire per rallentare, alzare per velocizzare
int fadeIdleIn = 5; //fadein idle
int fadeIdleOut = 3; //fadeout idle
int maxSlowValueOut = 1000; //gestione tempo fadeout fulmini lenti mai scendere sotto i 1000
int valueIdle = 100; //valore massimo in idle
int maxValueIdle = 1200; //gestione tempo fade idle mai scendere sotto 150
int randNumber = 0;

void setup() {

  // initialize serial communication with computer:
  Serial.begin(9600);
  randomSeed(analogRead(0));
}

void loop(){

  randNumber = random(1, 14);
  Serial.println(randNumber);

  if (randNumber==1){

    for (int value = maxSlowValueOut; value >= 0; value -= fadeSlowOut){
     
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

      if (value <= maxSlowValueOut - 655 && value >= maxSlowValueOut - 755){
        analogWrite(led6, value - maxSlowValueOut + 755);
     }

     if (value <= maxSlowValueOut - 755 && value >= maxSlowValueOut - 855){
        analogWrite(led7, value - maxSlowValueOut + 855);
     }

      delay(velocita);
    }
  }

  if (randNumber==2){

    for (int value = maxSlowValueOut; value >= 0; value -= fadeSlowOut){
     
      if (value <= maxSlowValueOut && value >= maxSlowValueOut - 255){
        analogWrite(led1, value - maxSlowValueOut + 255);
     }

      if (value <= maxSlowValueOut - 255 && value >= maxSlowValueOut - 355){
        analogWrite(led2, value - maxSlowValueOut + 355);
     }

      if (value <= maxSlowValueOut - 355 && value >= maxSlowValueOut - 455){
        analogWrite(led4, value - maxSlowValueOut + 455);
     }

      if (value <= maxSlowValueOut - 455 && value >= maxSlowValueOut - 555){
        analogWrite(led3, value - maxSlowValueOut + 555);
     }

      if (value <= maxSlowValueOut - 555 && value >= maxSlowValueOut - 655){
        analogWrite(led5, value - maxSlowValueOut + 655);
     }

      if (value <= maxSlowValueOut - 655 && value >= maxSlowValueOut - 755){
        analogWrite(led6, value - maxSlowValueOut + 755);
     }

     if (value <= maxSlowValueOut - 755 && value >= maxSlowValueOut - 855){
        analogWrite(led7, value - maxSlowValueOut + 855);
     }

     
      delay(velocita);
    }
  }
  
  if (randNumber==3){

    for (int value = maxSlowValueOut; value >= 0; value -= fadeSlowOut){
     
      if (value <= maxSlowValueOut && value >= maxSlowValueOut - 255){
        analogWrite(led4, value - maxSlowValueOut + 255);
     }

      if (value <= maxSlowValueOut - 255 && value >= maxSlowValueOut - 355){
        analogWrite(led3, value - maxSlowValueOut + 355);
     }

      if (value <= maxSlowValueOut - 355 && value >= maxSlowValueOut - 455){
        analogWrite(led7, value - maxSlowValueOut + 455);
     }

      if (value <= maxSlowValueOut - 455 && value >= maxSlowValueOut - 555){
        analogWrite(led2, value - maxSlowValueOut + 555);
     }

      if (value <= maxSlowValueOut - 555 && value >= maxSlowValueOut - 655){
        analogWrite(led6, value - maxSlowValueOut + 655);
     }

      if (value <= maxSlowValueOut - 655 && value >= maxSlowValueOut - 755){
        analogWrite(led1, value - maxSlowValueOut + 755);
     }

     if (value <= maxSlowValueOut - 755 && value >= maxSlowValueOut - 855){
        analogWrite(led5, value - maxSlowValueOut + 855);
     }

      delay(velocita);
    }
  }

  if (randNumber==4){

    for (int value = maxSlowValueOut; value >= 0; value -= fadeSlowOut){
     
      if (value <= maxSlowValueOut && value >= maxSlowValueOut - 255){
        analogWrite(led7, value - maxSlowValueOut + 255);
     }

      if (value <= maxSlowValueOut - 255 && value >= maxSlowValueOut - 355){
        analogWrite(led6, value - maxSlowValueOut + 355);
     }

      if (value <= maxSlowValueOut - 355 && value >= maxSlowValueOut - 455){
        analogWrite(led3, value - maxSlowValueOut + 455);
     }

      if (value <= maxSlowValueOut - 455 && value >= maxSlowValueOut - 555){
        analogWrite(led4, value - maxSlowValueOut + 555);
     }

      if (value <= maxSlowValueOut - 555 && value >= maxSlowValueOut - 655){
        analogWrite(led2, value - maxSlowValueOut + 655);
     }

      if (value <= maxSlowValueOut - 655 && value >= maxSlowValueOut - 755){
        analogWrite(led5, value - maxSlowValueOut + 755);
     }

     if (value <= maxSlowValueOut - 755 && value >= maxSlowValueOut - 855){
        analogWrite(led1, value - maxSlowValueOut + 855);
     }

      delay(velocita);
    }
  }

  if (randNumber==5){

    for (int value = maxSlowValueOut; value >= 0; value -= fadeSlowOut){
     
      if (value <= maxSlowValueOut && value >= maxSlowValueOut - 255){
        analogWrite(led3, value - maxSlowValueOut + 255);
     }

      if (value <= maxSlowValueOut - 255 && value >= maxSlowValueOut - 355){
        analogWrite(led2, value - maxSlowValueOut + 355);
     }

      if (value <= maxSlowValueOut - 355 && value >= maxSlowValueOut - 455){
        analogWrite(led7, value - maxSlowValueOut + 455);
     }

      if (value <= maxSlowValueOut - 455 && value >= maxSlowValueOut - 555){
        analogWrite(led4, value - maxSlowValueOut + 555);
     }

      if (value <= maxSlowValueOut - 555 && value >= maxSlowValueOut - 655){
        analogWrite(led1, value - maxSlowValueOut + 655);
     }

      if (value <= maxSlowValueOut - 655 && value >= maxSlowValueOut - 755){
        analogWrite(led6, value - maxSlowValueOut + 755);
     }

     if (value <= maxSlowValueOut - 755 && value >= maxSlowValueOut - 855){
        analogWrite(led5, value - maxSlowValueOut + 855);
     }

      delay(velocita);
    }
  }

  if (randNumber==6){

    for (int value = maxSlowValueOut; value >= 0; value -= fadeSlowOut){
     
      if (value <= maxSlowValueOut && value >= maxSlowValueOut - 255){
        analogWrite(led5, value - maxSlowValueOut + 255);
     }

      if (value <= maxSlowValueOut - 255 && value >= maxSlowValueOut - 355){
        analogWrite(led6, value - maxSlowValueOut + 355);
     }

      if (value <= maxSlowValueOut - 355 && value >= maxSlowValueOut - 455){
        analogWrite(led4, value - maxSlowValueOut + 455);
     }

      if (value <= maxSlowValueOut - 455 && value >= maxSlowValueOut - 555){
        analogWrite(led7, value - maxSlowValueOut + 555);
     }

      if (value <= maxSlowValueOut - 555 && value >= maxSlowValueOut - 655){
        analogWrite(led1, value - maxSlowValueOut + 655);
     }

      if (value <= maxSlowValueOut - 655 && value >= maxSlowValueOut - 755){
        analogWrite(led2, value - maxSlowValueOut + 755);
     }

     if (value <= maxSlowValueOut - 755 && value >= maxSlowValueOut - 855){
        analogWrite(led3, value - maxSlowValueOut + 855);
     }

      delay(velocita);
    }
  }

  if (randNumber==7){

    for (int value = maxSlowValueOut; value >= 0; value -= fadeSlowOut){
     
      if (value <= maxSlowValueOut && value >= maxSlowValueOut - 255){
        analogWrite(led4, value - maxSlowValueOut + 255);
     }

      if (value <= maxSlowValueOut - 255 && value >= maxSlowValueOut - 355){
        analogWrite(led5, value - maxSlowValueOut + 355);
     }

      if (value <= maxSlowValueOut - 355 && value >= maxSlowValueOut - 455){
        analogWrite(led1, value - maxSlowValueOut + 455);
     }

      if (value <= maxSlowValueOut - 455 && value >= maxSlowValueOut - 555){
        analogWrite(led6, value - maxSlowValueOut + 555);
     }

      if (value <= maxSlowValueOut - 555 && value >= maxSlowValueOut - 655){
        analogWrite(led2, value - maxSlowValueOut + 655);
     }

      if (value <= maxSlowValueOut - 655 && value >= maxSlowValueOut - 755){
        analogWrite(led7, value - maxSlowValueOut + 755);
     }

     if (value <= maxSlowValueOut - 755 && value >= maxSlowValueOut - 855){
        analogWrite(led3, value - maxSlowValueOut + 855);
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