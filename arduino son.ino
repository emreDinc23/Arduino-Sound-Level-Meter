const int ledPin =8;
const int ledPin1 =4;
const int ledPin2 =5;
const int buzzerPin=3;
int value = 0;
const int treshold = 60;
const int treshold1 = 130;
const int treshold2 = 200;
const int sensorPin=A0;
void setup() {
 pinMode(ledPin,OUTPUT);
 pinMode(ledPin1,OUTPUT);
 pinMode(ledPin2,OUTPUT);
 Serial.begin(9600);
 digitalWrite(ledPin,LOW);
 digitalWrite(ledPin1,LOW);
 digitalWrite(ledPin2,LOW);
 pinMode(buzzerPin,OUTPUT);
}
void loop() {
    value = analogRead(sensorPin);
  if(value>treshold&&value<treshold1){
    Serial.println(value);
    digitalWrite(ledPin,HIGH);
    delay(1000);
    digitalWrite(ledPin,LOW);
    digitalWrite(buzzerPin,HIGH);
    delay(2000);
    digitalWrite(buzzerPin,LOW);
    
  }
  if(value>treshold1&&value<treshold2){
    Serial.println(value);
    digitalWrite(ledPin1,HIGH);
    delay(1000);
    digitalWrite(ledPin1,LOW);
    digitalWrite(buzzerPin,HIGH);
    delay(2000);
    digitalWrite(buzzerPin,LOW);
    
  }
  if(value>treshold2){
    Serial.println(value);
    digitalWrite(ledPin2,HIGH);
    delay(1000);
    digitalWrite(ledPin2,LOW);
    digitalWrite(buzzerPin,HIGH);
    delay(2000);
    digitalWrite(buzzerPin,LOW);
    
  }
  
 

}
