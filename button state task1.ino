
#define button 2 //oush button at pin 2
 const int ledPin[] = {4, 5, 6, 7};  // creating a array for  4 leds
 
   int count=0;


    void setup(){
      for (index = 4; index <= 7; index++);
 {
    pinMode(ledPin[index], OUTPUT);
 }
   pinMode(button,INPUT);
   Serial.begin(9600);
      \\connect to wifi code here 
    }  
    void loop()
{
  count=digitalRead (button,LOW);
 count = (count=0; count <= 6; count++);   
  
  if (count=1)
  digitalWrite(ledPin 4, HIGH);
  elif (count=2)
  digitalWrite(ledPin 5, HIGH);
  elif (count=3)
  digitalWrite(ledPin 6, HIGH);  
  elif (count=4)
  digitalWrite(ledPin 7, HIGH);
  elif (count=5)
  digitalWrite(ledPin 8, HIGH);
  else 
  digitalWrite(ledPin 9, HIGH);
  
}




// this constant won't change:
const int  buttonPin = 2;    // the pin that the pushbutton is attached to
const int ledPin = 13;       // the pin that the LED is attached to

// Variables will change:
int buttonPushCounter = 0;   // counter for the number of button presses
int buttonState = 0;         // current state of the button
int lastButtonState = 0;     // previous state of the button

void setup() {
  // initialize the button pin as a input:
  pinMode(buttonPin, INPUT);
  // initialize the LED as an output:
  pinMode(ledPin, OUTPUT);
  // initialize serial communication:
  Serial.begin(9600);
}


void loop() {
  // read the pushbutton input pin:
  buttonState = digitalRead(buttonPin);

  // compare the buttonState to its previous state
  if (buttonState != lastButtonState) {
    // if the state has changed, increment the counter
    if (buttonState == HIGH) {
      // if the current state is HIGH then the button
      // wend from off to on:
      buttonPushCounter++;
      Serial.println("on");
      Serial.print("number of button pushes:  ");
      Serial.println(buttonPushCounter);
    } 
    else {
      // if the current state is LOW then the button
      // wend from on to off:
      Serial.println("off"); 
    }
  }
  // save the current state as the last state, 
  //for next time through the loop
  lastButtonState = buttonState;

  
  // turns on the LED every four button pushes by 
  // checking the modulo of the button push counter.
  // the modulo function gives you the remainder of 
  // the division of two numbers:
  if (buttonPushCounter % 4 == 0) {
    digitalWrite(ledPin, HIGH);
  } else {
   digitalWrite(ledPin, LOW);
  }
  
}