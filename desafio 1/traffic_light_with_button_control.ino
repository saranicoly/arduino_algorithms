//https://www.tinkercad.com/things/0n3q0KMPqQN-traffic-light-with-button/
//traffic light

int button = 0;
int redLED = 6;
int yellowLED = 5;
int greenLED = 4;
int delay_yellow, usual_delay;

void setup()
{
  pinMode(2, INPUT);
  pinMode(redLED, OUTPUT);
  pinMode(yellowLED, OUTPUT);
  pinMode(greenLED, OUTPUT);
}

void loop()
{
  button = digitalRead(11);
  delay_yellow = 1000;
  usual_delay = 3000;
 
  digitalWrite(yellowLED, LOW);
  digitalWrite(greenLED, HIGH);
  if (button==1){
    usual_delay = 1500;
    delay_yellow = 500;
  }

  delay(usual_delay);
  digitalWrite(greenLED, LOW);
  digitalWrite(yellowLED, HIGH);
  
  delay(delay_yellow);
  digitalWrite(yellowLED, LOW);
  digitalWrite(redLED, HIGH);
  
  delay(usual_delay);
  digitalWrite(redLED, LOW);
  digitalWrite(yellowLED, HIGH);
  
  delay(delay_yellow);

  
}
