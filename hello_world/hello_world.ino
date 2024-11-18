
void setup() {

  Serial.begin(9600);
}

void loop() {
  char val = Serial.read();
  Serial.println(val);
}