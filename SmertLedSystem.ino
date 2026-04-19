/* * Smart LED Alert System
 * SoftGrow Tech Internship
 */

const int trigPin = 9;
const int echoPin = 10;
const int ledPin = 13; 

void setup() {
  Serial.begin(9600);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // Triggering the sensor
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  long duration = pulseIn(echoPin, HIGH);
  int distance = duration * 0.034 / 2;

  // Print to monitor to see if sensor is working
  Serial.print("Distance: ");
  Serial.println(distance);

  // Logic: LED will turn ON if distance is less than 20cm
  if (distance > 0 && distance < 20) {
    digitalWrite(ledPin, HIGH); 
  } else {
    digitalWrite(ledPin, LOW);
  }
  delay(100);
}