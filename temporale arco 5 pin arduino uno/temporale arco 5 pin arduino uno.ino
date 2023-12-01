int led1=3;
int led2=5;
int led3=6;
int led4=9;
int led5=10;


int fadeSlowOut = 20; //fadeout fulmine lento diminuire per rallentare, alzare per velocizzare
int maxSlowValueOut = 1000; //gestione tempo fadeout fulmini lenti, mai scendere sotto i 700

int fadeFastOut = 60; //fadeout fulmine lento diminuire per rallentare, alzare per velocizzare
int maxFastValueOut = 700; //gestione tempo fadeout fulmini lenti, mai scendere sotto i 700

int fadeIdleIn = 5; //fadein idle
int fadeIdleOut = 3; //fadeout idle
int valueIdle = 100; //valore massimo in idle
int maxValueIdle = 1200; //gestione tempo fade idle, mai scendere sotto 150

int value=0;
int velocita = 60; // la velocita con cui cambia il fade + è alto piu glitcha
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
    
    for (value = maxSlowValueOut; value >= 0; value -= fadeSlowOut){
     
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

  if (randNumber==2){
    
    for (value = maxSlowValueOut; value >= 0; value -= fadeSlowOut){
     
      if (value <= maxSlowValueOut && value >= maxSlowValueOut - 255){
        analogWrite(led5, value - maxSlowValueOut + 255);
     }

      if (value <= maxSlowValueOut - 255 && value >= maxSlowValueOut - 355){
        analogWrite(led4, value - maxSlowValueOut + 355);
     }

      if (value <= maxSlowValueOut - 355 && value >= maxSlowValueOut - 455){
        analogWrite(led3, value - maxSlowValueOut + 455);
     }

      if (value <= maxSlowValueOut - 455 && value >= maxSlowValueOut - 555){
        analogWrite(led2, value - maxSlowValueOut + 555);
     }

      if (value <= maxSlowValueOut - 555 && value >= maxSlowValueOut - 655){
        analogWrite(led1, value - maxSlowValueOut + 655);

     }

     delay(velocita);    

   }
  }

  if (randNumber==3){
    
    for (value = maxSlowValueOut; value >= 0; value -= fadeSlowOut){
     
      if (value <= maxSlowValueOut && value >= maxSlowValueOut - 255){
        analogWrite(led1, value - maxSlowValueOut + 255);
        analogWrite(led5, value - maxSlowValueOut + 255);
     }

      if (value <= maxSlowValueOut - 255 && value >= maxSlowValueOut - 355){
        analogWrite(led2, value - maxSlowValueOut + 355);
        analogWrite(led4, value - maxSlowValueOut + 355);
     }

      if (value <= maxSlowValueOut - 355 && value >= maxSlowValueOut - 455){
        analogWrite(led3, value - maxSlowValueOut + 455);
     }

      if (value <= maxSlowValueOut - 455 && value >= maxSlowValueOut - 555){
        analogWrite(led4, value - maxSlowValueOut + 555);
        analogWrite(led2, value - maxSlowValueOut + 555);
     }

      if (value <= maxSlowValueOut - 555 && value >= maxSlowValueOut - 655){
        analogWrite(led5, value - maxSlowValueOut + 655);
        analogWrite(led1, value - maxSlowValueOut + 655);

     }

     delay(velocita);    

    }
  }

  if (randNumber==4){
    
    for (value = maxSlowValueOut; value >= 0; value -= fadeSlowOut){
     
      if (value <= maxSlowValueOut && value >= maxSlowValueOut - 255){
        analogWrite(led1, value - maxSlowValueOut + 255);
        analogWrite(led5, value - maxSlowValueOut + 255);
     }

      if (value <= maxSlowValueOut - 255 && value >= maxSlowValueOut - 355){
        analogWrite(led2, value - maxSlowValueOut + 355);
        analogWrite(led4, value - maxSlowValueOut + 355);
     }

      if (value <= maxSlowValueOut - 355 && value >= maxSlowValueOut - 455){
        analogWrite(led3, value - maxSlowValueOut + 455);
     }

     delay(velocita);    

    }
  }

  if (randNumber==5){
    
    for (value = maxSlowValueOut; value >= 0; value -= fadeSlowOut){
     
      if (value <= maxSlowValueOut && value >= maxSlowValueOut - 255){
        analogWrite(led3, value - maxSlowValueOut + 255);
     }

      if (value <= maxSlowValueOut - 255 && value >= maxSlowValueOut - 355){
        analogWrite(led2, value - maxSlowValueOut + 355);
        analogWrite(led4, value - maxSlowValueOut + 355);
     }

      if (value <= maxSlowValueOut - 355 && value >= maxSlowValueOut - 455){
        analogWrite(led1, value - maxSlowValueOut + 455);
        analogWrite(led5, value - maxSlowValueOut + 455);
     }

     delay(velocita);    

    }
  }

  if (randNumber==6){
    
    for (value = maxSlowValueOut; value >= 0; value -= fadeSlowOut){
     
      if (value <= maxSlowValueOut && value >= maxSlowValueOut - 255){
        analogWrite(led3, value - maxSlowValueOut + 255);
     }

      if (value <= maxSlowValueOut - 255 && value >= maxSlowValueOut - 355){
        analogWrite(led2, value - maxSlowValueOut + 355);
        analogWrite(led4, value - maxSlowValueOut + 355);
     }

      if (value <= maxSlowValueOut - 355 && value >= maxSlowValueOut - 455){
        analogWrite(led1, value - maxSlowValueOut + 455);
        analogWrite(led5, value - maxSlowValueOut + 455);
     }

      if (value <= maxSlowValueOut - 455 && value >= maxSlowValueOut - 555){
        analogWrite(led4, value - maxSlowValueOut + 555);
        analogWrite(led2, value - maxSlowValueOut + 555);
     }

      if (value <= maxSlowValueOut - 555 && value >= maxSlowValueOut - 655){
        analogWrite(led3, value - maxSlowValueOut + 655);

     }

     delay(velocita);    

    }
  }

  if (randNumber==7){
    
    for (value = maxSlowValueOut; value >= 0; value -= fadeSlowOut){
     
      if (value <= maxSlowValueOut && value >= maxSlowValueOut - 255){
        analogWrite(led2, value - maxSlowValueOut + 255);
        analogWrite(led4, value - maxSlowValueOut + 255);
     }

      if (value <= maxSlowValueOut - 255 && value >= maxSlowValueOut - 355){
        analogWrite(led1, value - maxSlowValueOut + 355);
        analogWrite(led5, value - maxSlowValueOut + 355);
     }

      if (value <= maxSlowValueOut - 355 && value >= maxSlowValueOut - 455){
        analogWrite(led3, value - maxSlowValueOut + 455);
     }

     delay(velocita);    

    }
  }

  if (randNumber==8){
    
    for (value = maxFastValueOut; value >= 0; value -= fadeFastOut){
     
      if (value <= maxFastValueOut && value >= maxFastValueOut - 255){
        analogWrite(led1, value - maxFastValueOut + 255);
     }

      if (value <= maxFastValueOut - 255 && value >= maxFastValueOut - 355){
        analogWrite(led2, value - maxFastValueOut + 355);
     }

      if (value <= maxFastValueOut - 355 && value >= maxFastValueOut - 455){
        analogWrite(led3, value - maxFastValueOut + 455);
     }

      if (value <= maxFastValueOut - 455 && value >= maxFastValueOut - 555){
        analogWrite(led4, value - maxFastValueOut + 555);
     }

      if (value <= maxFastValueOut - 555 && value >= maxFastValueOut - 655){
        analogWrite(led5, value - maxFastValueOut + 655);

     }

     delay(velocita);    

    }
  }

  if (randNumber==9){
    
    for (value = maxFastValueOut; value >= 0; value -= fadeFastOut){
     
      if (value <= maxFastValueOut && value >= maxFastValueOut - 255){
        analogWrite(led5, value - maxFastValueOut + 255);
     }

      if (value <= maxFastValueOut - 255 && value >= maxFastValueOut - 355){
        analogWrite(led4, value - maxFastValueOut + 355);
     }

      if (value <= maxFastValueOut - 355 && value >= maxFastValueOut - 455){
        analogWrite(led3, value - maxFastValueOut + 455);
     }

      if (value <= maxFastValueOut - 455 && value >= maxFastValueOut - 555){
        analogWrite(led2, value - maxFastValueOut + 555);
     }

      if (value <= maxFastValueOut - 555 && value >= maxFastValueOut - 655){
        analogWrite(led1, value - maxFastValueOut + 655);

     }

     delay(velocita);    

   }
  }

  if (randNumber==10){
    
    for (value = maxFastValueOut; value >= 0; value -= fadeFastOut){
     
      if (value <= maxFastValueOut && value >= maxFastValueOut - 255){
        analogWrite(led1, value - maxFastValueOut + 255);
        analogWrite(led5, value - maxFastValueOut + 255);
     }

      if (value <= maxFastValueOut - 255 && value >= maxFastValueOut - 355){
        analogWrite(led2, value - maxFastValueOut + 355);
        analogWrite(led4, value - maxFastValueOut + 355);
     }

      if (value <= maxFastValueOut - 355 && value >= maxFastValueOut - 455){
        analogWrite(led3, value - maxFastValueOut + 455);
     }

      if (value <= maxFastValueOut - 455 && value >= maxFastValueOut - 555){
        analogWrite(led4, value - maxFastValueOut + 555);
        analogWrite(led2, value - maxFastValueOut + 555);
     }

      if (value <= maxFastValueOut - 555 && value >= maxFastValueOut - 655){
        analogWrite(led5, value - maxFastValueOut + 655);
        analogWrite(led1, value - maxFastValueOut + 655);

     }

     delay(velocita);    

    }
  }

  if (randNumber==11){
    
    for (value = maxFastValueOut; value >= 0; value -= fadeFastOut){
     
      if (value <= maxFastValueOut && value >= maxFastValueOut - 255){
        analogWrite(led1, value - maxFastValueOut + 255);
        analogWrite(led5, value - maxFastValueOut + 255);
     }

      if (value <= maxFastValueOut - 255 && value >= maxFastValueOut - 355){
        analogWrite(led2, value - maxFastValueOut + 355);
        analogWrite(led4, value - maxFastValueOut + 355);
     }

      if (value <= maxFastValueOut - 355 && value >= maxFastValueOut - 455){
        analogWrite(led3, value - maxFastValueOut + 455);
     }

     delay(velocita);    

    }
  }

  if (randNumber==12){
    
    for (value = maxFastValueOut; value >= 0; value -= fadeFastOut){
     
      if (value <= maxFastValueOut && value >= maxFastValueOut - 255){
        analogWrite(led3, value - maxFastValueOut + 255);
     }

      if (value <= maxFastValueOut - 255 && value >= maxFastValueOut - 355){
        analogWrite(led2, value - maxFastValueOut + 355);
        analogWrite(led4, value - maxFastValueOut + 355);
     }

      if (value <= maxFastValueOut - 355 && value >= maxFastValueOut - 455){
        analogWrite(led1, value - maxFastValueOut + 455);
        analogWrite(led5, value - maxFastValueOut + 455);
     }

     delay(velocita);    

    }
  }

  if (randNumber==13){
    
    for (value = maxFastValueOut; value >= 0; value -= fadeFastOut){
     
      if (value <= maxFastValueOut && value >= maxFastValueOut - 255){
        analogWrite(led3, value - maxFastValueOut + 255);
     }

      if (value <= maxFastValueOut - 255 && value >= maxFastValueOut - 355){
        analogWrite(led2, value - maxFastValueOut + 355);
        analogWrite(led4, value - maxFastValueOut + 355);
     }

      if (value <= maxFastValueOut - 355 && value >= maxFastValueOut - 455){
        analogWrite(led1, value - maxFastValueOut + 455);
        analogWrite(led5, value - maxFastValueOut + 455);
     }

      if (value <= maxFastValueOut - 455 && value >= maxFastValueOut - 555){
        analogWrite(led4, value - maxFastValueOut + 555);
        analogWrite(led2, value - maxFastValueOut + 555);
     }

      if (value <= maxFastValueOut - 555 && value >= maxFastValueOut - 655){
        analogWrite(led3, value - maxFastValueOut + 655);

     }

     delay(velocita);    

    }
  }

  if (randNumber==14){
    
    for (value = maxFastValueOut; value >= 0; value -= fadeFastOut){
     
      if (value <= maxFastValueOut && value >= maxFastValueOut - 255){
        analogWrite(led2, value - maxFastValueOut + 255);
        analogWrite(led4, value - maxFastValueOut + 255);
     }

      if (value <= maxFastValueOut - 255 && value >= maxFastValueOut - 355){
        analogWrite(led1, value - maxFastValueOut + 355);
        analogWrite(led5, value - maxFastValueOut + 355);
     }

      if (value <= maxFastValueOut - 355 && value >= maxFastValueOut - 455){
        analogWrite(led3, value - maxFastValueOut + 455);
     }

     delay(velocita);    

    }
  }
}