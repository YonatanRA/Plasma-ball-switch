const int rele=8; //rele digital 8
const int ball=0; // pin A0 bola plasma

void setup(){
  Serial.begin(9600);
  pinMode(rele,OUTPUT); // el pin analogico se declara
                       // como entrada automaticamente
                       
}

void loop(){
  long sum=0;
  for (int i=0;i<30;i++){
    sum=sum+analogRead(ball);
    delay(100);
  }
  float average=sum*0.0333333;
  Serial.println(average);
  if (average<=1013.87){
    delay(100);
    digitalWrite(rele, LOW);
    delay(100);
  }
  else {
    digitalWrite(rele, HIGH);
  }
}

    

