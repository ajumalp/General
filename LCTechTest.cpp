
byte MsgRL1On[] = {0xA0, 0x01, 0x01, 0xA2};
byte MsgRL1Off[] = {0xA0, 0x01, 0x00, 0xA1};

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  while(!Serial) {
    delay(10);
  }
}

void loop() {
  Serial.write(MsgRL1On, sizeof(MsgRL1On));
  delay(1000);

  Serial.write(MsgRL1Off, sizeof(MsgRL1Off)); 
  delay(1000);
}
