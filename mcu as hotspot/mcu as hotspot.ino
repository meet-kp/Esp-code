#include<ESP8266.h>
#include<DNSServer.h>
#include<WiFiManager.h>
WiFIManager wifi

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
WiFi.autoconnect("meet.lekeamp");
Serial.println("Connected to meet.lekeamp")}

void loop() {
  // put your main code here, to run repeatedly:

}
// using nodeMCU as hotspot , connect to the 
//the new wifi meet.lekeamp and  paste the ip address 
//of hotspot in the web browser to configure
