int trigpin=9;
int echopin=10;
int kirmizi=6;
int sari=5;
int mavi=4;
int buzzer=7;

long sure;
long mesafe;


void setup() {
pinMode(trigpin,OUTPUT);
pinMode(echopin,INPUT);
pinMode(kirmizi,OUTPUT);
pinMode(sari,OUTPUT);   
pinMode(mavi,OUTPUT);
pinMode(buzzer,OUTPUT);
Serial.begin(9600);

}

void loop() {
digitalWrite(trigpin,LOW);
delayMicroseconds(5);
digitalWrite(trigpin,HIGH);
delayMicroseconds(1000);
digitalWrite(trigpin,LOW);

sure=pulseIn(echopin,HIGH);
mesafe=(sure/2)/29.1;
Serial.println(mesafe);

if(mesafe>=0&&mesafe<5

)
{
digitalWrite(kirmizi,HIGH);
digitalWrite(sari,LOW);
digitalWrite(mavi,LOW);
digitalWrite(buzzer,HIGH);
  
}
 else if(mesafe>=5&&mesafe<15)
 {
digitalWrite(kirmizi,HIGH);
digitalWrite(sari,LOW);
digitalWrite(mavi,LOW);
digitalWrite(buzzer,HIGH);
delay(150);
digitalWrite(kirmizi,LOW);
digitalWrite(buzzer,LOW);
delay(150);
}
else if(mesafe>=15&&mesafe<30)
{
digitalWrite(kirmizi,LOW);
digitalWrite(sari,HIGH);
digitalWrite(mavi,LOW);
digitalWrite(buzzer,HIGH);
delay(250);
digitalWrite(sari,LOW);
digitalWrite(buzzer,LOW);
delay(250);
}
else if(mesafe>=30)
{
digitalWrite(kirmizi,LOW);
digitalWrite(sari,LOW);
digitalWrite(mavi,HIGH);
digitalWrite(buzzer,HIGH);
delay(420);
digitalWrite(mavi,LOW);
digitalWrite(buzzer,LOW);
delay(420);
 }
}
