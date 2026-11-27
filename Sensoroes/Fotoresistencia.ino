//Grupo 7 Ayra, Bocalandro, Pinkus
#define Ldr 32

void setup() {
  Serial.begin(115200);
  
  pinMode(Ldr, INPUT);
}

void loop() {
  int Luz = analogRead(Ldr);
  
  Serial.print("luz: ");
  Serial.println(Luz);
  
  delay(100);
}
