const int trigPin = 7;
const int echoPin = 6;
const int buzzerPin = 5;

void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(buzzerPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  long duration = pulseIn(echoPin, HIGH);
  int distance = duration * 0.034 / 2;

  Serial.println(distance);

  if (distance >= 60 && distance < 10) {
    tone(buzzerPin, 2093, 800);
    delay(1000);
  } else {
    tone(buzzerPin, 2093, 800);
    delay(1500);
  }
}
