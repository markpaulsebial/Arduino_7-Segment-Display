  int DP=0,A=1,B=2,C=3,D=4,E=5,F=6,G=7;
  
void setup() {

  
  
  pinMode(LED_BUILTIN, OUTPUT);
}
// the loop function runs over and over again forever
void loop() {
  //0
      digitalWrite(A, HIGH);
      digitalWrite(B, HIGH);      
      digitalWrite(C, HIGH);      
      digitalWrite(D, HIGH);      
      digitalWrite(E, HIGH);      
      digitalWrite(F, HIGH);      
      digitalWrite(G, LOW);
      digitalWrite(DP, HIGH);           
      delay(1000);
 //1                            
      digitalWrite(A, LOW);
      //digitalWrite(B, HIGH);      
      //digitalWrite(C, HIGH);      
      digitalWrite(D, LOW);      
      digitalWrite(E, LOW);      
      digitalWrite(F, LOW);      
      digitalWrite(G, LOW);
      digitalWrite(DP, LOW);           
      delay(1000);
 //2    
      digitalWrite(A, HIGH);
      //digitalWrite(B, HIGH);      
      digitalWrite(C, LOW);      
      digitalWrite(D, HIGH);      
      digitalWrite(E, HIGH);      
      //digitalWrite(F, HIGH);      
      digitalWrite(G, HIGH);
      digitalWrite(DP, HIGH);           
      delay(1000);
 //3                            
      //digitalWrite(A, HIGH);
      //digitalWrite(B, HIGH);      
      digitalWrite(C, HIGH);      
      //digitalWrite(D, HIGH);      
      digitalWrite(E, LOW);      
      //digitalWrite(F, HIGH);      
      digitalWrite(G, HIGH);
      digitalWrite(DP, LOW);           
      delay(1000);
 //4                       
      digitalWrite(A, LOW);
      digitalWrite(B, HIGH);      
      digitalWrite(C, HIGH);      
      digitalWrite(D, LOW);      
      digitalWrite(E, LOW);      
      digitalWrite(F, HIGH);      
      digitalWrite(G, HIGH);
      digitalWrite(DP, HIGH);           
      delay(1000);
  //5
      digitalWrite(A, HIGH);
      digitalWrite(B, LOW);      
      digitalWrite(C, HIGH);      
      digitalWrite(D, HIGH);      
      digitalWrite(E, LOW);      
      digitalWrite(F, HIGH);      
      digitalWrite(G, HIGH);
      digitalWrite(DP, LOW);           
      delay(1000);                       
  //6                           
      digitalWrite(A, HIGH);
      digitalWrite(B, LOW);      
      digitalWrite(C, HIGH);      
      digitalWrite(D, HIGH);      
      digitalWrite(E, HIGH);      
      digitalWrite(F, HIGH);      
      digitalWrite(G, HIGH);
      digitalWrite(DP, HIGH);           
      delay(1000);                       
  //7
      digitalWrite(A, HIGH);
      digitalWrite(B, HIGH);      
      digitalWrite(C, HIGH);      
      digitalWrite(D, LOW);      
      digitalWrite(E, LOW);      
      digitalWrite(F, LOW);      
      digitalWrite(G, LOW);
      digitalWrite(DP, LOW);           
      delay(1000);                       
  //8
      digitalWrite(A, HIGH);
      digitalWrite(B, HIGH);      
      digitalWrite(C, HIGH);      
      digitalWrite(D, HIGH);      
      digitalWrite(E, HIGH);      
      digitalWrite(F, HIGH);      
      digitalWrite(G, HIGH);
      digitalWrite(DP, HIGH);           
      delay(1000);
   //9                       
      digitalWrite(A, HIGH);
      digitalWrite(B, HIGH);      
      digitalWrite(C, HIGH);      
      digitalWrite(D, HIGH);      
      digitalWrite(E, LOW);      
      digitalWrite(F, HIGH);      
      digitalWrite(G, HIGH);
      digitalWrite(DP, LOW);           
      delay(1000);                       
      
        
 


}
