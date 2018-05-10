void setup() {
  // put your setup code here, to run once:
  pinMode (6, OUTPUT);
  pinMode (7, OUTPUT);
  pinMode (8, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  int x = analogRead (2);
  if ( x < 600 and x > 400){
    digitalWrite (6, HIGH);
  }
  else {
    digitalWrite (6, LOW);
  }
    
    
  if ( x > 600) {
    digitalWrite (7, HIGH);
  }
  else {
    digitalWrite (7, LOW);
  }
    
  
  if ( x > 800) {
    digitalWrite (8, HIGH);
  }
  else {
    digitalWrite (8, LOW);
  }
    
    
}
