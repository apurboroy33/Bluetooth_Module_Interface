#define ledPin 13
int state = 0;
int flag = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin, OUTPUT);
  digitalWrite(ledPin, LOW);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available()){
    state = Serial.read();
  }

  if(state == '0'){
    digitalWrite(ledPin, LOW);
    if(flag == 0){
      Serial.println("LED: off");
      state = 0;
    }
  }
  else if(state == '1'){
    digitalWrite(ledPin, HIGH);
    if(flag == 0){
      Serial.println("LED: on");
      state = 0;
    }
  }
}
