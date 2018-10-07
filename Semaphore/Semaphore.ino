/*
  Semaphore

  Simple applications with LEDs to help students
  understand digitalWrite and delay
*/

int ledRed = 11;
int ledYellow = 12;
int ledGreen = 13;

// the setup routine runs once when you press reset:
void setup() {
  pinMode(ledRed, OUTPUT);
  pinMode(ledYellow, OUTPUT);
  pinMode(ledGreen, OUTPUT);
}

// the loop routine runs over and over again forever:
void loop() {
  digitalWrite(ledRed, HIGH);   // turn the LED on (HIGH is the voltage level)
    delay(4000);                       // wait for 4 second
  digitalWrite(ledRed, LOW);    
    delay(500);                       
  
  digitalWrite(ledYellow, HIGH);   
    delay(2000);                       
  digitalWrite(ledYellow, LOW);    
  
  digitalWrite(ledGreen, HIGH);   
    delay(4000);                       
  digitalWrite(ledGreen, LOW);    
    delay(500);                       
}
