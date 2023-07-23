int sensor = A0;
int buzzer = 2;
int val = 0;
 
void setup() {
Serial.begin(9600);
pinMode(sensor, INPUT);
pinMode(buzzer, OUTPUT);
}
 
void loop() {
val = analogRead(sensor);
Serial.println(val);
if (val > 100){
digitalWrite(buzzer, LOW);
Serial.println("No Water");
}else{
  delay(4000);
digitalWrite(buzzer, HIGH);
Serial.println("Detected Water");
}
delay(500);
}