int led = 13;

extern int sum(int a, int b);

void setup() {

  Serial.begin(9600);
  Serial.println("hello");
  Serial.print(sum(99,1),DEC);
  pinMode(led, OUTPUT);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(led, HIGH);
  delay(1000);
  digitalWrite(led, LOW);
  delay(1000);
}
