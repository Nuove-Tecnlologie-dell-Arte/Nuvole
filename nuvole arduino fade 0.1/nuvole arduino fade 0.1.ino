int led1=2;
int led2=3;
int led3=4;
int led4=5;
int led5=6;
int led6=7;
int led7=8;

int velocita = 40;
int fade = 10;
int randNumber=0;

void setup() {

  // initialize serial communication with computer:
  Serial.begin(9600);
  randomSeed(12);
}

void loop(){

  randNumber = random(1, 6);
  Serial.println(randNumber);

  if (randNumber==1){
    
    for (int value = 0; value <= 1000; value += fade){

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

      delay(velocita);
    }
  }
  
  if (randNumber==2){
    
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

  if (randNumber==3){
    
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
  if (randNumber==4){
    
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

  if (randNumber==5){
    
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

  if (randNumber==6){
    
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

}