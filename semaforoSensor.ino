ATV 01
int ult_val = 0;
int am = 0;

void setup() {
  Serial.begin(9600);
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
}

void loop(){
int luz = analogRead(5);
	Serial.println(luz);
	if (luz < 1000){
      if(luz != ult_val && am == 0){
      	ult_val = luz;
        am = 1;
        digitalWrite(11, LOW);
        digitalWrite(12, HIGH);
        delay(1000);
        digitalWrite(12, LOW);
        digitalWrite(13, HIGH);
      }
    } else {
      		
      am = 0;
      digitalWrite(13, LOW);
      digitalWrite(11, HIGH);
             }
}