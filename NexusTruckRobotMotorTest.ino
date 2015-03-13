int pinMotor1PWM = 3;
int pinMotor1Dir = 2;
int pinMotor2PWM = 11;
int pinMotor2Dir = 12;

void setup() {
  // change PWM freq
  TCCR1B=TCCR1B&0xf8|0x01;  // Pin9,Pin10 PWM 31250Hz
  TCCR2B=TCCR2B&0xf8|0x01;  // Pin3,Pin11 PWM 31250Hz
  
  // set pin mode
  pinMode(pinMotor1PWM, OUTPUT);
  pinMode(pinMotor1Dir, OUTPUT);
  pinMode(pinMotor2PWM, OUTPUT);
  pinMode(pinMotor2Dir, OUTPUT);
  
  Serial.begin(115200);
}

void loop() {
  // Motor1 Test
  digitalWrite(pinMotor1Dir, HIGH);
  analogWrite(pinMotor1PWM, 200);
  delay(1000);

  // Motor2 Test
  digitalWrite(pinMotor2Dir, HIGH);
  analogWrite(pinMotor2PWM, 200);
  delay(1000);
}

