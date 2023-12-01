int led1=2;
int led2=5;
int led3=6;
int led4=9;
int led5=10;
int led6=11;
int led7=12;

int velocita = 40;
int fade = 13;  //diminuire per rallentare, alzare per velocizzare
int fade2 = 40;
int maxvalue=1000;  //mai scendere sotto i 500
int maxvalue2=3000; //mai scendere sotto i 2000
int randNumber=0;

void setup() {

  // initialize serial communication with computer:
  Serial.begin(9600);
  randomSeed(analogRead(0));
}

void loop(){

  randNumber = random(1, 50);
  Serial.println(randNumber);

  if (randNumber==1 || randNumber==8 || randNumber==22){
    
    for (int value = 0; value <= maxvalue; value += fade){

      if (value <= 255){
        analogWrite(led1, value);
      }

      if (value >= 25 && value <= 280){
        analogWrite(led2, value - 25);
      }

      if (value >= 50 && value <= 305){
        analogWrite(led4, value - 50);
      }

      if (value >= 75 && value <= 330){
        analogWrite(led3, value - 75);
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

      if (value >= 405 && value <= 660){
        analogWrite(led1, value - 405);
      }

      if (value >= 430 && value <= 685){
        analogWrite(led4, value - 430);
      }

      if (value >= 455 && value <= 720){
        analogWrite(led7, value - 455);
      }

      delay(velocita);
    }
  }
  
  if (randNumber==2 || randNumber==9 || randNumber==23){
    
    for (int value = 0; value <= maxvalue; value += fade){

      if (value <= 255){
        analogWrite(led4, value);
      }

      if (value >= 25 && value <= 280){
        analogWrite(led3, value - 25);
      }

      if (value >= 50 && value <= 305){
        analogWrite(led7, value - 50);
      }

      if (value >= 75 && value <= 330){
        analogWrite(led2, value - 75);
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

      if (value >= 405 && value <= 660){
        analogWrite(led4, value - 405);
      }

      if (value >= 430 && value <= 685){
        analogWrite(led3, value - 430);
      }

      if (value >= 455 && value <= 710){
        analogWrite(led7, value - 455);
      }

      if (value >= 480 && value <= 735){
        analogWrite(led2, value - 480);
      }

      if (value >= 505 && value <= 760){
        analogWrite(led6, value - 505);
      }

      if (value >= 530 && value <= 785){
        analogWrite(led1, value - 530);
      }

      if (value >= 555 && value <= 810){
        analogWrite(led5, value - 555);
      }      

      delay(velocita);
    }
  }

  if (randNumber==3 || randNumber==10 || randNumber==24){
    
    for (int value = 0; value <= maxvalue; value += fade){

      if (value <= 255){
        analogWrite(led7, value);
      }

      if (value >= 25 && value <= 280){
        analogWrite(led6, value - 25);
      }

      if (value >= 50 && value <= 305){
        analogWrite(led3, value - 50);
      }

      if (value >= 75 && value <= 330){
        analogWrite(led4, value - 75);
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

      if (value >= 405 && value <= 660){
        analogWrite(led7, value - 405);
      }

      if (value >= 430 && value <= 685){
        analogWrite(led4, value - 430);
      }

      if (value >= 455 && value <= 700){
        analogWrite(led1, value - 455);
      }

      delay(velocita);
    }
  }

  if (randNumber==4 || randNumber==11 || randNumber==25){
    
    for (int value = 0; value <= maxvalue; value += fade){

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

      if (value >= 405 && value <= 660){
        analogWrite(led3, value - 405);
      }   

      if (value >= 430 && value <= 685){
        analogWrite(led4, value - 430);
      }

      if (value >= 455 && value <= 710){
        analogWrite(led5, value - 455);
      }   

      delay(velocita);
    }
  }

  if (randNumber==5 || randNumber==12 || randNumber==26){
    
    for (int value = 0; value <= maxvalue; value += fade){

      if (value <= 255){
        analogWrite(led5, value);
      }

      if (value >= 25 && value <= 280){
        analogWrite(led6, value - 25);
      }

      if (value >= 50 && value <= 305){
        analogWrite(led4, value - 50);
      }

      if (value >= 75 && value <= 330){
        analogWrite(led7, value - 75);
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

      if (value >= 405 && value <= 660){
        analogWrite(led5, value - 405);
      }

      if (value >= 430 && value <= 685){
        analogWrite(led4, value - 430);
      }

      if (value >= 455 && value <= 710){
        analogWrite(led3, value - 455);
      }

      delay(velocita);
    }
  }

  if (randNumber==6 || randNumber==13 || randNumber==27){
    
    for (int value = 0; value <= maxvalue; value += fade){

      if (value <= 255){
        analogWrite(led4, value);
      }

      if (value >= 25 && value <= 280){
        analogWrite(led5, value - 25);
      }

      if (value >= 50 && value <= 305){
        analogWrite(led1, value - 50);
      }

      if (value >= 75 && value <= 330){
        analogWrite(led6, value - 75);
      }

      if (value >= 100 && value <= 355){
        analogWrite(led2, value - 100);
      }

      if (value >= 125 && value <= 380){
        analogWrite(led7, value - 125);
      }

      if (value >= 150 && value <= 405){
        analogWrite(led3, value - 150);
      }

      if (value >= 405 && value <= 660){
        analogWrite(led4, value - 405);
      }

      if (value >= 430 && value <= 685){
        analogWrite(led5, value - 430);
      }

      if (value >= 455 && value <= 710){
        analogWrite(led1, value - 455);
      }

      if (value >= 480 && value <= 735){
        analogWrite(led6, value - 480);
      }

      if (value >= 505 && value <= 760){
        analogWrite(led2, value - 505);
      }

      if (value >= 530 && value <= 785){
        analogWrite(led7, value - 530);
      }

      if (value >= 555 && value <= 810){
        analogWrite(led3, value - 555);
      }    

      delay(velocita);
    }
  }

  if (randNumber==7 || randNumber==14 || randNumber==28){
    
    for (int value = 0; value <= maxvalue; value += fade){

      if (value <= 255){
        analogWrite(led4, value);
      }

      if (value >= 25 && value <= 280){
        analogWrite(led2, value - 25);
      }

      if (value >= 50 && value <= 305){
        analogWrite(led6, value - 50);
      }

      if (value >= 75 && value <= 330){
        analogWrite(led1, value - 75);
      }

      if (value >= 100 && value <= 355){
        analogWrite(led7, value - 100);
      }

      if (value >= 125 && value <= 380){
        analogWrite(led3, value - 125);
      }

      if (value >= 150 && value <= 405){
        analogWrite(led5, value - 150);
      }

      if (value >= 405 && value <= 660){
        analogWrite(led4, value - 405);
      }

      if (value >= 430 && value <= 685){
        analogWrite(led2, value - 430);
      }

      if (value >= 455 && value <= 710){
        analogWrite(led6, value - 455);
      }

      if (value >= 480 && value <= 735){
        analogWrite(led1, value - 480);
      }

      if (value >= 505 && value <= 760){
        analogWrite(led7, value - 505);
      }

      if (value >= 530 && value <= 785){
        analogWrite(led3, value - 530);
      }

      if (value >= 555 && value <= 810){
        analogWrite(led5, value - 555);
      }    

      delay(velocita);
    }
  }

  if (randNumber==15){
    
    for (int value = 0; value <= maxvalue2; value += fade2){

      if (value <= 255){
        analogWrite(led1, value);
      }

      if (value >= 25 && value <= 280){
        analogWrite(led2, value - 25);
      }

      if (value >= 50 && value <= 305){
        analogWrite(led4, value - 50);
      }

      if (value >= 75 && value <= 330){
        analogWrite(led3, value - 75);
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

      if (value >= 680 && value <= 905){
        analogWrite(led1, value - 680);
      }

      if (value >= 705 && value <= 930){
        analogWrite(led2, value - 730);
      }

      if (value >= 730 && value <= 955){
        analogWrite(led4, value - 730);
      }

      if (value >= 755 && value <= 980){
        analogWrite(led3, value - 755);
      }

      if (value >= 780 && value <= 1005){
        analogWrite(led5, value - 780);
      }

      if (value >= 805 && value <= 1030){
        analogWrite(led6, value - 805);
      }

      if (value >= 830  && value <= 1055){
        analogWrite(led7, value - 830);
      }     

      if (value >= 1055 && value <= 1310){
        analogWrite(led1, value - 1055);
      }

      if (value >= 1080 && value <= 1335){
        analogWrite(led4, value - 1080);
      }

      if (value >= 1105 && value <= 1360){
        analogWrite(led7, value - 1105);
      }  

      delay(velocita);
    }
  }
  
  if (randNumber==16){
    
    for (int value = 0; value <= maxvalue2; value += fade2){

      if (value <= 255){
        analogWrite(led4, value);
      }

      if (value >= 25 && value <= 280){
        analogWrite(led3, value - 25);
      }

      if (value >= 50 && value <= 305){
        analogWrite(led7, value - 50);
      }

      if (value >= 75 && value <= 330){
        analogWrite(led2, value - 75);
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

      if (value >= 405 && value <= 660){
        analogWrite(led4, value - 405);
      }

      if (value >= 430 && value <= 685){
        analogWrite(led3, value - 430);
      }

      if (value >= 455 && value <= 710){
        analogWrite(led7, value - 455);
      }

      if (value >= 480 && value <= 735){
        analogWrite(led2, value - 480);
      }

      if (value >= 505 && value <= 760){
        analogWrite(led6, value - 505);
      }

      if (value >= 530 && value <= 785){
        analogWrite(led1, value - 530);
      }

      if (value >= 555 && value <= 810){
        analogWrite(led5, value - 595);
      }

      if (value >= 810 && value <= 1065){
        analogWrite(led4, value - 810);
      }

      if (value >= 835 && value <= 1090){
        analogWrite(led3, value - 835);
      }

      if (value >= 860 && value <= 1115){
        analogWrite(led7, value - 860);
      }

      if (value >= 885 && value <= 1140){
        analogWrite(led2, value - 885);
      }

      if (value >= 910 && value <= 1165){
        analogWrite(led6, value - 910);
      }

      if (value >= 935 && value <= 1190){
        analogWrite(led1, value - 935);
      }

      if (value >= 960 && value <= 1215){
        analogWrite(led5, value - 960);
      }

      if (value >= 1215 && value <= 1480){
        analogWrite(led4, value - 1215);
      }

      if (value >= 1240 && value <= 1485){
        analogWrite(led3, value - 1240);
      }

      if (value >= 1265 && value <= 1520){
        analogWrite(led7, value - 1265);
      }

      if (value >= 1290 && value <= 1545){
        analogWrite(led2, value - 1290);
      }

      if (value >= 1315 && value <= 1570){
        analogWrite(led6, value - 1315);
      }

      if (value >= 1340 && value <= 1595){
        analogWrite(led1, value - 1330);
      }

      if (value >= 1365 && value <= 1620){
        analogWrite(led5, value - 1365);
      }


      delay(velocita);
    }
  }

  if (randNumber==17){
    
    for (int value = 0; value <= maxvalue2; value += fade2){

      if (value <= 255){
        analogWrite(led7, value);
      }

      if (value >= 25 && value <= 280){
        analogWrite(led6, value - 25);
      }

      if (value >= 50 && value <= 305){
        analogWrite(led3, value - 50);
      }

      if (value >= 75 && value <= 330){
        analogWrite(led4, value - 75);
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

      if (value >= 405 && value <= 660){
        analogWrite(led7, value - 405);
      }

      if (value >= 430 && value <= 685){
        analogWrite(led4, value - 430);
      }

      if (value >= 455 && value <= 710){
        analogWrite(led1, value - 455);
      }

      if (value >= 710 && value <= 965){
        analogWrite(led7, value - 710);
      }

      if (value >= 735 && value <= 990){
        analogWrite(led6, value - 735);
      }

      if (value >= 760 && value <= 1015){
        analogWrite(led3, value - 760);
      }

      if (value >= 785 && value <= 1040){
        analogWrite(led4, value - 785);
      }

      if (value >= 810 && value <= 1065){
        analogWrite(led2, value - 810);
      }

      if (value >= 835 && value <= 1090){
        analogWrite(led5, value - 835);
      }

      if (value >= 860 && value <= 1115){
        analogWrite(led1, value - 860);
      }

      if (value >= 1115 && value <= 1370){
        analogWrite(led7, value - 1115);
      }

      if (value >= 1140 && value <= 1395){
        analogWrite(led4, value - 1140);
      }

      if (value >= 1165 && value <= 1420){
        analogWrite(led1, value - 1165);
      }

      delay(velocita);
    }
  }

  if (randNumber==18){
    
    for (int value = 0; value <= maxvalue2; value += fade2){

      if (value <= 255){
        analogWrite(led3, value);
      }

      if (value >= 25 && value <= 280){
        analogWrite(led2, value - 25);
      }

      if (value >= 50 && value <= 305){
        analogWrite(led7, value - 50);
      }

      if (value >= 75 && value <= 330){
        analogWrite(led4, value - 75);
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

      if (value >= 405 && value <= 660){
        analogWrite(led3, value - 405);
      }   

      if (value >= 430 && value <= 685){
        analogWrite(led4, value - 430);
      }

      if (value >= 455 && value <= 710){
        analogWrite(led5, value - 455);
      }   

      if (value >= 710 && value <= 965){
        analogWrite(led3, value - 710);
      }

      if (value >= 735 && value <= 990){
        analogWrite(led2, value - 735);
      }

      if (value >= 760 && value <= 1015){
        analogWrite(led7, value - 760);
      }

      if (value >= 785 && value <= 1040){
        analogWrite(led4, value - 785);
      }

      if (value >= 810 && value <= 1065){
        analogWrite(led1, value - 810);
      }

      if (value >= 835 && value <= 1090){
        analogWrite(led6, value - 835);
      }

      if (value >= 860 && value <= 1115){
        analogWrite(led5, value - 860);
      }

      if (value >= 1115 && value <= 1370){
        analogWrite(led3, value - 1115);
      }   

      if (value >= 1140 && value <= 1395){
        analogWrite(led4, value - 1140);
      }

      if (value >= 1165 && value <= 1420){
        analogWrite(led5, value - 1165);
      }

      delay(velocita);
    }
  }

  if (randNumber==19){
    
    for (int value = 0; value <= maxvalue2; value += fade2){

      if (value <= 255){
        analogWrite(led5, value);
      }

      if (value >= 25 && value <= 280){
        analogWrite(led6, value - 25);
      }

      if (value >= 50 && value <= 305){
        analogWrite(led4, value - 50);
      }

      if (value >= 75 && value <= 330){
        analogWrite(led7, value - 75);
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

      if (value >= 405 && value <= 660){
        analogWrite(led5, value - 405);
      }

      if (value >= 430 && value <= 685){
        analogWrite(led4, value - 430);
      }

      if (value >= 455 && value <= 710){
        analogWrite(led3, value - 455);
      }

      if (value >= 710 && value <= 965){
        analogWrite(led5, value - 710);
      }
      
      if (value >= 735 && value <= 990){
        analogWrite(led6, value - 735);
      }

      if (value >= 760 && value <= 1015){
        analogWrite(led4, value - 760);
      }

      if (value >= 785 && value <= 1040){
        analogWrite(led7, value - 785);
      }

      if (value >= 810 && value <= 1065){
        analogWrite(led1, value - 810);
      }

      if (value >= 835 && value <= 1090){
        analogWrite(led2, value - 835);
      }

      if (value >= 860 && value <= 1115){
        analogWrite(led3, value - 150);
      }

      if (value >= 1115 && value <= 1370){
        analogWrite(led5, value - 1115);
      }

      if (value >= 1140 && value <= 1395){
        analogWrite(led4, value - 1140);
      }

      if (value >= 1165 && value <= 1420){
        analogWrite(led3, value - 1165);
      }

      delay(velocita);
    }
  }

  if (randNumber==20){
    
    for (int value = 0; value <= maxvalue2; value += fade2){

      if (value <= 255){
        analogWrite(led4, value);
      }

      if (value >= 25 && value <= 280){
        analogWrite(led5, value - 25);
      }

      if (value >= 50 && value <= 305){
        analogWrite(led1, value - 50);
      }

      if (value >= 75 && value <= 330){
        analogWrite(led6, value - 75);
      }

      if (value >= 100 && value <= 355){
        analogWrite(led2, value - 100);
      }

      if (value >= 125 && value <= 380){
        analogWrite(led7, value - 125);
      }

      if (value >= 150 && value <= 405){
        analogWrite(led3, value - 150);
      }

      if (value >= 405 && value <= 660){
        analogWrite(led4, value - 405);
      }

      if (value >= 430 && value <= 685){
        analogWrite(led5, value - 430);
      }

      if (value >= 455 && value <= 710){
        analogWrite(led1, value - 455);
      }

      if (value >= 480 && value <= 735){
        analogWrite(led6, value - 480);
      }

      if (value >= 505 && value <= 760){
        analogWrite(led2, value - 505);
      }

      if (value >= 530 && value <= 785){
        analogWrite(led7, value - 530);
      }

      if (value >= 555 && value <= 810){
        analogWrite(led3, value - 555);
      }

      if (value >= 810 && value <= 1065){
        analogWrite(led4, value - 810);
      }

      if (value >= 835 && value <= 1090){
        analogWrite(led5, value - 835);
      }

      if (value >= 860 && value <= 1115){
        analogWrite(led1, value - 860);
      }

      if (value >= 885 && value <= 1140){
        analogWrite(led6, value - 885);
      }

      if (value >= 910 && value <= 1165){
        analogWrite(led2, value - 910);
      }

      if (value >= 935 && value <= 1190){
        analogWrite(led7, value - 935);
      }

      if (value >= 960 && value <= 1215){
        analogWrite(led3, value - 960);
      }

      if (value >= 1215 && value <= 1470){
        analogWrite(led4, value - 1215);
      }

      if (value >= 1240 && value <= 1495){
        analogWrite(led5, value - 1240);
      }

      if (value >= 1265 && value <= 1520){
        analogWrite(led1, value - 1265);
      }

      if (value >= 1290 && value <= 1545){
        analogWrite(led6, value - 1290);
      }

      if (value >= 1315 && value <= 1570){
        analogWrite(led2, value - 1315);
      }

      if (value >= 1340 && value <= 1595){
        analogWrite(led7, value - 1340);
      }

      if (value >= 1365 && value <= 1620){
        analogWrite(led3, value - 1365);
      }

      delay(velocita);
    }
  }

  if (randNumber==21){
    
    for (int value = 0; value <= maxvalue2; value += fade2){

      if (value <= 255){
        analogWrite(led4, value);
      }

      if (value >= 25 && value <= 280){
        analogWrite(led2, value - 25);
      }

      if (value >= 50 && value <= 305){
        analogWrite(led6, value - 50);
      }

      if (value >= 75 && value <= 330){
        analogWrite(led1, value - 75);
      }

      if (value >= 100 && value <= 355){
        analogWrite(led7, value - 100);
      }

      if (value >= 125 && value <= 380){
        analogWrite(led3, value - 125);
      }

      if (value >= 150 && value <= 405){
        analogWrite(led5, value - 150);
      }

      if (value >= 405 && value <= 660){
        analogWrite(led4, value - 405);
      }

      if (value >= 430 && value <= 685){
        analogWrite(led2, value - 430);
      }

      if (value >= 455 && value <= 710){
        analogWrite(led6, value - 455);
      }

      if (value >= 480 && value <= 735){
        analogWrite(led1, value - 480);
      }

      if (value >= 505 && value <= 760){
        analogWrite(led7, value - 505);
      }

      if (value >= 530 && value <= 785){
        analogWrite(led3, value - 530);
      }

      if (value >= 555 && value <= 810){
        analogWrite(led5, value - 555);
      }

      if (value >= 810 && value <= 1065){
        analogWrite(led4, value - 810);
      }

      if (value >= 835 && value <= 1090){
        analogWrite(led2, value - 835);
      }

      if (value >= 860 && value <= 1115){
        analogWrite(led6, value - 860);
      }

      if (value >= 885 && value <= 1140){
        analogWrite(led1, value - 885);
      }

      if (value >= 910 && value <= 1165){
        analogWrite(led7, value - 910);
      }

      if (value >= 935 && value <= 1190){
        analogWrite(led3, value - 935);
      }

      if (value >= 960 && value <= 1215){
        analogWrite(led5, value - 960);
      }

      if (value >= 1215 && value <= 1470){
        analogWrite(led4, value - 1215);
      }

      if (value >= 1240 && value <= 1495){
        analogWrite(led2, value - 1240);
      }

      if (value >= 1265 && value <= 1520){
        analogWrite(led6, value - 1265);
      }

      if (value >= 1290 && value <= 1545){
        analogWrite(led1, value - 1290);
      }

      if (value >= 1315 && value <= 1570){
        analogWrite(led7, value - 1315);
      }

      if (value >= 1340 && value <= 1595){
        analogWrite(led3, value - 1340);
      }

      if (value >= 1365 && value <= 1620){
        analogWrite(led5, value - 1365);
      } 

      delay(velocita);
    }
  }

  else {
    
    for (int value = 75; value >= 75; value -= fade){

        analogWrite(led1, value);
        analogWrite(led2, value);
        analogWrite(led3, value);
        analogWrite(led4, value);
        analogWrite(led5, value);
        analogWrite(led6, value);
        analogWrite(led7, value);
      }

    delay(velocita);
  }
}