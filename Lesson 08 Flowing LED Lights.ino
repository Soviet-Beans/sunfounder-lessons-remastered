int min = 6; // Lowest pin # in use
int max = 13; // Highest pin # in use
int o = 0; // Declares o as a variable
int a = 0; // Declares a as a variable

void setup()
{
  for(int o=min; o<=max; o++); {
    pinMode(o, OUTPUT); }
}

void loop()
{
  delay(1000);
  for(int a=6; a<=13; a++) {
    digitalWrite(a, HIGH);
  	delay(100); }
  for(int a=13; a>=6; a--) {
    digitalWrite(a, LOW); 
  	delay(100); }
}
