int led1=2;
int led2=3;
int led3=4;
int led4=5;
int led5=6;
int led6=7;
int led7=8;

int velocita = 40;
int fade = 15;
int fade2 = 40;
int randNumber=0;
int maxvalue=2500;

void setup() {

  // initialize serial communication with computer:
  Serial.begin(9600);
  randomSeed(analogRead(0));
}

void loop(){

  randNumber = random(1, 19);
  Serial.println(randNumber);

  if (randNumber==1 || randNumber==7 || randNumber==14){
    
    for (int value = 0; value <= maxvalue; value += fade){

      if (value <= 255){
        analogWrite(led1, value);
      }

      if (value >= 25 && value <= 280){
        analogWrite(led2, value-25);
      }

      if (value >= 50 && value <= 305){
        analogWrite(led4, value-50);
      }

      if (value >= 75 && value <= 330){
        analogWrite(led3, value-75);
      }

      if (value >= 100 && value <= 355){
        analogWrite(led5, value - 100);
      }

      if (value >= 125 && value <= 380){
        analogWrite(led6, value - 125);
      }

      if (value >= 150 && value <= 405){
        analogWrite(led7, value - 150);
      }

      if (value >= 405 && value <= 630){
        analogWrite(led1, value - 405);
      }

      if (value >= 430 && value <= 655){
        analogWrite(led4, value - 430);
      }

      if (value >= 455 && value <= 680){
        analogWrite(led7, value - 455);
      }

      delay(velocita);
    }
  }
  
  if (randNumber==2 || randNumber==8 || randNumber==15){
    
    for (int value = 0; value <= 1000; value += fade){

      if (value <= 255){
        analogWrite(led4, value);
      }

      if (value >= 25 && value <= 280){
        analogWrite(led3, value-25);
      }

      if (value >= 50 && value <= 305){
        analogWrite(led7, value-50);
      }

      if (value >= 75 && value <= 330){
        analogWrite(led2, value-75);
      }

      if (value >= 100 && value <= 355){
        analogWrite(led6, value - 100);
      }

      if (value >= 125 && value <= 380){
        analogWrite(led1, value - 125);
      }

      if (value >= 150 && value <= 405){
        analogWrite(led5, value - 150);
      }

      if (value >= 405 && value <= 430){
        analogWrite(led3, value - 405);
      }

      if (value >= 430 && value <= 455){
        analogWrite(led3, value - 430);
      }

      if (value >= 455 && value <= 470){
        analogWrite(led7, value - 455);
      }

      if (value >= 470 && value <= 495){
        analogWrite(led2, value - 520);
      }

      if (value >= 495 && value <= 520){
        analogWrite(led6, value - 495);
      }

      if (value >= 520 && value <= 545){
        analogWrite(led1, value - 520);
      }

      if (value >= 545 && value <= 570){
        analogWrite(led5, value - 545);
      }      

      delay(velocita);
    }
  }

  if (randNumber==3 || randNumber==9 || randNumber==16){
    
    for (int value = 0; value <= 1000; value += fade){

      if (value <= 255){
        analogWrite(led7, value);
      }

      if (value >= 25 && value <= 280){
        analogWrite(led6, value-25);
      }

      if (value >= 50 && value <= 305){
        analogWrite(led3, value-50);
      }

      if (value >= 75 && value <= 330){
        analogWrite(led4, value-75);
      }

      if (value >= 100 && value <= 355){
        analogWrite(led2, value - 100);
      }

      if (value >= 125 && value <= 380){
        analogWrite(led5, value - 125);
      }

      if (value >= 150 && value <= 405){
        analogWrite(led1, value - 150);
      }      

      delay(velocita);
    }
  }
  if (randNumber==4 || randNumber==10 || randNumber==17){
    
    for (int value = 0; value <= 1000; value += fade){

      if (value <= 255){
        analogWrite(led3, value);
      }

      if (value >= 25 && value <= 280){
        analogWrite(led2, value-25);
      }

      if (value >= 50 && value <= 305){
        analogWrite(led7, value-50);
      }

      if (value >= 75 && value <= 330){
        analogWrite(led4, value-75);
      }

      if (value >= 100 && value <= 355){
        analogWrite(led1, value - 100);
      }

      if (value >= 125 && value <= 380){
        analogWrite(led6, value - 125);
      }

      if (value >= 150 && value <= 405){
        analogWrite(led5, value - 150);
      }      

      delay(velocita);
    }
  }

  if (randNumber==5 || randNumber==11 || randNumber==18){
    
    for (int value = 0; value <= 1000; value += fade){

      if (value <= 255){
        analogWrite(led5, value);
      }

      if (value >= 25 && value <= 280){
        analogWrite(led6, value-25);
      }

      if (value >= 50 && value <= 305){
        analogWrite(led4, value-50);
      }

      if (value >= 75 && value <= 330){
        analogWrite(led7, value-75);
      }

      if (value >= 100 && value <= 355){
        analogWrite(led1, value - 100);
      }

      if (value >= 125 && value <= 380){
        analogWrite(led2, value - 125);
      }

      if (value >= 150 && value <= 405){
        analogWrite(led3, value - 150);
      }      

      delay(velocita);
    }
  }

  if (randNumber==6 || randNumber==12 || randNumber==19){
    
    for (int value = 0; value <= 1000; value += fade){

      if (value <= 255){
        analogWrite(led4, value);
      }

      if (value >= 25 && value <= 280){
        analogWrite(led3, value-25);
      }

      if (value >= 50 && value <= 305){
        analogWrite(led7, value-50);
      }

      if (value >= 75 && value <= 330){
        analogWrite(led2, value-75);
      }

      if (value >= 100 && value <= 355){
        analogWrite(led6, value - 100);
      }

      if (value >= 125 && value <= 380){
        analogWrite(led1, value - 125);
      }

      if (value >= 150 && value <= 405){
        analogWrite(led5, value - 150);
      }      

      delay(velocita);
    }
  }

    if (randNumber==13){
    
    for (int value = 0; value <= maxvalue; value += fade2){

      if (value <= 255){
        analogWrite(led1, value);
      }

      if (value >= 25 && value <= 280){
        analogWrite(led2, value-25);
      }

      if (value >= 50 && value <= 305){
        analogWrite(led4, value-50);
      }

      if (value >= 75 && value <= 330){
        analogWrite(led3, value-75);
      }

      if (value >= 100 && value <= 355){
        analogWrite(led5, value - 100);
      }

      if (value >= 125 && value <= 380){
        analogWrite(led6, value - 125);
      }

      if (value >= 150 && value <= 405){
        analogWrite(led7, value - 150);
      }     

      if (value >= 405 && value <= 630){
        analogWrite(led1, value - 405);
      }

      if (value >= 430 && value <= 655){
        analogWrite(led4, value - 430);
      }

      if (value >= 455 && value <= 680){
        analogWrite(led7, value - 455);
      }  

      delay(velocita);
    }
  }

}