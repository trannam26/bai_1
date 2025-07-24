#include<arduino.h>

int chuoi[] = {15,16,17,18,19,21,22};

void setup()
{
  for( int i=0 ; i < 7 ; i++) 
  {
     pinMode(chuoi[i],OUTPUT);
  }

}

void tat()
{
  for( int i=0 ; i <7 ; i++)
  {
    digitalWrite(chuoi[i],LOW);
  }
}

void bat()
{
  for( int j=0 ; j < 7 ; j++)
  {
    digitalWrite(chuoi[j],HIGH);
  }
}

void loop()
{
  bat();
  delay(250);
  tat();
  delay(240);

  for( int i=0 ; i < 7 ; i++)
  {
    digitalWrite(chuoi[i],HIGH);
    delay(200);
    if(i == 6)
    {
      break;
    }
    
  }
  for( int j=7 ; j > 0 ; j--)
  {
    digitalWrite(chuoi[j],LOW);
    delay(200);

  }

  bat();
  delay(250);
  tat();
  delay(150);
  
  for (int i = 0; i < 7; i++) 
 {
  if (i % 2 == 0) {  
    digitalWrite(chuoi[i], HIGH);
    delay(250);
    digitalWrite(chuoi[i], LOW);  
  }
 }
 delay(200);

for (int i = 0; i < 7; i++) {
  if (i % 2 == 1) {  
    digitalWrite(chuoi[i], HIGH);
    delay(250);
    digitalWrite(chuoi[i], LOW);   
  }
}
 delay(200);
 for (int i = 0; i < 7; i++) {
    if (i % 2 == 0) {
      digitalWrite(chuoi[i], HIGH);
    } else {
      digitalWrite(chuoi[i], LOW);
    }
  }
  delay(500);

  
  for (int i = 0; i < 7; i++) {
    if (i % 2 == 1) {
      digitalWrite(chuoi[i], HIGH);
    } else {
      digitalWrite(chuoi[i], LOW);
    }
  }
  delay(500);
  int giua = 7 / 2;  

  for (int i = 0; i <= giua; i++) {
    if (giua - i >= 0) {
      digitalWrite(chuoi[giua - i], HIGH);
    }
    if (giua + i < 7) {
      digitalWrite(chuoi[giua + i], HIGH);
    }

    delay(300);  
    
    if (giua - i >= 0) {
      digitalWrite(chuoi[giua - i], LOW);
    }
    if (giua + i < 7 ) {
      digitalWrite(chuoi[giua + i], LOW);
    }
  }

  delay(500);  
}


