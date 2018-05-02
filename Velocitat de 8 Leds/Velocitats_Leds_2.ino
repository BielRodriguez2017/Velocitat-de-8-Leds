/**********************************************************************************
**                                                                               **
**                              Array de 8 LEDs                                  **
**                                                                               **
**                                                                               **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************
const int led0 = 2;          // donar nom al pin 5 de l’Arduino
const int led1 = 3;          // donar nom al pin 6 de l’Arduino
const int led2 = 4;          // donar nom al pin 7 de l’Arduino
const int led3 = 5;          // donar nom al pin 8 de l’Arduino
const int led4 = 6;          // donar nom al pin 9 de l’Arduino
const int led5 = 7;         // donar nom al pin 10 de l’Arduino
const int led6 = 8;         // donar nom al pin 11 de l’Arduino
const int led7 = 9;
const int led8 = 10;
const int led9 = 11;
const int led10 = 12;
const int led11 = 13;                                      // donar nom al pin 12 de l’Arduino
const int pot0 = A0;
int velocitat = 20;          // velocitat de l'acció en ms
int valPot0;    
//********** Setup ****************************************************************
void setup()
{
  pinMode(led0, OUTPUT);     // definir el pin 5 com una sortida
  pinMode(led1, OUTPUT);     // definir el pin 6 com una sortida
  pinMode(led2, OUTPUT);     // definir el pin 7 com una sortida
  pinMode(led3, OUTPUT);     // definir el pin 8 com una sortida
  pinMode(led4, OUTPUT);     // definir el pin 9 com una sortida
  pinMode(led5, OUTPUT);     // definir el pin 10 com una sortida
  pinMode(led6, OUTPUT);     // definir el pin 11 com una sortida
  pinMode(led7, OUTPUT);
  pinMode(led8, OUTPUT);
  pinMode(led9, OUTPUT);
  pinMode(led10, OUTPUT);
  pinMode(led11, OUTPUT);
 
  // definir el pin 12 com una sortida
}

//********** Loop *****************************************************************
void loop()
{
   valPot0 = analogRead(pot0);   // llegir valor del potenciòmetre
  velocitat = valPot0;     // actualitzar velocitat amb el valor del potenciòmetre


  digitalWrite(led0, HIGH);    
  digitalWrite(led1, HIGH);    
  digitalWrite(led2, LOW);    
  digitalWrite(led3, LOW);    
  digitalWrite(led4, LOW);    
  digitalWrite(led5, LOW);    
  digitalWrite(led6, LOW);    
  digitalWrite(led8, LOW);
  digitalWrite(led9, LOW);
  digitalWrite(led10, HIGH);
  digitalWrite(led11, HIGH);
  
  
  delay(velocitat);                  
  
  digitalWrite(led0, LOW);    
  digitalWrite(led1, HIGH);    
  digitalWrite(led2, HIGH);    
  digitalWrite(led3, LOW);    
  digitalWrite(led4, LOW);    
  digitalWrite(led5, LOW);    
  digitalWrite(led6, LOW);    
  digitalWrite(led7, LOW);
  digitalWrite(led8, LOW);
  digitalWrite(led9, HIGH);
  digitalWrite(led10, HIGH);
  digitalWrite(led11, LOW);
  
  delay(velocitat);           


  digitalWrite(led0, LOW);    
  digitalWrite(led1, LOW);    
  digitalWrite(led2, HIGH);    
  digitalWrite(led3, HIGH);    
  digitalWrite(led4, LOW);    
  digitalWrite(led5, LOW);    
  digitalWrite(led6, LOW);    
  digitalWrite(led7, LOW);
  digitalWrite(led8, HIGH);
  digitalWrite(led9, HIGH);
  digitalWrite(led10, LOW);
  digitalWrite(led11, LOW);
  
  delay(velocitat);  


  digitalWrite(led0, LOW);    
  digitalWrite(led1, LOW);    
  digitalWrite(led2, LOW);    
  digitalWrite(led3, HIGH);    
  digitalWrite(led4, HIGH);    
  digitalWrite(led5, LOW);    
  digitalWrite(led6, HIGH);    
  digitalWrite(led7, HIGH);
  digitalWrite(led8, LOW);
  digitalWrite(led9, LOW);
  digitalWrite(led10, LOW);
  digitalWrite(led11, LOW);
  
  delay(velocitat); 

   digitalWrite(led0, LOW);    
  digitalWrite(led1, LOW);    
  digitalWrite(led2, LOW);    
  digitalWrite(led3, HIGH);    
  digitalWrite(led4, HIGH);    
  digitalWrite(led5, LOW);    
  digitalWrite(led6, HIGH);    
  digitalWrite(led7, HIGH);
  digitalWrite(led8, LOW);
  digitalWrite(led9, LOW);
  digitalWrite(led10, LOW);
  digitalWrite(led11, LOW);
  
  delay(velocitat); 


  digitalWrite(led0, LOW);    
  digitalWrite(led1, LOW);    
  digitalWrite(led2, HIGH);    
  digitalWrite(led3, HIGH);    
  digitalWrite(led4, LOW);    
  digitalWrite(led5, LOW);    
  digitalWrite(led6, LOW);    
  digitalWrite(led7, LOW);
  digitalWrite(led8, HIGH);
  digitalWrite(led9, HIGH);
  digitalWrite(led10, LOW);
  digitalWrite(led11, LOW);
  
  delay(velocitat); 


  digitalWrite(led0, LOW);    
  digitalWrite(led1, HIGH);    
  digitalWrite(led2, HIGH);    
  digitalWrite(led3, LOW);    
  digitalWrite(led4, LOW);    
  digitalWrite(led5, LOW);    
  digitalWrite(led6, LOW);    
  digitalWrite(led7, LOW);
  digitalWrite(led8, LOW);
  digitalWrite(led9, HIGH);
  digitalWrite(led10, HIGH);
  digitalWrite(led11, LOW);
  
  delay(velocitat);  
  
  digitalWrite(led0, HIGH);    
  digitalWrite(led1, HIGH);    
  digitalWrite(led2, LOW);    
  digitalWrite(led3, LOW);    
  digitalWrite(led4, LOW);    
  digitalWrite(led5, LOW);    
  digitalWrite(led6, LOW);    
  digitalWrite(led8, LOW);
  digitalWrite(led9, LOW);
  digitalWrite(led10, HIGH);
  digitalWrite(led11, HIGH);
  
  
  delay(velocitat);  
  
}

//********** Funcions *************************************************************
