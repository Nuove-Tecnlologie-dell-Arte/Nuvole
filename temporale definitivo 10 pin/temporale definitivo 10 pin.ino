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

int fadeSlowOut = 20; //fadeout fulmine lento diminuire per rallentare, alzare per velocizzare
int maxSlowValueOut = 1000; //gestione tempo fadeout fulmini lenti, mai scendere sotto i 700

int fadeFastOut = 100; //fadeout fulmine veloce diminuire per rallentare, alzare per velocizzare
int maxFastValueOut = 1000; //gestione tempo fadeout fulmini veloci, mai scendere sotto i 700

int maxSlowValueOutLong = 1500; //gestione tempo fadeout fulmini lenti paralleli doppi, mai scendere sotto i 500
int slowInterval = 200; //intervallo animazioni fulmini paralleli
int maxSlowValueOutShort = 500; //gestione tempo fadeout fulmini lenti perpendicolari, mai scendere sotto i 500

int maxFastValueOutLong = 1500; //gestione tempo fadeout fulmini veloci paralleli doppi, mai scendere sotto i 500
int maxFastValueOutShort = 500; //gestione tempo fadeout fulmini veloci perpendicolari, mai scendere sotto i 500

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

  randNumber = random(1, 116);
  Serial.println(randNumber);

  if (randNumber==1){
    
    for (value = maxSlowValueOutLong; value >= 0; value -= fadeSlowOut){
     
      if (value <= maxSlowValueOutLong && value >= maxSlowValueOutLong - 255){
        analogWrite(led1, value - maxSlowValueOutLong + 255);
     }

      if (value <= maxSlowValueOutLong - 255 && value >= maxSlowValueOutLong - 355){
        analogWrite(led2, value - maxSlowValueOutLong + 355);
     }

      if (value <= maxSlowValueOutLong - 355 && value >= maxSlowValueOutLong - 455){
        analogWrite(led3, value - maxSlowValueOutLong + 455);
     }

      if (value <= maxSlowValueOutLong - 455 && value >= maxSlowValueOutLong - 555){
        analogWrite(led4, value - maxSlowValueOutLong + 555);
     }

      if (value <= maxSlowValueOutLong - 555 && value >= maxSlowValueOutLong - 655){
        analogWrite(led5, value - maxSlowValueOutLong + 655);

     }

     delay(velocita);    

    }

    delay(slowInterval);

    for (value; value >= 0; value -= fadeSlowOut){

      if (value <= maxSlowValueOutLong - 655 && value >= maxSlowValueOutLong - 755){
        analogWrite(led6, value - maxSlowValueOutLong + 755);
     }

      if (value <= maxSlowValueOutLong - 755 && value >= maxSlowValueOutLong - 855){
        analogWrite(led7, value - maxSlowValueOutLong + 855);
     }

      if (value <= maxSlowValueOutLong - 855 && value >= maxSlowValueOutLong - 955){
        analogWrite(led8, value - maxSlowValueOutLong + 955);
     }

      if (value <= maxSlowValueOutLong - 955 && value >= maxSlowValueOutLong - 1055){
        analogWrite(led9, value - maxSlowValueOutLong + 1055);
     }

      if (value <= maxSlowValueOutLong - 1055 && value >= maxSlowValueOutLong - 1155){
        analogWrite(led10, value - maxSlowValueOutLong +1155);
     }

      delay(velocita);
    }
  }

  if (randNumber==2){
    
    for (value = maxSlowValueOutLong; value >= 0; value -= fadeSlowOut){
     
      if (value <= maxSlowValueOutLong && value >= maxSlowValueOutLong - 255){
        analogWrite(led6, value - maxSlowValueOutLong + 255);
     }

      if (value <= maxSlowValueOutLong - 255 && value >= maxSlowValueOutLong - 355){
        analogWrite(led7, value - maxSlowValueOutLong + 355);
     }

      if (value <= maxSlowValueOutLong - 355 && value >= maxSlowValueOutLong - 455){
        analogWrite(led8, value - maxSlowValueOutLong + 455);
     }

      if (value <= maxSlowValueOutLong - 455 && value >= maxSlowValueOutLong - 555){
        analogWrite(led9, value - maxSlowValueOutLong + 555);
     }

      if (value <= maxSlowValueOutLong - 555 && value >= maxSlowValueOutLong - 655){
        analogWrite(led10, value - maxSlowValueOutLong + 655);

     }

     delay(velocita);    
       
    }

    delay(slowInterval);

    for (value; value >= 0; value -= fadeSlowOut){

      if (value <= maxSlowValueOutLong - 655 && value >= maxSlowValueOutLong - 755){
        analogWrite(led1, value - maxSlowValueOutLong + 755);
     }

      if (value <= maxSlowValueOutLong - 755 && value >= maxSlowValueOutLong - 855){
        analogWrite(led2, value - maxSlowValueOutLong + 855);
     }

      if (value <= maxSlowValueOutLong - 855 && value >= maxSlowValueOutLong - 955){
        analogWrite(led3, value - maxSlowValueOutLong + 955);
     }

      if (value <= maxSlowValueOutLong - 955 && value >= maxSlowValueOutLong - 1055){
        analogWrite(led4, value - maxSlowValueOutLong + 1055);
     }

      if (value <= maxSlowValueOutLong - 1055 && value >= maxSlowValueOutLong - 1155){
        analogWrite(led5, value - maxSlowValueOutLong +1155);
     }

      delay(velocita);
    }
  }

  if (randNumber==3){
    
    for (value = maxSlowValueOutLong; value >= 0; value -= fadeSlowOut){
     
      if (value <= maxSlowValueOutLong && value >= maxSlowValueOutLong - 255){
        analogWrite(led5, value - maxSlowValueOutLong + 255);
     }

      if (value <= maxSlowValueOutLong - 255 && value >= maxSlowValueOutLong - 355){
        analogWrite(led4, value - maxSlowValueOutLong + 355);
     }

      if (value <= maxSlowValueOutLong - 355 && value >= maxSlowValueOutLong - 455){
        analogWrite(led3, value - maxSlowValueOutLong + 455);
     }

      if (value <= maxSlowValueOutLong - 455 && value >= maxSlowValueOutLong - 555){
        analogWrite(led2, value - maxSlowValueOutLong + 555);
     }

      if (value <= maxSlowValueOutLong - 555 && value >= maxSlowValueOutLong - 655){
        analogWrite(led1, value - maxSlowValueOutLong + 655);

     }

     delay(velocita);    
       
    }

    delay(slowInterval);

    for (value; value >= 0; value -= fadeSlowOut){

      if (value <= maxSlowValueOutLong - 655 && value >= maxSlowValueOutLong - 755){
        analogWrite(led10, value - maxSlowValueOutLong + 755);
     }

      if (value <= maxSlowValueOutLong - 755 && value >= maxSlowValueOutLong - 855){
        analogWrite(led9, value - maxSlowValueOutLong + 855);
     }

      if (value <= maxSlowValueOutLong - 855 && value >= maxSlowValueOutLong - 955){
        analogWrite(led8, value - maxSlowValueOutLong + 955);
     }

      if (value <= maxSlowValueOutLong - 955 && value >= maxSlowValueOutLong - 1055){
        analogWrite(led7, value - maxSlowValueOutLong + 1055);
     }

      if (value <= maxSlowValueOutLong - 1055 && value >= maxSlowValueOutLong - 1155){
        analogWrite(led6, value - maxSlowValueOutLong +1155);
     }

      delay(velocita);
    }
  }

  if (randNumber==4){
    
    for (value = maxSlowValueOutLong; value >= 0; value -= fadeSlowOut){
     
      if (value <= maxSlowValueOutLong && value >= maxSlowValueOutLong - 255){
        analogWrite(led5, value - maxSlowValueOutLong + 255);
     }

      if (value <= maxSlowValueOutLong - 255 && value >= maxSlowValueOutLong - 355){
        analogWrite(led4, value - maxSlowValueOutLong + 355);
     }

      if (value <= maxSlowValueOutLong - 355 && value >= maxSlowValueOutLong - 455){
        analogWrite(led3, value - maxSlowValueOut + 455);
     }

      if (value <= maxSlowValueOutLong - 455 && value >= maxSlowValueOutLong - 555){
        analogWrite(led2, value - maxSlowValueOutLong + 555);
     }

      if (value <= maxSlowValueOutLong - 555 && value >= maxSlowValueOutLong - 655){
        analogWrite(led1, value - maxSlowValueOutLong + 655);

     }

     delay(velocita);    
       
    }

    delay(slowInterval);

    for (value; value >= 0; value -= fadeSlowOut){

      if (value <= maxSlowValueOutLong - 655 && value >= maxSlowValueOutLong - 755){
        analogWrite(led10, value - maxSlowValueOutLong + 755);
     }

      if (value <= maxSlowValueOutLong - 755 && value >= maxSlowValueOutLong - 855){
        analogWrite(led9, value - maxSlowValueOutLong + 855);
     }

      if (value <= maxSlowValueOutLong - 855 && value >= maxSlowValueOutLong - 955){
        analogWrite(led8, value - maxSlowValueOutLong + 955);
     }

      if (value <= maxSlowValueOutLong - 955 && value >= maxSlowValueOutLong - 1055){
        analogWrite(led7, value - maxSlowValueOutLong + 1055);
     }

      if (value <= maxSlowValueOutLong - 1055 && value >= maxSlowValueOutLong - 1155){
        analogWrite(led6, value - maxSlowValueOutLong +1155);
     }

      delay(velocita);
    }
  }

  if (randNumber==5){
    
    for (value = maxSlowValueOutShort; value >= 0; value -= fadeSlowOut){
     
      if (value <= maxSlowValueOutShort && value >= maxSlowValueOut - 255){
        analogWrite(led1, value - maxSlowValueOutShort + 255);
     }

      if (value <= maxSlowValueOutShort - 255 && value >= maxSlowValueOutShort - 355){
        analogWrite(led6, value - maxSlowValueOutShort + 355);
     }

     delay(velocita);    

    }
  }

  if (randNumber==6){
    
    for (value = maxSlowValueOutShort; value >= 0; value -= fadeSlowOut){
     
      if (value <= maxSlowValueOutShort && value >= maxSlowValueOut - 255){
        analogWrite(led6, value - maxSlowValueOutShort + 255);
     }

      if (value <= maxSlowValueOutShort - 255 && value >= maxSlowValueOutShort - 355){
        analogWrite(led1, value - maxSlowValueOutShort + 355);
     }

     delay(velocita);    

    }
  }

  if (randNumber==7){
    
    for (value = maxSlowValueOutShort; value >= 0; value -= fadeSlowOut){
     
      if (value <= maxSlowValueOutShort && value >= maxSlowValueOut - 255){
        analogWrite(led2, value - maxSlowValueOutShort + 255);
     }

      if (value <= maxSlowValueOutShort - 255 && value >= maxSlowValueOutShort - 355){
        analogWrite(led7, value - maxSlowValueOutShort + 355);
     }

     delay(velocita);    

    }
  }

  if (randNumber==8){
    
    for (value = maxSlowValueOutShort; value >= 0; value -= fadeSlowOut){
     
      if (value <= maxSlowValueOutShort && value >= maxSlowValueOut - 255){
        analogWrite(led7, value - maxSlowValueOutShort + 255);
     }

      if (value <= maxSlowValueOutShort - 255 && value >= maxSlowValueOutShort - 355){
        analogWrite(led2, value - maxSlowValueOutShort + 355);
     }

     delay(velocita);    

    }
  }

  if (randNumber==9){
    
    for (value = maxSlowValueOutShort; value >= 0; value -= fadeSlowOut){
     
      if (value <= maxSlowValueOutShort && value >= maxSlowValueOut - 255){
        analogWrite(led3, value - maxSlowValueOutShort + 255);
     }

      if (value <= maxSlowValueOutShort - 255 && value >= maxSlowValueOutShort - 355){
        analogWrite(led8, value - maxSlowValueOutShort + 355);
     }

     delay(velocita);    

    }
  }

  if (randNumber==10){
    
    for (value = maxSlowValueOutShort; value >= 0; value -= fadeSlowOut){
     
      if (value <= maxSlowValueOutShort && value >= maxSlowValueOut - 255){
        analogWrite(led8, value - maxSlowValueOutShort + 255);
     }

      if (value <= maxSlowValueOutShort - 255 && value >= maxSlowValueOutShort - 355){
        analogWrite(led3, value - maxSlowValueOutShort + 355);
     }

     delay(velocita);    

    }
  }

  if (randNumber==11){
    
    for (value = maxSlowValueOutShort; value >= 0; value -= fadeSlowOut){
     
      if (value <= maxSlowValueOutShort && value >= maxSlowValueOut - 255){
        analogWrite(led4, value - maxSlowValueOutShort + 255);
     }

      if (value <= maxSlowValueOutShort - 255 && value >= maxSlowValueOutShort - 355){
        analogWrite(led9, value - maxSlowValueOutShort + 355);
     }

     delay(velocita);    

    }
  }

  if (randNumber==12){
    
    for (value = maxSlowValueOutShort; value >= 0; value -= fadeSlowOut){
     
      if (value <= maxSlowValueOutShort && value >= maxSlowValueOut - 255){
        analogWrite(led9, value - maxSlowValueOutShort + 255);
     }

      if (value <= maxSlowValueOutShort - 255 && value >= maxSlowValueOutShort - 355){
        analogWrite(led4, value - maxSlowValueOutShort + 355);
     }

     delay(velocita);    

    }
  }

  if (randNumber==13){
    
    for (value = maxSlowValueOutShort; value >= 0; value -= fadeSlowOut){
     
      if (value <= maxSlowValueOutShort && value >= maxSlowValueOut - 255){
        analogWrite(led5, value - maxSlowValueOutShort + 255);
     }

      if (value <= maxSlowValueOutShort - 255 && value >= maxSlowValueOutShort - 355){
        analogWrite(led10, value - maxSlowValueOutShort + 355);
     }

     delay(velocita);    

    }
   
  }

  if (randNumber==14){
    
    for (value = maxSlowValueOutShort; value >= 0; value -= fadeSlowOut){
     
      if (value <= maxSlowValueOutShort && value >= maxSlowValueOut - 255){
        analogWrite(led10, value - maxSlowValueOutShort + 255);
     }

      if (value <= maxSlowValueOutShort - 255 && value >= maxSlowValueOutShort - 355){
        analogWrite(led5, value - maxSlowValueOutShort + 355);
     }

     delay(velocita);    

    }
   
  }

  if (randNumber==15){
    
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

  if (randNumber==16){
    
    for (value = maxSlowValueOut; value >= 0; value -= fadeSlowOut){
     
      if (value <= maxSlowValueOut && value >= maxSlowValueOut - 255){
        analogWrite(led6, value - maxSlowValueOut + 255);
     }

      if (value <= maxSlowValueOut - 255 && value >= maxSlowValueOut - 355){
        analogWrite(led7, value - maxSlowValueOut + 355);
     }

      if (value <= maxSlowValueOut - 355 && value >= maxSlowValueOut - 455){
        analogWrite(led8, value - maxSlowValueOut + 455);
     }

      if (value <= maxSlowValueOut - 455 && value >= maxSlowValueOut - 555){
        analogWrite(led9, value - maxSlowValueOut + 555);
     }

      if (value <= maxSlowValueOut - 555 && value >= maxSlowValueOut - 655){
        analogWrite(led10, value - maxSlowValueOut + 655);

     }

     delay(velocita);    

    }
  }

  if (randNumber==17){
    
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

  if (randNumber==18){
    
    for (value = maxSlowValueOut; value >= 0; value -= fadeSlowOut){
     
      if (value <= maxSlowValueOut && value >= maxSlowValueOut - 255){
        analogWrite(led10, value - maxSlowValueOut + 255);
     }

      if (value <= maxSlowValueOut - 255 && value >= maxSlowValueOut - 355){
        analogWrite(led9, value - maxSlowValueOut + 355);
     }

      if (value <= maxSlowValueOut - 355 && value >= maxSlowValueOut - 455){
        analogWrite(led8, value - maxSlowValueOut + 455);
     }

      if (value <= maxSlowValueOut - 455 && value >= maxSlowValueOut - 555){
        analogWrite(led7, value - maxSlowValueOut + 555);
     }

      if (value <= maxSlowValueOut - 555 && value >= maxSlowValueOut - 655){
        analogWrite(led6, value - maxSlowValueOut + 655);

     }

     delay(velocita);    

    }
  }

  if (randNumber==19){
    
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
        analogWrite(led10, value - maxSlowValueOut + 655);

     }

     delay(velocita);    

   }
  }

  if (randNumber==20){
    
    for (value = maxSlowValueOut; value >= 0; value -= fadeSlowOut){
     
      if (value <= maxSlowValueOut && value >= maxSlowValueOut - 255){
        analogWrite(led6, value - maxSlowValueOut + 255);
     }

      if (value <= maxSlowValueOut - 255 && value >= maxSlowValueOut - 355){
        analogWrite(led7, value - maxSlowValueOut + 355);
     }

      if (value <= maxSlowValueOut - 355 && value >= maxSlowValueOut - 455){
        analogWrite(led8, value - maxSlowValueOut + 455);
     }

      if (value <= maxSlowValueOut - 455 && value >= maxSlowValueOut - 555){
        analogWrite(led9, value - maxSlowValueOut + 555);
     }

      if (value <= maxSlowValueOut - 555 && value >= maxSlowValueOut - 655){
        analogWrite(led5, value - maxSlowValueOut + 655);

     }

     delay(velocita);    
    }
  }

  if (randNumber==21){
    
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
        analogWrite(led6, value - maxSlowValueOut + 655);

     }

     delay(velocita);    
    }
  }

  if (randNumber==22){
    
    for (value = maxSlowValueOut; value >= 0; value -= fadeSlowOut){
     
      if (value <= maxSlowValueOut && value >= maxSlowValueOut - 255){
        analogWrite(led10, value - maxSlowValueOut + 255);
     }

      if (value <= maxSlowValueOut - 255 && value >= maxSlowValueOut - 355){
        analogWrite(led9, value - maxSlowValueOut + 355);
     }

      if (value <= maxSlowValueOut - 355 && value >= maxSlowValueOut - 455){
        analogWrite(led8, value - maxSlowValueOut + 455);
     }

      if (value <= maxSlowValueOut - 455 && value >= maxSlowValueOut - 555){
        analogWrite(led7, value - maxSlowValueOut + 555);
     }

      if (value <= maxSlowValueOut - 555 && value >= maxSlowValueOut - 655){
        analogWrite(led1, value - maxSlowValueOut + 655);

     }

     delay(velocita);    
    }
  }

  if (randNumber==23){
    
    for (value = maxSlowValueOut; value >= 0; value -= fadeSlowOut){
     
      if (value <= maxSlowValueOut && value >= maxSlowValueOut - 255){
        analogWrite(led10, value - maxSlowValueOut + 255);
     }

      if (value <= maxSlowValueOut - 255 && value >= maxSlowValueOut - 355){
        analogWrite(led9, value - maxSlowValueOut + 355);
     }

      if (value <= maxSlowValueOut - 355 && value >= maxSlowValueOut - 455){
        analogWrite(led8, value - maxSlowValueOut + 455);
     }

      if (value <= maxSlowValueOut - 455 && value >= maxSlowValueOut - 555){
        analogWrite(led7, value - maxSlowValueOut + 555);
     }

      if (value <= maxSlowValueOut - 555 && value >= maxSlowValueOut - 655){
        analogWrite(led1, value - maxSlowValueOut + 655);

     }

     delay(velocita);    
    }
  }

  if (randNumber==24){
    
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
        analogWrite(led9, value - maxSlowValueOut + 555);
     }

      if (value <= maxSlowValueOut - 555 && value >= maxSlowValueOut - 655){
        analogWrite(led5, value - maxSlowValueOut + 655);

     }

     delay(velocita);    
    }
  }

  if (randNumber==25){
    
    for (value = maxSlowValueOut; value >= 0; value -= fadeSlowOut){
     
      if (value <= maxSlowValueOut && value >= maxSlowValueOut - 255){
        analogWrite(led6, value - maxSlowValueOut + 255);
     }

      if (value <= maxSlowValueOut - 255 && value >= maxSlowValueOut - 355){
        analogWrite(led7, value - maxSlowValueOut + 355);
     }

      if (value <= maxSlowValueOut - 355 && value >= maxSlowValueOut - 455){
        analogWrite(led8, value - maxSlowValueOut + 455);
     }

      if (value <= maxSlowValueOut - 455 && value >= maxSlowValueOut - 555){
        analogWrite(led4, value - maxSlowValueOut + 555);
     }

      if (value <= maxSlowValueOut - 555 && value >= maxSlowValueOut - 655){
        analogWrite(led10, value - maxSlowValueOut + 655);

     }

     delay(velocita);    
    }
  }

  if (randNumber==26){
    
    for (value = maxSlowValueOut; value >= 0; value -= fadeSlowOut){
     
      if (value <= maxSlowValueOut && value >= maxSlowValueOut - 255){
        analogWrite(led10, value - maxSlowValueOut + 255);
     }

      if (value <= maxSlowValueOut - 255 && value >= maxSlowValueOut - 355){
        analogWrite(led9, value - maxSlowValueOut + 355);
     }

      if (value <= maxSlowValueOut - 355 && value >= maxSlowValueOut - 455){
        analogWrite(led8, value - maxSlowValueOut + 455);
     }

      if (value <= maxSlowValueOut - 455 && value >= maxSlowValueOut - 555){
        analogWrite(led2, value - maxSlowValueOut + 555);
     }

      if (value <= maxSlowValueOut - 555 && value >= maxSlowValueOut - 655){
        analogWrite(led6, value - maxSlowValueOut + 655);

     }

     delay(velocita);    
    }
  }

  if (randNumber==27){
    
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
        analogWrite(led7, value - maxSlowValueOut + 555);
     }

      if (value <= maxSlowValueOut - 555 && value >= maxSlowValueOut - 655){
        analogWrite(led1, value - maxSlowValueOut + 655);

     }

     delay(velocita);    
    }
  }

  if (randNumber==28){
    
    for (value = maxSlowValueOut; value >= 0; value -= fadeSlowOut){
     
      if (value <= maxSlowValueOut && value >= maxSlowValueOut - 255){
        analogWrite(led1, value - maxSlowValueOut + 255);
     }

      if (value <= maxSlowValueOut - 255 && value >= maxSlowValueOut - 355){
        analogWrite(led2, value - maxSlowValueOut + 355);
     }

      if (value <= maxSlowValueOut - 355 && value >= maxSlowValueOut - 455){
        analogWrite(led8, value - maxSlowValueOut + 455);
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

  if (randNumber==29){
    
    for (value = maxSlowValueOut; value >= 0; value -= fadeSlowOut){
     
      if (value <= maxSlowValueOut && value >= maxSlowValueOut - 255){
        analogWrite(led6, value - maxSlowValueOut + 255);
     }

      if (value <= maxSlowValueOut - 255 && value >= maxSlowValueOut - 355){
        analogWrite(led7, value - maxSlowValueOut + 355);
     }

      if (value <= maxSlowValueOut - 355 && value >= maxSlowValueOut - 455){
        analogWrite(led3, value - maxSlowValueOut + 455);
     }

      if (value <= maxSlowValueOut - 455 && value >= maxSlowValueOut - 555){
        analogWrite(led9, value - maxSlowValueOut + 555);
     }

      if (value <= maxSlowValueOut - 555 && value >= maxSlowValueOut - 655){
        analogWrite(led10, value - maxSlowValueOut + 655);

     }

     delay(velocita);    
    }
  }

  if (randNumber==30){
    
    for (value = maxSlowValueOut; value >= 0; value -= fadeSlowOut){
     
      if (value <= maxSlowValueOut && value >= maxSlowValueOut - 255){
        analogWrite(led1, value - maxSlowValueOut + 255);
     }

      if (value <= maxSlowValueOut - 255 && value >= maxSlowValueOut - 355){
        analogWrite(led7, value - maxSlowValueOut + 355);
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

  if (randNumber==31){
    
    for (value = maxSlowValueOut; value >= 0; value -= fadeSlowOut){
     
      if (value <= maxSlowValueOut && value >= maxSlowValueOut - 255){
        analogWrite(led6, value - maxSlowValueOut + 255);
     }

      if (value <= maxSlowValueOut - 255 && value >= maxSlowValueOut - 355){
        analogWrite(led2, value - maxSlowValueOut + 355);
     }

      if (value <= maxSlowValueOut - 355 && value >= maxSlowValueOut - 455){
        analogWrite(led8, value - maxSlowValueOut + 455);
     }

      if (value <= maxSlowValueOut - 455 && value >= maxSlowValueOut - 555){
        analogWrite(led9, value - maxSlowValueOut + 555);
     }

      if (value <= maxSlowValueOut - 555 && value >= maxSlowValueOut - 655){
        analogWrite(led10, value - maxSlowValueOut + 655);

     }

     delay(velocita);    
    }
  }

  if (randNumber==32){
    
    for (value = maxSlowValueOut; value >= 0; value -= fadeSlowOut){
     
      if (value <= maxSlowValueOut && value >= maxSlowValueOut - 255){
        analogWrite(led10, value - maxSlowValueOut + 255);
     }

      if (value <= maxSlowValueOut - 255 && value >= maxSlowValueOut - 355){
        analogWrite(led4, value - maxSlowValueOut + 355);
     }

      if (value <= maxSlowValueOut - 355 && value >= maxSlowValueOut - 455){
        analogWrite(led8, value - maxSlowValueOut + 455);
     }

      if (value <= maxSlowValueOut - 455 && value >= maxSlowValueOut - 555){
        analogWrite(led7, value - maxSlowValueOut + 555);
     }

      if (value <= maxSlowValueOut - 555 && value >= maxSlowValueOut - 655){
        analogWrite(led6, value - maxSlowValueOut + 655);

     }

     delay(velocita);    
    }
  }

  if (randNumber==33){
    
    for (value = maxSlowValueOut; value >= 0; value -= fadeSlowOut){
     
      if (value <= maxSlowValueOut && value >= maxSlowValueOut - 255){
        analogWrite(led10, value - maxSlowValueOut + 255);
     }

      if (value <= maxSlowValueOut - 255 && value >= maxSlowValueOut - 355){
        analogWrite(led4, value - maxSlowValueOut + 355);
     }

      if (value <= maxSlowValueOut - 355 && value >= maxSlowValueOut - 455){
        analogWrite(led8, value - maxSlowValueOut + 455);
     }

      if (value <= maxSlowValueOut - 455 && value >= maxSlowValueOut - 555){
        analogWrite(led7, value - maxSlowValueOut + 555);
     }

      if (value <= maxSlowValueOut - 555 && value >= maxSlowValueOut - 655){
        analogWrite(led6, value - maxSlowValueOut + 655);

     }

     delay(velocita);    
    }
  }

  if (randNumber==34){
    
    for (value = maxSlowValueOut; value >= 0; value -= fadeSlowOut){
     
      if (value <= maxSlowValueOut && value >= maxSlowValueOut - 255){
        analogWrite(led5, value - maxSlowValueOut + 255);
     }

      if (value <= maxSlowValueOut - 255 && value >= maxSlowValueOut - 355){
        analogWrite(led9, value - maxSlowValueOut + 355);
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

  if (randNumber==35){
    
    for (value = maxSlowValueOut; value >= 0; value -= fadeSlowOut){
     
      if (value <= maxSlowValueOut && value >= maxSlowValueOut - 255){
        analogWrite(led10, value - maxSlowValueOut + 255);
     }

      if (value <= maxSlowValueOut - 255 && value >= maxSlowValueOut - 355){
        analogWrite(led9, value - maxSlowValueOut + 355);
     }

      if (value <= maxSlowValueOut - 355 && value >= maxSlowValueOut - 455){
        analogWrite(led3, value - maxSlowValueOut + 455);
     }

      if (value <= maxSlowValueOut - 455 && value >= maxSlowValueOut - 555){
        analogWrite(led7, value - maxSlowValueOut + 555);
     }

      if (value <= maxSlowValueOut - 555 && value >= maxSlowValueOut - 655){
        analogWrite(led6, value - maxSlowValueOut + 655);

     }

     delay(velocita);    
    }
  }

  if (randNumber==36){
    
    for (value = maxSlowValueOut; value >= 0; value -= fadeSlowOut){
     
      if (value <= maxSlowValueOut && value >= maxSlowValueOut - 255){
        analogWrite(led5, value - maxSlowValueOut + 255);
     }

      if (value <= maxSlowValueOut - 255 && value >= maxSlowValueOut - 355){
        analogWrite(led4, value - maxSlowValueOut + 355);
     }

      if (value <= maxSlowValueOut - 355 && value >= maxSlowValueOut - 455){
        analogWrite(led8, value - maxSlowValueOut + 455);
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

  if (randNumber==37){
    
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
        analogWrite(led9, value - maxSlowValueOut + 555);
     }

      if (value <= maxSlowValueOut - 555 && value >= maxSlowValueOut - 655){
        analogWrite(led10, value - maxSlowValueOut + 655);

     }

     delay(velocita);    
    }
  }

  if (randNumber==38){
    
    for (value = maxSlowValueOut; value >= 0; value -= fadeSlowOut){
     
      if (value <= maxSlowValueOut && value >= maxSlowValueOut - 255){
        analogWrite(led5, value - maxSlowValueOut + 255);
     }

      if (value <= maxSlowValueOut - 255 && value >= maxSlowValueOut - 355){
        analogWrite(led4, value - maxSlowValueOut + 355);
     }

      if (value <= maxSlowValueOut - 355 && value >= maxSlowValueOut - 455){
        analogWrite(led8, value - maxSlowValueOut + 455);
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

  if (randNumber==39){
    
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
        analogWrite(led9, value - maxSlowValueOut + 555);
     }

      if (value <= maxSlowValueOut - 555 && value >= maxSlowValueOut - 655){
        analogWrite(led10, value - maxSlowValueOut + 655);

     }

     delay(velocita);    
    }
  }

  if (randNumber==40){
    
    for (value = maxSlowValueOut; value >= 0; value -= fadeSlowOut){
     
      if (value <= maxSlowValueOut && value >= maxSlowValueOut - 255){
        analogWrite(led6, value - maxSlowValueOut + 255);
     }

      if (value <= maxSlowValueOut - 255 && value >= maxSlowValueOut - 355){
        analogWrite(led7, value - maxSlowValueOut + 355);
     }

      if (value <= maxSlowValueOut - 355 && value >= maxSlowValueOut - 455){
        analogWrite(led8, value - maxSlowValueOut + 455);
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

  if (randNumber==41){
    
    for (value = maxSlowValueOut; value >= 0; value -= fadeSlowOut){
     
      if (value <= maxSlowValueOut && value >= maxSlowValueOut - 255){
        analogWrite(led1, value - maxSlowValueOut + 255);
     }

      if (value <= maxSlowValueOut - 255 && value >= maxSlowValueOut - 355){
        analogWrite(led2, value - maxSlowValueOut + 355);
     }

      if (value <= maxSlowValueOut - 355 && value >= maxSlowValueOut - 455){
        analogWrite(led8, value - maxSlowValueOut + 455);
     }

      if (value <= maxSlowValueOut - 455 && value >= maxSlowValueOut - 555){
        analogWrite(led9, value - maxSlowValueOut + 555);
     }

      if (value <= maxSlowValueOut - 555 && value >= maxSlowValueOut - 655){
        analogWrite(led5, value - maxSlowValueOut + 655);

     }

     delay(velocita);    
    }
  }

  if (randNumber==42){
    
    for (value = maxSlowValueOut; value >= 0; value -= fadeSlowOut){
     
      if (value <= maxSlowValueOut && value >= maxSlowValueOut - 255){
        analogWrite(led6, value - maxSlowValueOut + 255);
     }

      if (value <= maxSlowValueOut - 255 && value >= maxSlowValueOut - 355){
        analogWrite(led7, value - maxSlowValueOut + 355);
     }

      if (value <= maxSlowValueOut - 355 && value >= maxSlowValueOut - 455){
        analogWrite(led3, value - maxSlowValueOut + 455);
     }

      if (value <= maxSlowValueOut - 455 && value >= maxSlowValueOut - 555){
        analogWrite(led4, value - maxSlowValueOut + 555);
     }

      if (value <= maxSlowValueOut - 555 && value >= maxSlowValueOut - 655){
        analogWrite(led10, value - maxSlowValueOut + 655);

     }

     delay(velocita);    
    }
  }

  if (randNumber==43){
    
    for (value = maxSlowValueOut; value >= 0; value -= fadeSlowOut){
     
      if (value <= maxSlowValueOut && value >= maxSlowValueOut - 255){
        analogWrite(led1, value - maxSlowValueOut + 255);
     }

      if (value <= maxSlowValueOut - 255 && value >= maxSlowValueOut - 355){
        analogWrite(led7, value - maxSlowValueOut + 355);
     }

      if (value <= maxSlowValueOut - 355 && value >= maxSlowValueOut - 455){
        analogWrite(led8, value - maxSlowValueOut + 455);
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

  if (randNumber==44){
    
    for (value = maxSlowValueOut; value >= 0; value -= fadeSlowOut){
     
      if (value <= maxSlowValueOut && value >= maxSlowValueOut - 255){
        analogWrite(led6, value - maxSlowValueOut + 255);
     }

      if (value <= maxSlowValueOut - 255 && value >= maxSlowValueOut - 355){
        analogWrite(led2, value - maxSlowValueOut + 355);
     }

      if (value <= maxSlowValueOut - 355 && value >= maxSlowValueOut - 455){
        analogWrite(led3, value - maxSlowValueOut + 455);
     }

      if (value <= maxSlowValueOut - 455 && value >= maxSlowValueOut - 555){
        analogWrite(led9, value - maxSlowValueOut + 555);
     }

      if (value <= maxSlowValueOut - 555 && value >= maxSlowValueOut - 655){
        analogWrite(led10, value - maxSlowValueOut + 655);

     }

     delay(velocita);    
    }
  }

  if (randNumber==45){
    
    for (value = maxSlowValueOut; value >= 0; value -= fadeSlowOut){
     
      if (value <= maxSlowValueOut && value >= maxSlowValueOut - 255){
        analogWrite(led6, value - maxSlowValueOut + 255);
     }

      if (value <= maxSlowValueOut - 255 && value >= maxSlowValueOut - 355){
        analogWrite(led7, value - maxSlowValueOut + 355);
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

  if (randNumber==46){
    
    for (value = maxSlowValueOut; value >= 0; value -= fadeSlowOut){
     
      if (value <= maxSlowValueOut && value >= maxSlowValueOut - 255){
        analogWrite(led1, value - maxSlowValueOut + 255);
     }

      if (value <= maxSlowValueOut - 255 && value >= maxSlowValueOut - 355){
        analogWrite(led2, value - maxSlowValueOut + 355);
     }

      if (value <= maxSlowValueOut - 355 && value >= maxSlowValueOut - 455){
        analogWrite(led8, value - maxSlowValueOut + 455);
     }

      if (value <= maxSlowValueOut - 455 && value >= maxSlowValueOut - 555){
        analogWrite(led9, value - maxSlowValueOut + 555);
     }

      if (value <= maxSlowValueOut - 555 && value >= maxSlowValueOut - 655){
        analogWrite(led10, value - maxSlowValueOut + 655);

     }

     delay(velocita);    
    }
  }

  if (randNumber==47){
    
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
        analogWrite(led7, value - maxSlowValueOut + 555);
     }

      if (value <= maxSlowValueOut - 555 && value >= maxSlowValueOut - 655){
        analogWrite(led6, value - maxSlowValueOut + 655);

     }

     delay(velocita);    
    }
  }

  if (randNumber==48){
    
    for (value = maxSlowValueOut; value >= 0; value -= fadeSlowOut){
     
      if (value <= maxSlowValueOut && value >= maxSlowValueOut - 255){
        analogWrite(led10, value - maxSlowValueOut + 255);
     }

      if (value <= maxSlowValueOut - 255 && value >= maxSlowValueOut - 355){
        analogWrite(led9, value - maxSlowValueOut + 355);
     }

      if (value <= maxSlowValueOut - 355 && value >= maxSlowValueOut - 455){
        analogWrite(led8, value - maxSlowValueOut + 455);
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

  if (randNumber==49){
    
    for (value = maxSlowValueOut; value >= 0; value -= fadeSlowOut){
     
      if (value <= maxSlowValueOut && value >= maxSlowValueOut - 255){
        analogWrite(led5, value - maxSlowValueOut + 255);
     }

      if (value <= maxSlowValueOut - 255 && value >= maxSlowValueOut - 355){
        analogWrite(led4, value - maxSlowValueOut + 355);
     }

      if (value <= maxSlowValueOut - 355 && value >= maxSlowValueOut - 455){
        analogWrite(led8, value - maxSlowValueOut + 455);
     }

      if (value <= maxSlowValueOut - 455 && value >= maxSlowValueOut - 555){
        analogWrite(led7, value - maxSlowValueOut + 555);
     }

      if (value <= maxSlowValueOut - 555 && value >= maxSlowValueOut - 655){
        analogWrite(led1, value - maxSlowValueOut + 655);

     }

     delay(velocita);    
    }
  }

  if (randNumber==50){
    
    for (value = maxSlowValueOut; value >= 0; value -= fadeSlowOut){
     
      if (value <= maxSlowValueOut && value >= maxSlowValueOut - 255){
        analogWrite(led10, value - maxSlowValueOut + 255);
     }

      if (value <= maxSlowValueOut - 255 && value >= maxSlowValueOut - 355){
        analogWrite(led9, value - maxSlowValueOut + 355);
     }

      if (value <= maxSlowValueOut - 355 && value >= maxSlowValueOut - 455){
        analogWrite(led3, value - maxSlowValueOut + 455);
     }

      if (value <= maxSlowValueOut - 455 && value >= maxSlowValueOut - 555){
        analogWrite(led2, value - maxSlowValueOut + 555);
     }

      if (value <= maxSlowValueOut - 555 && value >= maxSlowValueOut - 655){
        analogWrite(led6, value - maxSlowValueOut + 655);

     }

     delay(velocita);    
    }
  }

  if (randNumber==51){
    
    for (value = maxSlowValueOut; value >= 0; value -= fadeSlowOut){
     
      if (value <= maxSlowValueOut && value >= maxSlowValueOut - 255){
        analogWrite(led5, value - maxSlowValueOut + 255);
     }

      if (value <= maxSlowValueOut - 255 && value >= maxSlowValueOut - 355){
        analogWrite(led9, value - maxSlowValueOut + 355);
     }

      if (value <= maxSlowValueOut - 355 && value >= maxSlowValueOut - 455){
        analogWrite(led8, value - maxSlowValueOut + 455);
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

  if (randNumber==52){
    
    for (value = maxSlowValueOut; value >= 0; value -= fadeSlowOut){
     
      if (value <= maxSlowValueOut && value >= maxSlowValueOut - 255){
        analogWrite(led10, value - maxSlowValueOut + 255);
     }

      if (value <= maxSlowValueOut - 255 && value >= maxSlowValueOut - 355){
        analogWrite(led4, value - maxSlowValueOut + 355);
     }

      if (value <= maxSlowValueOut - 355 && value >= maxSlowValueOut - 455){
        analogWrite(led3, value - maxSlowValueOut + 455);
     }

      if (value <= maxSlowValueOut - 455 && value >= maxSlowValueOut - 555){
        analogWrite(led7, value - maxSlowValueOut + 555);
     }

      if (value <= maxSlowValueOut - 555 && value >= maxSlowValueOut - 655){
        analogWrite(led6, value - maxSlowValueOut + 655);

     }

     delay(velocita);    
    }
  }

  if (randNumber==53){
    
    for (value = maxSlowValueOut; value >= 0; value -= fadeSlowOut){
     
      if (value <= maxSlowValueOut && value >= maxSlowValueOut - 255){
        analogWrite(led10, value - maxSlowValueOut + 255);
     }

      if (value <= maxSlowValueOut - 255 && value >= maxSlowValueOut - 355){
        analogWrite(led9, value - maxSlowValueOut + 355);
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

  if (randNumber==54){
    
    for (value = maxSlowValueOut; value >= 0; value -= fadeSlowOut){
     
      if (value <= maxSlowValueOut && value >= maxSlowValueOut - 255){
        analogWrite(led5, value - maxSlowValueOut + 255);
     }

      if (value <= maxSlowValueOut - 255 && value >= maxSlowValueOut - 355){
        analogWrite(led4, value - maxSlowValueOut + 355);
     }

      if (value <= maxSlowValueOut - 355 && value >= maxSlowValueOut - 455){
        analogWrite(led8, value - maxSlowValueOut + 455);
     }

      if (value <= maxSlowValueOut - 455 && value >= maxSlowValueOut - 555){
        analogWrite(led7, value - maxSlowValueOut + 555);
     }

      if (value <= maxSlowValueOut - 555 && value >= maxSlowValueOut - 655){
        analogWrite(led6, value - maxSlowValueOut + 655);

     }

     delay(velocita);    
    }
  }

  if (randNumber==55){
    
    for (value = maxSlowValueOut; value >= 0; value -= fadeSlowOut){
     
      if (value <= maxSlowValueOut && value >= maxSlowValueOut - 255){
        analogWrite(led1, value - maxSlowValueOut + 255);
     }

      if (value <= maxSlowValueOut - 255 && value >= maxSlowValueOut - 355){
        analogWrite(led7, value - maxSlowValueOut + 355);
     }

      if (value <= maxSlowValueOut - 355 && value >= maxSlowValueOut - 455){
        analogWrite(led3, value - maxSlowValueOut + 455);
     }

      if (value <= maxSlowValueOut - 455 && value >= maxSlowValueOut - 555){
        analogWrite(led9, value - maxSlowValueOut + 555);
     }

      if (value <= maxSlowValueOut - 555 && value >= maxSlowValueOut - 655){
        analogWrite(led10, value - maxSlowValueOut + 655);

     }

     delay(velocita);    
    }
  }

  if (randNumber==56){
    
    for (value = maxSlowValueOut; value >= 0; value -= fadeSlowOut){
     
      if (value <= maxSlowValueOut && value >= maxSlowValueOut - 255){
        analogWrite(led6, value - maxSlowValueOut + 255);
     }

      if (value <= maxSlowValueOut - 255 && value >= maxSlowValueOut - 355){
        analogWrite(led2, value - maxSlowValueOut + 355);
     }

      if (value <= maxSlowValueOut - 355 && value >= maxSlowValueOut - 455){
        analogWrite(led8, value - maxSlowValueOut + 455);
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

  if (randNumber==57){
    
    for (value = maxSlowValueOut; value >= 0; value -= fadeSlowOut){
     
      if (value <= maxSlowValueOut && value >= maxSlowValueOut - 255){
        analogWrite(led10, value - maxSlowValueOut + 255);
     }

      if (value <= maxSlowValueOut - 255 && value >= maxSlowValueOut - 355){
        analogWrite(led4, value - maxSlowValueOut + 355);
     }

      if (value <= maxSlowValueOut - 355 && value >= maxSlowValueOut - 455){
        analogWrite(led8, value - maxSlowValueOut + 455);
     }

      if (value <= maxSlowValueOut - 455 && value >= maxSlowValueOut - 555){
        analogWrite(led2, value - maxSlowValueOut + 555);
     }

      if (value <= maxSlowValueOut - 555 && value >= maxSlowValueOut - 655){
        analogWrite(led6, value - maxSlowValueOut + 655);

     }

     delay(velocita);    
    }
  }

  if (randNumber==58){
    
    for (value = maxSlowValueOut; value >= 0; value -= fadeSlowOut){
     
      if (value <= maxSlowValueOut && value >= maxSlowValueOut - 255){
        analogWrite(led5, value - maxSlowValueOut + 255);
     }

      if (value <= maxSlowValueOut - 255 && value >= maxSlowValueOut - 355){
        analogWrite(led9, value - maxSlowValueOut + 355);
     }

      if (value <= maxSlowValueOut - 355 && value >= maxSlowValueOut - 455){
        analogWrite(led3, value - maxSlowValueOut + 455);
     }

      if (value <= maxSlowValueOut - 455 && value >= maxSlowValueOut - 555){
        analogWrite(led7, value - maxSlowValueOut + 555);
     }

      if (value <= maxSlowValueOut - 555 && value >= maxSlowValueOut - 655){
        analogWrite(led1, value - maxSlowValueOut + 655);

     }

     delay(velocita);    
    }
  }

  if (randNumber==59){
    
    for (value = maxFastValueOutLong; value >= 0; value -= fadeFastOut){
     
      if (value <= maxFastValueOutLong && value >= maxFastValueOutLong - 255){
        analogWrite(led1, value - maxFastValueOutLong + 255);
     }

      if (value <= maxFastValueOutLong - 255 && value >= maxFastValueOutLong - 355){
        analogWrite(led2, value - maxFastValueOutLong + 355);
     }

      if (value <= maxFastValueOutLong - 355 && value >= maxFastValueOutLong - 455){
        analogWrite(led3, value - maxFastValueOutLong + 455);
     }

      if (value <= maxFastValueOutLong - 455 && value >= maxFastValueOutLong - 555){
        analogWrite(led4, value - maxFastValueOutLong + 555);
     }

      if (value <= maxFastValueOutLong - 555 && value >= maxFastValueOutLong - 655){
        analogWrite(led5, value - maxFastValueOutLong + 655);

     }

     delay(velocita);    

    }

    delay(slowInterval);

    for (value; value >= 0; value -= fadeFastOut){

      if (value <= maxFastValueOutLong - 655 && value >= maxFastValueOutLong - 755){
        analogWrite(led6, value - maxFastValueOutLong + 755);
     }

      if (value <= maxFastValueOutLong - 755 && value >= maxFastValueOutLong - 855){
        analogWrite(led7, value - maxFastValueOutLong + 855);
     }

      if (value <= maxFastValueOutLong - 855 && value >= maxFastValueOutLong - 955){
        analogWrite(led8, value - maxFastValueOutLong + 955);
     }

      if (value <= maxFastValueOutLong - 955 && value >= maxFastValueOutLong - 1055){
        analogWrite(led9, value - maxFastValueOutLong + 1055);
     }

      if (value <= maxFastValueOutLong - 1055 && value >= maxFastValueOutLong - 1155){
        analogWrite(led10, value - maxFastValueOutLong +1155);
     }

      delay(velocita);
    }
  }

  if (randNumber==60){
    
    for (value = maxFastValueOutLong; value >= 0; value -= fadeFastOut){
     
      if (value <= maxFastValueOutLong && value >= maxFastValueOutLong - 255){
        analogWrite(led6, value - maxFastValueOutLong + 255);
     }

      if (value <= maxFastValueOutLong - 255 && value >= maxFastValueOutLong - 355){
        analogWrite(led7, value - maxFastValueOutLong + 355);
     }

      if (value <= maxFastValueOutLong - 355 && value >= maxFastValueOutLong - 455){
        analogWrite(led8, value - maxFastValueOutLong + 455);
     }

      if (value <= maxFastValueOutLong - 455 && value >= maxFastValueOutLong - 555){
        analogWrite(led9, value - maxFastValueOutLong + 555);
     }

      if (value <= maxFastValueOutLong - 555 && value >= maxFastValueOutLong - 655){
        analogWrite(led10, value - maxFastValueOutLong + 655);

     }

     delay(velocita);    
       
    }

    delay(slowInterval);

    for (value; value >= 0; value -= fadeFastOut){

      if (value <= maxFastValueOutLong - 655 && value >= maxFastValueOutLong - 755){
        analogWrite(led1, value - maxFastValueOutLong + 755);
     }

      if (value <= maxFastValueOutLong - 755 && value >= maxFastValueOutLong - 855){
        analogWrite(led2, value - maxFastValueOutLong + 855);
     }

      if (value <= maxFastValueOutLong - 855 && value >= maxFastValueOutLong - 955){
        analogWrite(led3, value - maxFastValueOutLong + 955);
     }

      if (value <= maxFastValueOutLong - 955 && value >= maxFastValueOutLong - 1055){
        analogWrite(led4, value - maxFastValueOutLong + 1055);
     }

      if (value <= maxFastValueOutLong - 1055 && value >= maxFastValueOutLong - 1155){
        analogWrite(led5, value - maxFastValueOutLong +1155);
     }

      delay(velocita);
    }
  }

  if (randNumber==61){
    
    for (value = maxFastValueOutLong; value >= 0; value -= fadeFastOut){
     
      if (value <= maxFastValueOutLong && value >= maxFastValueOutLong - 255){
        analogWrite(led5, value - maxFastValueOutLong + 255);
     }

      if (value <= maxFastValueOutLong - 255 && value >= maxFastValueOutLong - 355){
        analogWrite(led4, value - maxFastValueOutLong + 355);
     }

      if (value <= maxFastValueOutLong - 355 && value >= maxFastValueOutLong - 455){
        analogWrite(led3, value - maxFastValueOutLong + 455);
     }

      if (value <= maxFastValueOutLong - 455 && value >= maxFastValueOutLong - 555){
        analogWrite(led2, value - maxFastValueOutLong + 555);
     }

      if (value <= maxFastValueOutLong - 555 && value >= maxFastValueOutLong - 655){
        analogWrite(led1, value - maxFastValueOutLong + 655);

     }

     delay(velocita);    
       
    }

    delay(slowInterval);

    for (value; value >= 0; value -= fadeFastOut){

      if (value <= maxFastValueOutLong - 655 && value >= maxFastValueOutLong - 755){
        analogWrite(led10, value - maxFastValueOutLong + 755);
     }

      if (value <= maxFastValueOutLong - 755 && value >= maxFastValueOutLong - 855){
        analogWrite(led9, value - maxFastValueOutLong + 855);
     }

      if (value <= maxFastValueOutLong - 855 && value >= maxFastValueOutLong - 955){
        analogWrite(led8, value - maxFastValueOutLong + 955);
     }

      if (value <= maxFastValueOutLong - 955 && value >= maxFastValueOutLong - 1055){
        analogWrite(led7, value - maxFastValueOutLong + 1055);
     }

      if (value <= maxFastValueOutLong - 1055 && value >= maxFastValueOutLong - 1155){
        analogWrite(led6, value - maxFastValueOutLong +1155);
     }

      delay(velocita);
    }
  }

  if (randNumber==62){
    
    for (value = maxFastValueOutLong; value >= 0; value -= fadeFastOut){
     
      if (value <= maxFastValueOutLong && value >= maxFastValueOutLong - 255){
        analogWrite(led5, value - maxFastValueOutLong + 255);
     }

      if (value <= maxFastValueOutLong - 255 && value >= maxFastValueOutLong - 355){
        analogWrite(led4, value - maxFastValueOutLong + 355);
     }

      if (value <= maxFastValueOutLong - 355 && value >= maxFastValueOutLong - 455){
        analogWrite(led3, value - maxFastValueOut + 455);
     }

      if (value <= maxFastValueOutLong - 455 && value >= maxFastValueOutLong - 555){
        analogWrite(led2, value - maxFastValueOutLong + 555);
     }

      if (value <= maxFastValueOutLong - 555 && value >= maxFastValueOutLong - 655){
        analogWrite(led1, value - maxFastValueOutLong + 655);

     }

     delay(velocita);    
       
    }

    delay(slowInterval);

    for (value; value >= 0; value -= fadeFastOut){

      if (value <= maxFastValueOutLong - 655 && value >= maxFastValueOutLong - 755){
        analogWrite(led10, value - maxFastValueOutLong + 755);
     }

      if (value <= maxFastValueOutLong - 755 && value >= maxFastValueOutLong - 855){
        analogWrite(led9, value - maxFastValueOutLong + 855);
     }

      if (value <= maxFastValueOutLong - 855 && value >= maxFastValueOutLong - 955){
        analogWrite(led8, value - maxFastValueOutLong + 955);
     }

      if (value <= maxFastValueOutLong - 955 && value >= maxFastValueOutLong - 1055){
        analogWrite(led7, value - maxFastValueOutLong + 1055);
     }

      if (value <= maxFastValueOutLong - 1055 && value >= maxFastValueOutLong - 1155){
        analogWrite(led6, value - maxFastValueOutLong +1155);
     }

      delay(velocita);
    }
  }

  if (randNumber==63){
    
    for (value = maxFastValueOutShort; value >= 0; value -= fadeFastOut){
     
      if (value <= maxFastValueOutShort && value >= maxFastValueOut - 255){
        analogWrite(led1, value - maxFastValueOutShort + 255);
     }

      if (value <= maxFastValueOutShort - 255 && value >= maxFastValueOutShort - 355){
        analogWrite(led6, value - maxFastValueOutShort + 355);
     }

     delay(velocita);    

    }
  }

  if (randNumber==64){
    
    for (value = maxFastValueOutShort; value >= 0; value -= fadeFastOut){
     
      if (value <= maxFastValueOutShort && value >= maxFastValueOut - 255){
        analogWrite(led6, value - maxFastValueOutShort + 255);
     }

      if (value <= maxFastValueOutShort - 255 && value >= maxFastValueOutShort - 355){
        analogWrite(led1, value - maxFastValueOutShort + 355);
     }

     delay(velocita);    

    }
  }

  if (randNumber==65){
    
    for (value = maxFastValueOutShort; value >= 0; value -= fadeFastOut){
     
      if (value <= maxFastValueOutShort && value >= maxFastValueOut - 255){
        analogWrite(led2, value - maxFastValueOutShort + 255);
     }

      if (value <= maxFastValueOutShort - 255 && value >= maxFastValueOutShort - 355){
        analogWrite(led7, value - maxFastValueOutShort + 355);
     }

     delay(velocita);    

    }
  }

  if (randNumber==66){
    
    for (value = maxFastValueOutShort; value >= 0; value -= fadeFastOut){
     
      if (value <= maxFastValueOutShort && value >= maxFastValueOut - 255){
        analogWrite(led7, value - maxFastValueOutShort + 255);
     }

      if (value <= maxFastValueOutShort - 255 && value >= maxFastValueOutShort - 355){
        analogWrite(led2, value - maxFastValueOutShort + 355);
     }

     delay(velocita);    

    }
  }

  if (randNumber==67){
    
    for (value = maxFastValueOutShort; value >= 0; value -= fadeFastOut){
     
      if (value <= maxFastValueOutShort && value >= maxFastValueOut - 255){
        analogWrite(led3, value - maxFastValueOutShort + 255);
     }

      if (value <= maxFastValueOutShort - 255 && value >= maxFastValueOutShort - 355){
        analogWrite(led8, value - maxFastValueOutShort + 355);
     }

     delay(velocita);    

    }
  }

  if (randNumber==68){
    
    for (value = maxFastValueOutShort; value >= 0; value -= fadeFastOut){
     
      if (value <= maxFastValueOutShort && value >= maxFastValueOut - 255){
        analogWrite(led8, value - maxFastValueOutShort + 255);
     }

      if (value <= maxFastValueOutShort - 255 && value >= maxFastValueOutShort - 355){
        analogWrite(led3, value - maxFastValueOutShort + 355);
     }

     delay(velocita);    

    }
  }

  if (randNumber==69){
    
    for (value = maxFastValueOutShort; value >= 0; value -= fadeFastOut){
     
      if (value <= maxFastValueOutShort && value >= maxFastValueOut - 255){
        analogWrite(led4, value - maxFastValueOutShort + 255);
     }

      if (value <= maxFastValueOutShort - 255 && value >= maxFastValueOutShort - 355){
        analogWrite(led9, value - maxFastValueOutShort + 355);
     }

     delay(velocita);    

    }
  }

  if (randNumber==70){
    
    for (value = maxFastValueOutShort; value >= 0; value -= fadeFastOut){
     
      if (value <= maxFastValueOutShort && value >= maxFastValueOut - 255){
        analogWrite(led9, value - maxFastValueOutShort + 255);
     }

      if (value <= maxFastValueOutShort - 255 && value >= maxFastValueOutShort - 355){
        analogWrite(led4, value - maxFastValueOutShort + 355);
     }

     delay(velocita);    

    }
  }

  if (randNumber==71){
    
    for (value = maxFastValueOutShort; value >= 0; value -= fadeFastOut){
     
      if (value <= maxFastValueOutShort && value >= maxFastValueOut - 255){
        analogWrite(led5, value - maxFastValueOutShort + 255);
     }

      if (value <= maxFastValueOutShort - 255 && value >= maxFastValueOutShort - 355){
        analogWrite(led10, value - maxFastValueOutShort + 355);
     }

     delay(velocita);    

    }
   
  }

  if (randNumber==72){
    
    for (value = maxFastValueOutShort; value >= 0; value -= fadeFastOut){
     
      if (value <= maxFastValueOutShort && value >= maxFastValueOut - 255){
        analogWrite(led10, value - maxFastValueOutShort + 255);
     }

      if (value <= maxFastValueOutShort - 255 && value >= maxFastValueOutShort - 355){
        analogWrite(led5, value - maxFastValueOutShort + 355);
     }

     delay(velocita);    

    }
   
  }

  if (randNumber==73){
    
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

  if (randNumber==74){
    
    for (value = maxFastValueOut; value >= 0; value -= fadeFastOut){
     
      if (value <= maxFastValueOut && value >= maxFastValueOut - 255){
        analogWrite(led6, value - maxFastValueOut + 255);
     }

      if (value <= maxFastValueOut - 255 && value >= maxFastValueOut - 355){
        analogWrite(led7, value - maxFastValueOut + 355);
     }

      if (value <= maxFastValueOut - 355 && value >= maxFastValueOut - 455){
        analogWrite(led8, value - maxFastValueOut + 455);
     }

      if (value <= maxFastValueOut - 455 && value >= maxFastValueOut - 555){
        analogWrite(led9, value - maxFastValueOut + 555);
     }

      if (value <= maxFastValueOut - 555 && value >= maxFastValueOut - 655){
        analogWrite(led10, value - maxFastValueOut + 655);

     }

     delay(velocita);    

    }
  }

  if (randNumber==75){
    
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

  if (randNumber==76){
    
    for (value = maxFastValueOut; value >= 0; value -= fadeFastOut){
     
      if (value <= maxFastValueOut && value >= maxFastValueOut - 255){
        analogWrite(led10, value - maxFastValueOut + 255);
     }

      if (value <= maxFastValueOut - 255 && value >= maxFastValueOut - 355){
        analogWrite(led9, value - maxFastValueOut + 355);
     }

      if (value <= maxFastValueOut - 355 && value >= maxFastValueOut - 455){
        analogWrite(led8, value - maxFastValueOut + 455);
     }

      if (value <= maxFastValueOut - 455 && value >= maxFastValueOut - 555){
        analogWrite(led7, value - maxFastValueOut + 555);
     }

      if (value <= maxFastValueOut - 555 && value >= maxFastValueOut - 655){
        analogWrite(led6, value - maxFastValueOut + 655);

     }

     delay(velocita);    

    }
  }

  if (randNumber==77){
    
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
        analogWrite(led10, value - maxFastValueOut + 655);

     }

     delay(velocita);    

   }
  }

  if (randNumber==78){
    
    for (value = maxFastValueOut; value >= 0; value -= fadeFastOut){
     
      if (value <= maxFastValueOut && value >= maxFastValueOut - 255){
        analogWrite(led6, value - maxFastValueOut + 255);
     }

      if (value <= maxFastValueOut - 255 && value >= maxFastValueOut - 355){
        analogWrite(led7, value - maxFastValueOut + 355);
     }

      if (value <= maxFastValueOut - 355 && value >= maxFastValueOut - 455){
        analogWrite(led8, value - maxFastValueOut + 455);
     }

      if (value <= maxFastValueOut - 455 && value >= maxFastValueOut - 555){
        analogWrite(led9, value - maxFastValueOut + 555);
     }

      if (value <= maxFastValueOut - 555 && value >= maxFastValueOut - 655){
        analogWrite(led5, value - maxFastValueOut + 655);

     }

     delay(velocita);    
    }
  }

  if (randNumber==79){
    
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
        analogWrite(led6, value - maxFastValueOut + 655);

     }

     delay(velocita);    
    }
  }

  if (randNumber==80){
    
    for (value = maxFastValueOut; value >= 0; value -= fadeFastOut){
     
      if (value <= maxFastValueOut && value >= maxFastValueOut - 255){
        analogWrite(led10, value - maxFastValueOut + 255);
     }

      if (value <= maxFastValueOut - 255 && value >= maxFastValueOut - 355){
        analogWrite(led9, value - maxFastValueOut + 355);
     }

      if (value <= maxFastValueOut - 355 && value >= maxFastValueOut - 455){
        analogWrite(led8, value - maxFastValueOut + 455);
     }

      if (value <= maxFastValueOut - 455 && value >= maxFastValueOut - 555){
        analogWrite(led7, value - maxFastValueOut + 555);
     }

      if (value <= maxFastValueOut - 555 && value >= maxFastValueOut - 655){
        analogWrite(led1, value - maxFastValueOut + 655);

     }

     delay(velocita);    
    }
  }

  if (randNumber==81){
    
    for (value = maxFastValueOut; value >= 0; value -= fadeFastOut){
     
      if (value <= maxFastValueOut && value >= maxFastValueOut - 255){
        analogWrite(led10, value - maxFastValueOut + 255);
     }

      if (value <= maxFastValueOut - 255 && value >= maxFastValueOut - 355){
        analogWrite(led9, value - maxFastValueOut + 355);
     }

      if (value <= maxFastValueOut - 355 && value >= maxFastValueOut - 455){
        analogWrite(led8, value - maxFastValueOut + 455);
     }

      if (value <= maxFastValueOut - 455 && value >= maxFastValueOut - 555){
        analogWrite(led7, value - maxFastValueOut + 555);
     }

      if (value <= maxFastValueOut - 555 && value >= maxFastValueOut - 655){
        analogWrite(led1, value - maxFastValueOut + 655);

     }

     delay(velocita);    
    }
  }

  if (randNumber==82){
    
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
        analogWrite(led9, value - maxFastValueOut + 555);
     }

      if (value <= maxFastValueOut - 555 && value >= maxFastValueOut - 655){
        analogWrite(led5, value - maxFastValueOut + 655);

     }

     delay(velocita);    
    }
  }

  if (randNumber==83){
    
    for (value = maxFastValueOut; value >= 0; value -= fadeFastOut){
     
      if (value <= maxFastValueOut && value >= maxFastValueOut - 255){
        analogWrite(led6, value - maxFastValueOut + 255);
     }

      if (value <= maxFastValueOut - 255 && value >= maxFastValueOut - 355){
        analogWrite(led7, value - maxFastValueOut + 355);
     }

      if (value <= maxFastValueOut - 355 && value >= maxFastValueOut - 455){
        analogWrite(led8, value - maxFastValueOut + 455);
     }

      if (value <= maxFastValueOut - 455 && value >= maxFastValueOut - 555){
        analogWrite(led4, value - maxFastValueOut + 555);
     }

      if (value <= maxFastValueOut - 555 && value >= maxFastValueOut - 655){
        analogWrite(led10, value - maxFastValueOut + 655);

     }

     delay(velocita);    
    }
  }

  if (randNumber==84){
    
    for (value = maxFastValueOut; value >= 0; value -= fadeFastOut){
     
      if (value <= maxFastValueOut && value >= maxFastValueOut - 255){
        analogWrite(led10, value - maxFastValueOut + 255);
     }

      if (value <= maxFastValueOut - 255 && value >= maxFastValueOut - 355){
        analogWrite(led9, value - maxFastValueOut + 355);
     }

      if (value <= maxFastValueOut - 355 && value >= maxFastValueOut - 455){
        analogWrite(led8, value - maxFastValueOut + 455);
     }

      if (value <= maxFastValueOut - 455 && value >= maxFastValueOut - 555){
        analogWrite(led2, value - maxFastValueOut + 555);
     }

      if (value <= maxFastValueOut - 555 && value >= maxFastValueOut - 655){
        analogWrite(led6, value - maxFastValueOut + 655);

     }

     delay(velocita);    
    }
  }

  if (randNumber==85){
    
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
        analogWrite(led7, value - maxFastValueOut + 555);
     }

      if (value <= maxFastValueOut - 555 && value >= maxFastValueOut - 655){
        analogWrite(led1, value - maxFastValueOut + 655);

     }

     delay(velocita);    
    }
  }

  if (randNumber==86){
    
    for (value = maxFastValueOut; value >= 0; value -= fadeFastOut){
     
      if (value <= maxFastValueOut && value >= maxFastValueOut - 255){
        analogWrite(led1, value - maxFastValueOut + 255);
     }

      if (value <= maxFastValueOut - 255 && value >= maxFastValueOut - 355){
        analogWrite(led2, value - maxFastValueOut + 355);
     }

      if (value <= maxFastValueOut - 355 && value >= maxFastValueOut - 455){
        analogWrite(led8, value - maxFastValueOut + 455);
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

  if (randNumber==87){
    
    for (value = maxFastValueOut; value >= 0; value -= fadeFastOut){
     
      if (value <= maxFastValueOut && value >= maxFastValueOut - 255){
        analogWrite(led6, value - maxFastValueOut + 255);
     }

      if (value <= maxFastValueOut - 255 && value >= maxFastValueOut - 355){
        analogWrite(led7, value - maxFastValueOut + 355);
     }

      if (value <= maxFastValueOut - 355 && value >= maxFastValueOut - 455){
        analogWrite(led3, value - maxFastValueOut + 455);
     }

      if (value <= maxFastValueOut - 455 && value >= maxFastValueOut - 555){
        analogWrite(led9, value - maxFastValueOut + 555);
     }

      if (value <= maxFastValueOut - 555 && value >= maxFastValueOut - 655){
        analogWrite(led10, value - maxFastValueOut + 655);

     }

     delay(velocita);    
    }
  }

  if (randNumber==88){
    
    for (value = maxFastValueOut; value >= 0; value -= fadeFastOut){
     
      if (value <= maxFastValueOut && value >= maxFastValueOut - 255){
        analogWrite(led1, value - maxFastValueOut + 255);
     }

      if (value <= maxFastValueOut - 255 && value >= maxFastValueOut - 355){
        analogWrite(led7, value - maxFastValueOut + 355);
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

  if (randNumber==89){
    
    for (value = maxFastValueOut; value >= 0; value -= fadeFastOut){
     
      if (value <= maxFastValueOut && value >= maxFastValueOut - 255){
        analogWrite(led6, value - maxFastValueOut + 255);
     }

      if (value <= maxFastValueOut - 255 && value >= maxFastValueOut - 355){
        analogWrite(led2, value - maxFastValueOut + 355);
     }

      if (value <= maxFastValueOut - 355 && value >= maxFastValueOut - 455){
        analogWrite(led8, value - maxFastValueOut + 455);
     }

      if (value <= maxFastValueOut - 455 && value >= maxFastValueOut - 555){
        analogWrite(led9, value - maxFastValueOut + 555);
     }

      if (value <= maxFastValueOut - 555 && value >= maxFastValueOut - 655){
        analogWrite(led10, value - maxFastValueOut + 655);

     }

     delay(velocita);    
    }
  }

  if (randNumber==90){
    
    for (value = maxFastValueOut; value >= 0; value -= fadeFastOut){
     
      if (value <= maxFastValueOut && value >= maxFastValueOut - 255){
        analogWrite(led10, value - maxFastValueOut + 255);
     }

      if (value <= maxFastValueOut - 255 && value >= maxFastValueOut - 355){
        analogWrite(led4, value - maxFastValueOut + 355);
     }

      if (value <= maxFastValueOut - 355 && value >= maxFastValueOut - 455){
        analogWrite(led8, value - maxFastValueOut + 455);
     }

      if (value <= maxFastValueOut - 455 && value >= maxFastValueOut - 555){
        analogWrite(led7, value - maxFastValueOut + 555);
     }

      if (value <= maxFastValueOut - 555 && value >= maxFastValueOut - 655){
        analogWrite(led6, value - maxFastValueOut + 655);

     }

     delay(velocita);    
    }
  }

  if (randNumber==91){
    
    for (value = maxFastValueOut; value >= 0; value -= fadeFastOut){
     
      if (value <= maxFastValueOut && value >= maxFastValueOut - 255){
        analogWrite(led10, value - maxFastValueOut + 255);
     }

      if (value <= maxFastValueOut - 255 && value >= maxFastValueOut - 355){
        analogWrite(led4, value - maxFastValueOut + 355);
     }

      if (value <= maxFastValueOut - 355 && value >= maxFastValueOut - 455){
        analogWrite(led8, value - maxFastValueOut + 455);
     }

      if (value <= maxFastValueOut - 455 && value >= maxFastValueOut - 555){
        analogWrite(led7, value - maxFastValueOut + 555);
     }

      if (value <= maxFastValueOut - 555 && value >= maxFastValueOut - 655){
        analogWrite(led6, value - maxFastValueOut + 655);

     }

     delay(velocita);    
    }
  }

  if (randNumber==92){
    
    for (value = maxFastValueOut; value >= 0; value -= fadeFastOut){
     
      if (value <= maxFastValueOut && value >= maxFastValueOut - 255){
        analogWrite(led5, value - maxFastValueOut + 255);
     }

      if (value <= maxFastValueOut - 255 && value >= maxFastValueOut - 355){
        analogWrite(led9, value - maxFastValueOut + 355);
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

  if (randNumber==93){
    
    for (value = maxFastValueOut; value >= 0; value -= fadeFastOut){
     
      if (value <= maxFastValueOut && value >= maxFastValueOut - 255){
        analogWrite(led10, value - maxFastValueOut + 255);
     }

      if (value <= maxFastValueOut - 255 && value >= maxFastValueOut - 355){
        analogWrite(led9, value - maxFastValueOut + 355);
     }

      if (value <= maxFastValueOut - 355 && value >= maxFastValueOut - 455){
        analogWrite(led3, value - maxFastValueOut + 455);
     }

      if (value <= maxFastValueOut - 455 && value >= maxFastValueOut - 555){
        analogWrite(led7, value - maxFastValueOut + 555);
     }

      if (value <= maxFastValueOut - 555 && value >= maxFastValueOut - 655){
        analogWrite(led6, value - maxFastValueOut + 655);

     }

     delay(velocita);    
    }
  }

  if (randNumber==94){
    
    for (value = maxFastValueOut; value >= 0; value -= fadeFastOut){
     
      if (value <= maxFastValueOut && value >= maxFastValueOut - 255){
        analogWrite(led5, value - maxFastValueOut + 255);
     }

      if (value <= maxFastValueOut - 255 && value >= maxFastValueOut - 355){
        analogWrite(led4, value - maxFastValueOut + 355);
     }

      if (value <= maxFastValueOut - 355 && value >= maxFastValueOut - 455){
        analogWrite(led8, value - maxFastValueOut + 455);
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

  if (randNumber==95){
    
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
        analogWrite(led9, value - maxFastValueOut + 555);
     }

      if (value <= maxFastValueOut - 555 && value >= maxFastValueOut - 655){
        analogWrite(led10, value - maxFastValueOut + 655);

     }

     delay(velocita);    
    }
  }

  if (randNumber==96){
    
    for (value = maxFastValueOut; value >= 0; value -= fadeFastOut){
     
      if (value <= maxFastValueOut && value >= maxFastValueOut - 255){
        analogWrite(led5, value - maxFastValueOut + 255);
     }

      if (value <= maxFastValueOut - 255 && value >= maxFastValueOut - 355){
        analogWrite(led4, value - maxFastValueOut + 355);
     }

      if (value <= maxFastValueOut - 355 && value >= maxFastValueOut - 455){
        analogWrite(led8, value - maxFastValueOut + 455);
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

  if (randNumber==97){
    
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
        analogWrite(led9, value - maxFastValueOut + 555);
     }

      if (value <= maxFastValueOut - 555 && value >= maxFastValueOut - 655){
        analogWrite(led10, value - maxFastValueOut + 655);

     }

     delay(velocita);    
    }
  }

  if (randNumber==98){
    
    for (value = maxFastValueOut; value >= 0; value -= fadeFastOut){
     
      if (value <= maxFastValueOut && value >= maxFastValueOut - 255){
        analogWrite(led6, value - maxFastValueOut + 255);
     }

      if (value <= maxFastValueOut - 255 && value >= maxFastValueOut - 355){
        analogWrite(led7, value - maxFastValueOut + 355);
     }

      if (value <= maxFastValueOut - 355 && value >= maxFastValueOut - 455){
        analogWrite(led8, value - maxFastValueOut + 455);
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

  if (randNumber==99){
    
    for (value = maxFastValueOut; value >= 0; value -= fadeFastOut){
     
      if (value <= maxFastValueOut && value >= maxFastValueOut - 255){
        analogWrite(led1, value - maxFastValueOut + 255);
     }

      if (value <= maxFastValueOut - 255 && value >= maxFastValueOut - 355){
        analogWrite(led2, value - maxFastValueOut + 355);
     }

      if (value <= maxFastValueOut - 355 && value >= maxFastValueOut - 455){
        analogWrite(led8, value - maxFastValueOut + 455);
     }

      if (value <= maxFastValueOut - 455 && value >= maxFastValueOut - 555){
        analogWrite(led9, value - maxFastValueOut + 555);
     }

      if (value <= maxFastValueOut - 555 && value >= maxFastValueOut - 655){
        analogWrite(led5, value - maxFastValueOut + 655);

     }

     delay(velocita);    
    }
  }

  if (randNumber==100){
    
    for (value = maxFastValueOut; value >= 0; value -= fadeFastOut){
     
      if (value <= maxFastValueOut && value >= maxFastValueOut - 255){
        analogWrite(led6, value - maxFastValueOut + 255);
     }

      if (value <= maxFastValueOut - 255 && value >= maxFastValueOut - 355){
        analogWrite(led7, value - maxFastValueOut + 355);
     }

      if (value <= maxFastValueOut - 355 && value >= maxFastValueOut - 455){
        analogWrite(led3, value - maxFastValueOut + 455);
     }

      if (value <= maxFastValueOut - 455 && value >= maxFastValueOut - 555){
        analogWrite(led4, value - maxFastValueOut + 555);
     }

      if (value <= maxFastValueOut - 555 && value >= maxFastValueOut - 655){
        analogWrite(led10, value - maxFastValueOut + 655);

     }

     delay(velocita);    
    }
  }

  if (randNumber==101){
    
    for (value = maxFastValueOut; value >= 0; value -= fadeFastOut){
     
      if (value <= maxFastValueOut && value >= maxFastValueOut - 255){
        analogWrite(led1, value - maxFastValueOut + 255);
     }

      if (value <= maxFastValueOut - 255 && value >= maxFastValueOut - 355){
        analogWrite(led7, value - maxFastValueOut + 355);
     }

      if (value <= maxFastValueOut - 355 && value >= maxFastValueOut - 455){
        analogWrite(led8, value - maxFastValueOut + 455);
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

  if (randNumber==102){
    
    for (value = maxFastValueOut; value >= 0; value -= fadeFastOut){
     
      if (value <= maxFastValueOut && value >= maxFastValueOut - 255){
        analogWrite(led6, value - maxFastValueOut + 255);
     }

      if (value <= maxFastValueOut - 255 && value >= maxFastValueOut - 355){
        analogWrite(led2, value - maxFastValueOut + 355);
     }

      if (value <= maxFastValueOut - 355 && value >= maxFastValueOut - 455){
        analogWrite(led3, value - maxFastValueOut + 455);
     }

      if (value <= maxFastValueOut - 455 && value >= maxFastValueOut - 555){
        analogWrite(led9, value - maxFastValueOut + 555);
     }

      if (value <= maxFastValueOut - 555 && value >= maxFastValueOut - 655){
        analogWrite(led10, value - maxFastValueOut + 655);

     }

     delay(velocita);    
    }
  }

  if (randNumber==103){
    
    for (value = maxFastValueOut; value >= 0; value -= fadeFastOut){
     
      if (value <= maxFastValueOut && value >= maxFastValueOut - 255){
        analogWrite(led6, value - maxFastValueOut + 255);
     }

      if (value <= maxFastValueOut - 255 && value >= maxFastValueOut - 355){
        analogWrite(led7, value - maxFastValueOut + 355);
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

  if (randNumber==104){
    
    for (value = maxFastValueOut; value >= 0; value -= fadeFastOut){
     
      if (value <= maxFastValueOut && value >= maxFastValueOut - 255){
        analogWrite(led1, value - maxFastValueOut + 255);
     }

      if (value <= maxFastValueOut - 255 && value >= maxFastValueOut - 355){
        analogWrite(led2, value - maxFastValueOut + 355);
     }

      if (value <= maxFastValueOut - 355 && value >= maxFastValueOut - 455){
        analogWrite(led8, value - maxFastValueOut + 455);
     }

      if (value <= maxFastValueOut - 455 && value >= maxFastValueOut - 555){
        analogWrite(led9, value - maxFastValueOut + 555);
     }

      if (value <= maxFastValueOut - 555 && value >= maxFastValueOut - 655){
        analogWrite(led10, value - maxFastValueOut + 655);

     }

     delay(velocita);    
    }
  }

  if (randNumber==105){
    
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
        analogWrite(led7, value - maxFastValueOut + 555);
     }

      if (value <= maxFastValueOut - 555 && value >= maxFastValueOut - 655){
        analogWrite(led6, value - maxFastValueOut + 655);

     }

     delay(velocita);    
    }
  }

  if (randNumber==106){
    
    for (value = maxFastValueOut; value >= 0; value -= fadeFastOut){
     
      if (value <= maxFastValueOut && value >= maxFastValueOut - 255){
        analogWrite(led10, value - maxFastValueOut + 255);
     }

      if (value <= maxFastValueOut - 255 && value >= maxFastValueOut - 355){
        analogWrite(led9, value - maxFastValueOut + 355);
     }

      if (value <= maxFastValueOut - 355 && value >= maxFastValueOut - 455){
        analogWrite(led8, value - maxFastValueOut + 455);
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

  if (randNumber==107){
    
    for (value = maxFastValueOut; value >= 0; value -= fadeFastOut){
     
      if (value <= maxFastValueOut && value >= maxFastValueOut - 255){
        analogWrite(led5, value - maxFastValueOut + 255);
     }

      if (value <= maxFastValueOut - 255 && value >= maxFastValueOut - 355){
        analogWrite(led4, value - maxFastValueOut + 355);
     }

      if (value <= maxFastValueOut - 355 && value >= maxFastValueOut - 455){
        analogWrite(led8, value - maxFastValueOut + 455);
     }

      if (value <= maxFastValueOut - 455 && value >= maxFastValueOut - 555){
        analogWrite(led7, value - maxFastValueOut + 555);
     }

      if (value <= maxFastValueOut - 555 && value >= maxFastValueOut - 655){
        analogWrite(led1, value - maxFastValueOut + 655);

     }

     delay(velocita);    
    }
  }

  if (randNumber==108){
    
    for (value = maxFastValueOut; value >= 0; value -= fadeFastOut){
     
      if (value <= maxFastValueOut && value >= maxFastValueOut - 255){
        analogWrite(led10, value - maxFastValueOut + 255);
     }

      if (value <= maxFastValueOut - 255 && value >= maxFastValueOut - 355){
        analogWrite(led9, value - maxFastValueOut + 355);
     }

      if (value <= maxFastValueOut - 355 && value >= maxFastValueOut - 455){
        analogWrite(led3, value - maxFastValueOut + 455);
     }

      if (value <= maxFastValueOut - 455 && value >= maxFastValueOut - 555){
        analogWrite(led2, value - maxFastValueOut + 555);
     }

      if (value <= maxFastValueOut - 555 && value >= maxFastValueOut - 655){
        analogWrite(led6, value - maxFastValueOut + 655);

     }

     delay(velocita);    
    }
  }

  if (randNumber==109){
    
    for (value = maxFastValueOut; value >= 0; value -= fadeFastOut){
     
      if (value <= maxFastValueOut && value >= maxFastValueOut - 255){
        analogWrite(led5, value - maxFastValueOut + 255);
     }

      if (value <= maxFastValueOut - 255 && value >= maxFastValueOut - 355){
        analogWrite(led9, value - maxFastValueOut + 355);
     }

      if (value <= maxFastValueOut - 355 && value >= maxFastValueOut - 455){
        analogWrite(led8, value - maxFastValueOut + 455);
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

  if (randNumber==110){
    
    for (value = maxFastValueOut; value >= 0; value -= fadeFastOut){
     
      if (value <= maxFastValueOut && value >= maxFastValueOut - 255){
        analogWrite(led10, value - maxFastValueOut + 255);
     }

      if (value <= maxFastValueOut - 255 && value >= maxFastValueOut - 355){
        analogWrite(led4, value - maxFastValueOut + 355);
     }

      if (value <= maxFastValueOut - 355 && value >= maxFastValueOut - 455){
        analogWrite(led3, value - maxFastValueOut + 455);
     }

      if (value <= maxFastValueOut - 455 && value >= maxFastValueOut - 555){
        analogWrite(led7, value - maxFastValueOut + 555);
     }

      if (value <= maxFastValueOut - 555 && value >= maxFastValueOut - 655){
        analogWrite(led6, value - maxFastValueOut + 655);

     }

     delay(velocita);    
    }
  }

  if (randNumber==111){
    
    for (value = maxFastValueOut; value >= 0; value -= fadeFastOut){
     
      if (value <= maxFastValueOut && value >= maxFastValueOut - 255){
        analogWrite(led10, value - maxFastValueOut + 255);
     }

      if (value <= maxFastValueOut - 255 && value >= maxFastValueOut - 355){
        analogWrite(led9, value - maxFastValueOut + 355);
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

  if (randNumber==112){
    
    for (value = maxFastValueOut; value >= 0; value -= fadeFastOut){
     
      if (value <= maxFastValueOut && value >= maxFastValueOut - 255){
        analogWrite(led5, value - maxFastValueOut + 255);
     }

      if (value <= maxFastValueOut - 255 && value >= maxFastValueOut - 355){
        analogWrite(led4, value - maxFastValueOut + 355);
     }

      if (value <= maxFastValueOut - 355 && value >= maxFastValueOut - 455){
        analogWrite(led8, value - maxFastValueOut + 455);
     }

      if (value <= maxFastValueOut - 455 && value >= maxFastValueOut - 555){
        analogWrite(led7, value - maxFastValueOut + 555);
     }

      if (value <= maxFastValueOut - 555 && value >= maxFastValueOut - 655){
        analogWrite(led6, value - maxFastValueOut + 655);

     }

     delay(velocita);    
    }
  }

  if (randNumber==113){
    
    for (value = maxFastValueOut; value >= 0; value -= fadeFastOut){
     
      if (value <= maxFastValueOut && value >= maxFastValueOut - 255){
        analogWrite(led1, value - maxFastValueOut + 255);
     }

      if (value <= maxFastValueOut - 255 && value >= maxFastValueOut - 355){
        analogWrite(led7, value - maxFastValueOut + 355);
     }

      if (value <= maxFastValueOut - 355 && value >= maxFastValueOut - 455){
        analogWrite(led3, value - maxFastValueOut + 455);
     }

      if (value <= maxFastValueOut - 455 && value >= maxFastValueOut - 555){
        analogWrite(led9, value - maxFastValueOut + 555);
     }

      if (value <= maxFastValueOut - 555 && value >= maxFastValueOut - 655){
        analogWrite(led10, value - maxFastValueOut + 655);

     }

     delay(velocita);    
    }
  }

  if (randNumber==114){
    
    for (value = maxFastValueOut; value >= 0; value -= fadeFastOut){
     
      if (value <= maxFastValueOut && value >= maxFastValueOut - 255){
        analogWrite(led6, value - maxFastValueOut + 255);
     }

      if (value <= maxFastValueOut - 255 && value >= maxFastValueOut - 355){
        analogWrite(led2, value - maxFastValueOut + 355);
     }

      if (value <= maxFastValueOut - 355 && value >= maxFastValueOut - 455){
        analogWrite(led8, value - maxFastValueOut + 455);
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

  if (randNumber==115){
    
    for (value = maxFastValueOut; value >= 0; value -= fadeFastOut){
     
      if (value <= maxFastValueOut && value >= maxFastValueOut - 255){
        analogWrite(led10, value - maxFastValueOut + 255);
     }

      if (value <= maxFastValueOut - 255 && value >= maxFastValueOut - 355){
        analogWrite(led4, value - maxFastValueOut + 355);
     }

      if (value <= maxFastValueOut - 355 && value >= maxFastValueOut - 455){
        analogWrite(led8, value - maxFastValueOut + 455);
     }

      if (value <= maxFastValueOut - 455 && value >= maxFastValueOut - 555){
        analogWrite(led2, value - maxFastValueOut + 555);
     }

      if (value <= maxFastValueOut - 555 && value >= maxFastValueOut - 655){
        analogWrite(led6, value - maxFastValueOut + 655);

     }

     delay(velocita);    
    }
  }

  if (randNumber==116){
    
    for (value = maxFastValueOut; value >= 0; value -= fadeFastOut){
     
      if (value <= maxFastValueOut && value >= maxFastValueOut - 255){
        analogWrite(led5, value - maxFastValueOut + 255);
     }

      if (value <= maxFastValueOut - 255 && value >= maxFastValueOut - 355){
        analogWrite(led9, value - maxFastValueOut + 355);
     }

      if (value <= maxFastValueOut - 355 && value >= maxFastValueOut - 455){
        analogWrite(led3, value - maxFastValueOut + 455);
     }

      if (value <= maxFastValueOut - 455 && value >= maxFastValueOut - 555){
        analogWrite(led7, value - maxFastValueOut + 555);
     }

      if (value <= maxFastValueOut - 555 && value >= maxFastValueOut - 655){
        analogWrite(led1, value - maxFastValueOut + 655);

     }

     delay(velocita);    
    }
  }

  /*else {
    
    for (value = 0; value <= valueIdle; value += fadeIdleIn){

        analogWrite(led1, value);
        analogWrite(led2, value);
        analogWrite(led3, value);
        analogWrite(led4, value);
        analogWrite(led5, value);
        analogWrite(led6, value);
        analogWrite(led7, value);
        analogWrite(led8, value);
        analogWrite(led9, value);
        analogWrite(led10, value);
        delay(velocita);
    }
      delay(maxValueIdle);

    for (value = valueIdle; value >= 0; value -= fadeIdleOut){

        analogWrite(led1, value);
        analogWrite(led2, value);
        analogWrite(led3, value);
        analogWrite(led4, value);
        analogWrite(led5, value);
        analogWrite(led6, value);
        analogWrite(led7, value);
        analogWrite(led8, value);
        analogWrite(led9, value);
        analogWrite(led10, value);
        delay(velocita);
    }
      delay(maxValueIdle);
  }*/
}