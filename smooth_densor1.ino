
    
  
  

  
  
  
  
  
  
  
  
  
  
int red =8;
int yellow =9;
int green =10;
int button =2;

int reading   = 0;
int x = 0;

void setup() {
  pinMode(red, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(button, INPUT);
}

void loop() {

  reading=digitalRead(button);
  if (reading==1){
  x++;
    if (x==1){
    digitalWrite(red,1);
      delay(150);
    
    }
    else if (x==2){
    
    digitalWrite(red,1);
    digitalWrite(yellow,1);  
      delay(150);
    }
    else if(x==3){
    digitalWrite(red,1);
    digitalWrite(yellow,1);
    digitalWrite(green,1);
      delay(150);
      
      
    }
    else if (x==4){
    digitalWrite(red,0);
      digitalWrite(yellow,0);
      digitalWrite(green,0);
    x=0;
      delay(200);
    
    
    }
    
        
    
    
        }
  }
  
  
  
  
  
  

 
  

