int greenLED=11;
int redLED=12;
int button=2;
int buttonStatus;

void setup()
{
  pinMode(redLED, OUTPUT);
  pinMode(greenLED, OUTPUT);
  pinMode(button, INPUT);
  Serial.begin(9600);
}
void loop()
{
  buttonStatus=digitalRead(button);
  delay(100);
  if (buttonStatus==1){
    digitalWrite(greenLED, HIGH);
    digitalWrite(redLED,LOW);
  }
  else{
    digitalWrite(greenLED, LOW);
    digitalWrite(redLED, HIGH);
    }
}
