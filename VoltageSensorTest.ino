int val11;
int val2;

void setup()
{
   Serial.begin(9600);
}
void loop()
{
   float temp;
   val11=analogRead(A0);
   temp=val11/4.092;
   val11=(int)temp;
   val2=((val11%100)/10);
   Serial.println(val2);
   delay(1000);
}