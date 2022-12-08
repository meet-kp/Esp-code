int count=0; 
void setup() {
  // put your setup code here, to run once:
pinMode(6,INPUT_PULLUP);
pinMode (1,OUTPUT);
pinMode (2,OUTPUT);
pinMode (3,OUTPUT);
pinMode (4,OUTPUT);

}

void loop() 
{
  int val digitalRead(6);
  if (val==0)
}
{
  count=count+1;
}
  switch (count)
case 1: 
digitalWrite(1,HIGH);
break;
case 2:
digitalWrite(2,HIGH);
 break;
case 3:
digitalWrite(3,HIGH);
 break;
case 4:
digitalWrite(4,HIGH);
break;
else:
default:
digitalWrite(1,LOW);
digitalWrite(2,LOW);
digitalWrite(3,LOW);
digitalWrite(4,LOW);
count=0;
}
1