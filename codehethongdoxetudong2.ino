const int trig = 3;
const int echo = 2;
const int trig1 = 5;
const int echo1 = 4;
const int trig2 = 7;
const int echo2 = 6;
const int trig3 = 9;
const int echo3 = 8;
const int trig4 = 11;
const int echo4 = 10;
const int LED = 12;
void setup()
{
  Serial.begin (9600);
  pinMode(trig,OUTPUT);
  pinMode(echo, INPUT);
  pinMode(trig1,OUTPUT);
  pinMode(echo1, INPUT);
  pinMode(trig2,OUTPUT);
  pinMode(echo2, INPUT);
  pinMode(trig3,OUTPUT);
  pinMode(echo3, INPUT);
  pinMode(trig4,OUTPUT);
  pinMode(echo4, INPUT);
  
}

void loop()
{
  unsigned long duration;
  unsigned long duration1;
  unsigned long duration2;
  unsigned long duration3;
  unsigned long duration4;
  int distance;
  int distance1;
  int distance2;
  int distance3;
  int distance4;
  digitalWrite(trig,0);
  delayMicroseconds (2);
  digitalWrite(trig,1);
  delayMicroseconds (5);
  digitalWrite (trig,0);
  digitalWrite(trig1,0);
  delayMicroseconds (2);
  digitalWrite(trig1,1);
  delayMicroseconds (5);
  digitalWrite (trig1,0);
  digitalWrite(trig2,0);
  delayMicroseconds (2);
  digitalWrite(trig2,1);
  delayMicroseconds (5);
  digitalWrite (trig2,0);
  digitalWrite(trig3,0);
  delayMicroseconds (2);
  digitalWrite(trig3,1);
  delayMicroseconds (5);
  digitalWrite (trig3,0);
  digitalWrite(trig4,0);
  delayMicroseconds (2);
  digitalWrite(trig4,1);
  delayMicroseconds (5);
  digitalWrite (trig4,0);


  duration = pulseIn (echo,HIGH);
  duration1 = pulseIn (echo1,HIGH);
  duration2 = pulseIn (echo2,HIGH);
  duration3 = pulseIn (echo3,HIGH);
  duration4 = pulseIn (echo4,HIGH);

  distance = int(duration/2/29.412);
  distance1 = int(duration1/2/29.412);
  distance2 = int(duration2/2/29.412);
  distance3 = int(duration3/2/29.412);
  distance4 = int(duration4/2/29.412);


  Serial.println(distance);
  Serial.println("cm");
  Serial.println(distance1);
  Serial.println("cm");
  Serial.println(distance2);
  Serial.println("cm");
  Serial.println(distance3);
  Serial.println("cm");
  Serial.println(distance4);
  Serial.println("cm");
  delay(200);
}

  
