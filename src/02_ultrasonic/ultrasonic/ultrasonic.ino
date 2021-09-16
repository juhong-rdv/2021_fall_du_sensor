// C++ code
//
void setup()
{
  Serial.begin(9600) ;
}

void loop()
{
  int analog_value = analogRead(A0) ;
  Serial.println(analog_value) ;
}
