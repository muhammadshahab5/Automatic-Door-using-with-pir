int sensor_pin = 8;
int relay_pin = 9;
int output;
void setup(){
  Serial.begin(9600);
  pinMode(sensor_pin, INPUT);   
  pinMode(relay_pin, OUTPUT);  
} 
void loop(){
 
  output = digitalRead(sensor_pin);
  
 Serial.println(output);
  if(output == 1){
    digitalWrite(relay_pin,LOW);
    Serial.println("OFF");
    delay(500);
  }
  
  
  else if(output == 0){
    digitalWrite(relay_pin, HIGH);
    Serial.println("ON");
    delay(500);
  }
  
  
}
