  int DP=0,A=1,B=2,C=3,D=4,E=5,F=6,G=7;
  int del=500
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
      delay(del);
 //1                            
      digitalWrite(A, LOW);
      //digitalWrite(B, HIGH);      
      //digitalWrite(C, HIGH);      
      digitalWrite(D, LOW);      
      digitalWrite(E, LOW);      
      digitalWrite(F, LOW);      
      digitalWrite(G, LOW);
      digitalWrite(DP, LOW);           
      delay(del);
 //2    
      digitalWrite(A, HIGH);
      //digitalWrite(B, HIGH);      
      digitalWrite(C, LOW);      
      digitalWrite(D, HIGH);      
      digitalWrite(E, HIGH);      
      //digitalWrite(F, HIGH);      
      digitalWrite(G, HIGH);
      digitalWrite(DP, HIGH);           
      delay(del);
 //3                            
      //digitalWrite(A, HIGH);
      //digitalWrite(B, HIGH);      
      digitalWrite(C, HIGH);      
      //digitalWrite(D, HIGH);      
      digitalWrite(E, LOW);      
      //digitalWrite(F, HIGH);      
      digitalWrite(G, HIGH);
      digitalWrite(DP, LOW);           
      delay(del);
 //4                       
      digitalWrite(A, LOW);
      digitalWrite(B, HIGH);      
      digitalWrite(C, HIGH);      
      digitalWrite(D, LOW);      
      digitalWrite(E, LOW);      
      digitalWrite(F, HIGH);      
      digitalWrite(G, HIGH);
      digitalWrite(DP, HIGH);           
      delay(del);
  //5
      digitalWrite(A, HIGH);
      digitalWrite(B, LOW);      
      digitalWrite(C, HIGH);      
      digitalWrite(D, HIGH);      
      digitalWrite(E, LOW);      
      digitalWrite(F, HIGH);      
      digitalWrite(G, HIGH);
      digitalWrite(DP, LOW);           
      delay(del);                       
  //6                           
      digitalWrite(A, HIGH);
      digitalWrite(B, LOW);      
      digitalWrite(C, HIGH);      
      digitalWrite(D, HIGH);      
      digitalWrite(E, HIGH);      
      digitalWrite(F, HIGH);      
      digitalWrite(G, HIGH);
      digitalWrite(DP, HIGH);           
      delay(del);                       
  //7
      digitalWrite(A, HIGH);
      digitalWrite(B, HIGH);      
      digitalWrite(C, HIGH);      
      digitalWrite(D, LOW);      
      digitalWrite(E, LOW);      
      digitalWrite(F, LOW);      
      digitalWrite(G, LOW);
      digitalWrite(DP, LOW);           
      delay(del);                       
  //8
      digitalWrite(A, HIGH);
      digitalWrite(B, HIGH);      
      digitalWrite(C, HIGH);      
      digitalWrite(D, HIGH);      
      digitalWrite(E, HIGH);      
      digitalWrite(F, HIGH);      
      digitalWrite(G, HIGH);
      digitalWrite(DP, HIGH);           
      delay(del);
   //9                       
      digitalWrite(A, HIGH);
      digitalWrite(B, HIGH);      
      digitalWrite(C, HIGH);      
      digitalWrite(D, HIGH);      
      digitalWrite(E, LOW);      
      digitalWrite(F, HIGH);      
      digitalWrite(G, HIGH);
      digitalWrite(DP, LOW);           
      delay(del);                       
      
        
 


}
