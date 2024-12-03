void setup() {
  pinMode(7, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  Serial.begin(9600);

  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (Serial.available() > 0)
  {
    String words = Serial.readStringUntil(' ');
    words.toUpperCase();
    //Serial.println(i);
    for (int j = 0; j < words.length(); j++) {
      char i = words.charAt(j);
      if (i == 'A') {
        digitalWrite(6 * j + 2, HIGH);
        digitalWrite(6 * j + 3, LOW);
        digitalWrite(6 * j + 4, LOW);
        digitalWrite(6 * j + 5, LOW);
        digitalWrite(6 * j + 6, LOW);
        digitalWrite(6 * j + 7, LOW);

        delay(1500);
        digitalWrite(6 * j + 2, LOW);
        digitalWrite(6 * j + 3, LOW);
        digitalWrite(6 * j + 4, LOW);
        digitalWrite(6 * j + 5, LOW);
        digitalWrite(6 * j + 6, LOW);
        digitalWrite(6 * j + 7, LOW);

      }
      if (i == 'B') {
        digitalWrite(6 * j + 2, LOW);
        digitalWrite(6 * j + 3, HIGH);
        digitalWrite(6 * j + 4, LOW);
        digitalWrite(6 * j + 5, HIGH);
        digitalWrite(6 * j + 6, LOW);
        digitalWrite(6 * j + 7, LOW);
        delay(1500);
        digitalWrite(6 * j + 2, LOW);
        digitalWrite(6 * j + 3, LOW);
        digitalWrite(6 * j + 4, LOW);
        digitalWrite(6 * j + 5, LOW);
        digitalWrite(6 * j + 6, LOW);
        digitalWrite(6 * j + 7, LOW);

      }
      if (i == 'C') {
        digitalWrite(6 * j + 2, HIGH);
        digitalWrite(6 * j + 3, HIGH);
        digitalWrite(6 * j + 4, LOW);
        digitalWrite(6 * j + 5, LOW);
        digitalWrite(6 * j + 6, LOW);
        digitalWrite(6 * j + 7, LOW);
        delay(1500);
        digitalWrite(6 * j + 2, LOW);
        digitalWrite(6 * j + 3, LOW);
        digitalWrite(6 * j + 4, LOW);
        digitalWrite(6 * j + 5, LOW);
        digitalWrite(6 * j + 6, LOW);
        digitalWrite(6 * j + 7, LOW);

      }
      if (i == 'D') {
        digitalWrite(6 * j + 2, HIGH);
        digitalWrite(6 * j + 3, HIGH);
        digitalWrite(6 * j + 4, LOW);
        digitalWrite(6 * j + 5, HIGH);
        digitalWrite(6 * j + 6, LOW);
        digitalWrite(6 * j + 7, LOW);
        delay(1500);
        digitalWrite(6 * j + 2, LOW);
        digitalWrite(6 * j + 3, LOW);
        digitalWrite(6 * j + 4, LOW);
        digitalWrite(6 * j + 5, LOW);
        digitalWrite(6 * j + 6, LOW);
        digitalWrite(6 * j + 7, LOW);

      }
      if (i == 'E') {
        digitalWrite(6 * j + 2, HIGH);
        digitalWrite(6 * j + 3, LOW);
        digitalWrite(6 * j + 4, LOW);
        digitalWrite(6 * j + 5, HIGH);
        digitalWrite(6 * j + 6, LOW);
        digitalWrite(6 * j + 7, LOW);
        delay(1500);
        digitalWrite(6 * j + 2, LOW);
        digitalWrite(6 * j + 3, LOW);
        digitalWrite(6 * j + 4, LOW);
        digitalWrite(6 * j + 5, LOW);
        digitalWrite(6 * j + 6, LOW);
        digitalWrite(6 * j + 7, LOW);

      }
      if (i == 'F') {
        digitalWrite(6 * j + 2, HIGH);
        digitalWrite(6 * j + 3, HIGH);
        digitalWrite(6 * j + 4, HIGH);
        digitalWrite(6 * j + 5, LOW);
        digitalWrite(6 * j + 6, LOW);
        digitalWrite(6 * j + 7, LOW);
        delay(1500);
        digitalWrite(6 * j + 2, LOW);
        digitalWrite(6 * j + 3, LOW);
        digitalWrite(6 * j + 4, LOW);
        digitalWrite(6 * j + 5, LOW);
        digitalWrite(6 * j + 6, LOW);
        digitalWrite(6 * j + 7, LOW);

      }
      if (i == 'G') {
        digitalWrite(6 * j + 2, HIGH);
        digitalWrite(6 * j + 3, HIGH);
        digitalWrite(6 * j + 4, HIGH);
        digitalWrite(6 * j + 5, HIGH);
        digitalWrite(6 * j + 6, LOW);
        digitalWrite(6 * j + 7, LOW);
        delay(1500);
        digitalWrite(6 * j + 2, LOW);
        digitalWrite(6 * j + 3, LOW);
        digitalWrite(6 * j + 4, LOW);
        digitalWrite(6 * j + 5, LOW);
        digitalWrite(6 * j + 6, LOW);
        digitalWrite(6 * j + 7, LOW);

      }
      if (i == 'H') {
        digitalWrite(6 * j + 2, HIGH);
        digitalWrite(6 * j + 3, LOW);
        digitalWrite(6 * j + 4, HIGH);
        digitalWrite(6 * j + 5, HIGH);
        digitalWrite(6 * j + 6, LOW);
        digitalWrite(6 * j + 7, LOW);
        delay(1500);
        digitalWrite(6 * j + 2, LOW);
        digitalWrite(6 * j + 3, LOW);
        digitalWrite(6 * j + 4, LOW);
        digitalWrite(6 * j + 5, LOW);
        digitalWrite(6 * j + 6, LOW);
        digitalWrite(6 * j + 7, LOW);

      }
      if (i == 'i') {
        digitalWrite(6 * j + 2, LOW);
        digitalWrite(6 * j + 3, HIGH);
        digitalWrite(6 * j + 4, HIGH);
        digitalWrite(6 * j + 5, LOW);
        digitalWrite(6 * j + 6, LOW);
        digitalWrite(6 * j + 7, LOW);
        delay(1500);
        digitalWrite(6 * j + 2, LOW);
        digitalWrite(6 * j + 3, LOW);
        digitalWrite(6 * j + 4, LOW);
        digitalWrite(6 * j + 5, LOW);
        digitalWrite(6 * j + 6, LOW);
        digitalWrite(6 * j + 7, LOW);

      }
      if (i == 'J') {
        digitalWrite(6 * j + 2, LOW);
        digitalWrite(6 * j + 3, HIGH);
        digitalWrite(6 * j + 4, HIGH);
        digitalWrite(6 * j + 5, HIGH);
        digitalWrite(6 * j + 6, LOW);
        digitalWrite(6 * j + 7, LOW);
        delay(1500);
        digitalWrite(6 * j + 2, LOW);
        digitalWrite(6 * j + 3, LOW);
        digitalWrite(6 * j + 4, LOW);
        digitalWrite(6 * j + 5, LOW);
        digitalWrite(6 * j + 6, LOW);
        digitalWrite(6 * j + 7, LOW);

      }
      if (i == 'K') {
        digitalWrite(6 * j + 2, LOW);
        digitalWrite(6 * j + 3, HIGH);
        digitalWrite(6 * j + 4, LOW);
        digitalWrite(6 * j + 5, LOW);
        digitalWrite(6 * j + 6, LOW);
        digitalWrite(6 * j + 7, HIGH);
        delay(1500);
        digitalWrite(6 * j + 2, LOW);
        digitalWrite(6 * j + 3, LOW);
        digitalWrite(6 * j + 4, LOW);
        digitalWrite(6 * j + 5, LOW);
        digitalWrite(6 * j + 6, LOW);
        digitalWrite(6 * j + 7, LOW);

      }
      if (i == 'L') {
        digitalWrite(6 * j + 2, LOW);
        digitalWrite(6 * j + 3, HIGH);
        digitalWrite(6 * j + 4, LOW);
        digitalWrite(6 * j + 5, HIGH);
        digitalWrite(6 * j + 6, LOW);
        digitalWrite(6 * j + 7, HIGH);
        delay(1500);
        digitalWrite(6 * j + 2, LOW);
        digitalWrite(6 * j + 3, LOW);
        digitalWrite(6 * j + 4, LOW);
        digitalWrite(6 * j + 5, LOW);
        digitalWrite(6 * j + 6, LOW);
        digitalWrite(6 * j + 7, LOW);

      }
      if (i == 'M') {
        digitalWrite(6 * j + 2, HIGH);
        digitalWrite(6 * j + 3, HIGH);
        digitalWrite(6 * j + 4, LOW);
        digitalWrite(6 * j + 5, LOW);
        digitalWrite(6 * j + 6, HIGH);
        digitalWrite(6 * j + 7, LOW);
        delay(1500);
        digitalWrite(6 * j + 2, LOW);
        digitalWrite(6 * j + 3, LOW);
        digitalWrite(6 * j + 4, LOW);
        digitalWrite(6 * j + 5, LOW);
        digitalWrite(6 * j + 6, LOW);
        digitalWrite(6 * j + 7, LOW);

      }
      if (i == 'N') {
        digitalWrite(6 * j + 2, HIGH);
        digitalWrite(6 * j + 3, HIGH);
        digitalWrite(6 * j + 4, LOW);
        digitalWrite(6 * j + 5, HIGH);
        digitalWrite(6 * j + 6, HIGH);
        digitalWrite(6 * j + 7, LOW);
        delay(1500);
        digitalWrite(6 * j + 2, LOW);
        digitalWrite(6 * j + 3, LOW);
        digitalWrite(6 * j + 4, LOW);
        digitalWrite(6 * j + 5, LOW);
        digitalWrite(6 * j + 6, LOW);
        digitalWrite(6 * j + 7, LOW);

      }
      if (i == 'O') {
        digitalWrite(6 * j + 2, HIGH);
        digitalWrite(6 * j + 3, LOW);
        digitalWrite(6 * j + 4, LOW);
        digitalWrite(6 * j + 5, HIGH);
        digitalWrite(6 * j + 6, HIGH);
        digitalWrite(6 * j + 7, LOW);
        delay(1500);
        digitalWrite(6 * j + 2, LOW);
        digitalWrite(6 * j + 3, LOW);
        digitalWrite(6 * j + 4, LOW);
        digitalWrite(6 * j + 5, LOW);
        digitalWrite(6 * j + 6, LOW);
        digitalWrite(6 * j + 7, LOW);

      }
      if (i == 'P') {
        digitalWrite(6 * j + 2, HIGH);
        digitalWrite(6 * j + 3, HIGH);
        digitalWrite(6 * j + 4, HIGH);
        digitalWrite(6 * j + 5, LOW);
        digitalWrite(6 * j + 6, HIGH);
        digitalWrite(6 * j + 7, LOW);
        delay(1500);
        digitalWrite(6 * j + 2, LOW);
        digitalWrite(6 * j + 3, LOW);
        digitalWrite(6 * j + 4, LOW);
        digitalWrite(6 * j + 5, LOW);
        digitalWrite(6 * j + 6, LOW);
        digitalWrite(6 * j + 7, LOW);

      }
      if (i == 'Q') {
        digitalWrite(6 * j + 2, HIGH);
        digitalWrite(6 * j + 3, HIGH);
        digitalWrite(6 * j + 4, HIGH);
        digitalWrite(6 * j + 5, HIGH);
        digitalWrite(6 * j + 6, HIGH);
        digitalWrite(6 * j + 7, LOW);
        delay(1500);
        digitalWrite(6 * j + 2, LOW);
        digitalWrite(6 * j + 3, LOW);
        digitalWrite(6 * j + 4, LOW);
        digitalWrite(6 * j + 5, LOW);
        digitalWrite(6 * j + 6, LOW);
        digitalWrite(6 * j + 7, LOW);

      }
      if (i == 'R') {
        digitalWrite(6 * j + 2, HIGH);
        digitalWrite(6 * j + 3, LOW);
        digitalWrite(6 * j + 4, HIGH);
        digitalWrite(6 * j + 5, HIGH);
        digitalWrite(6 * j + 6, HIGH);
        digitalWrite(6 * j + 7, LOW);
        delay(1500);
        digitalWrite(6 * j + 2, LOW);
        digitalWrite(6 * j + 3, LOW);
        digitalWrite(6 * j + 4, LOW);
        digitalWrite(6 * j + 5, LOW);
        digitalWrite(6 * j + 6, LOW);
        digitalWrite(6 * j + 7, LOW);

      }
      if (i == 'S') {
        digitalWrite(6 * j + 2, LOW);
        digitalWrite(6 * j + 3, HIGH);
        digitalWrite(6 * j + 4, HIGH);
        digitalWrite(6 * j + 5, LOW);
        digitalWrite(6 * j + 6, HIGH);
        digitalWrite(6 * j + 7, LOW);
        delay(1500);
        digitalWrite(6 * j + 2, LOW);
        digitalWrite(6 * j + 3, LOW);
        digitalWrite(6 * j + 4, LOW);
        digitalWrite(6 * j + 5, LOW);
        digitalWrite(6 * j + 6, LOW);
        digitalWrite(6 * j + 7, LOW);

      }
      if (i == 'T') {
        digitalWrite(6 * j + 2, LOW);
        digitalWrite(6 * j + 3, HIGH);
        digitalWrite(6 * j + 4, HIGH);
        digitalWrite(6 * j + 5, HIGH);
        digitalWrite(6 * j + 6, HIGH);
        digitalWrite(6 * j + 7, LOW);
        delay(1500);
        digitalWrite(6 * j + 2, LOW);
        digitalWrite(6 * j + 3, LOW);
        digitalWrite(6 * j + 4, LOW);
        digitalWrite(6 * j + 5, LOW);
        digitalWrite(6 * j + 6, LOW);
        digitalWrite(6 * j + 7, LOW);

      }
      if (i == 'U') {
        digitalWrite(6 * j + 2, HIGH);
        digitalWrite(6 * j + 3, LOW);
        digitalWrite(6 * j + 4, LOW);
        digitalWrite(6 * j + 5, LOW);
        digitalWrite(6 * j + 6, HIGH);
        digitalWrite(6 * j + 7, HIGH);
        delay(1500);
        digitalWrite(6 * j + 2, LOW);
        digitalWrite(6 * j + 3, LOW);
        digitalWrite(6 * j + 4, LOW);
        digitalWrite(6 * j + 5, LOW);
        digitalWrite(6 * j + 6, LOW);
        digitalWrite(6 * j + 7, LOW);

      }
      if (i == 'V') {
        digitalWrite(6 * j + 2, HIGH);
        digitalWrite(6 * j + 3, LOW);
        digitalWrite(6 * j + 4, HIGH);
        digitalWrite(6 * j + 5, LOW);
        digitalWrite(6 * j + 6, HIGH);
        digitalWrite(6 * j + 7, HIGH);
        delay(1500);
        digitalWrite(6 * j + 2, LOW);
        digitalWrite(6 * j + 3, LOW);
        digitalWrite(6 * j + 4, LOW);
        digitalWrite(6 * j + 5, LOW);
        digitalWrite(6 * j + 6, LOW);
        digitalWrite(6 * j + 7, LOW);

      }
      if (i == 'W') {
        digitalWrite(6 * j + 2, LOW);
        digitalWrite(6 * j + 3, HIGH);
        digitalWrite(6 * j + 4, HIGH);
        digitalWrite(6 * j + 5, HIGH);
        digitalWrite(6 * j + 6, LOW);
        digitalWrite(6 * j + 7, HIGH);
        delay(1500);
        digitalWrite(6 * j + 2, LOW);
        digitalWrite(6 * j + 3, LOW);
        digitalWrite(6 * j + 4, LOW);
        digitalWrite(6 * j + 5, LOW);
        digitalWrite(6 * j + 6, LOW);
        digitalWrite(6 * j + 7, LOW);

      }
      if (i == 'X') {
        digitalWrite(6 * j + 2, HIGH);
        digitalWrite(6 * j + 3, HIGH);
        digitalWrite(6 * j + 4, LOW);
        digitalWrite(6 * j + 5, LOW);
        digitalWrite(6 * j + 6, HIGH);
        digitalWrite(6 * j + 7, HIGH);
        delay(1500);
        digitalWrite(6 * j + 2, LOW);
        digitalWrite(6 * j + 3, LOW);
        digitalWrite(6 * j + 4, LOW);
        digitalWrite(6 * j + 5, LOW);
        digitalWrite(6 * j + 6, LOW);
        digitalWrite(6 * j + 7, LOW);
        delay(1500);
      }
      if (i == 'Y') {
        digitalWrite(6 * j + 2, HIGH);
        digitalWrite(6 * j + 3, HIGH);
        digitalWrite(6 * j + 4, LOW);
        digitalWrite(6 * j + 5, HIGH);
        digitalWrite(6 * j + 6, HIGH);
        digitalWrite(6 * j + 7, HIGH);
        delay(1500);
        digitalWrite(6 * j + 2, LOW);
        digitalWrite(6 * j + 3, LOW);
        digitalWrite(6 * j + 4, LOW);
        digitalWrite(6 * j + 5, LOW);
        digitalWrite(6 * j + 6, LOW);
        digitalWrite(6 * j + 7, LOW);

      }
      if (i == 'Z') {
        digitalWrite(6 * j + 2, HIGH);
        digitalWrite(6 * j + 3, LOW);
        digitalWrite(6 * j + 4, LOW);
        digitalWrite(6 * j + 5, HIGH);
        digitalWrite(6 * j + 6, HIGH);
        digitalWrite(6 * j + 7, HIGH);
        delay(1500);
        digitalWrite(6 * j + 2, LOW);
        digitalWrite(6 * j + 3, LOW);
        digitalWrite(6 * j + 4, LOW);
        digitalWrite(6 * j + 5, LOW);
        digitalWrite(6 * j + 6, LOW);
        digitalWrite(6 * j + 7, LOW);

      }
      else
      {


      }
    }
  }


}
