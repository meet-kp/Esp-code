#include<ESP8266WiFi.h>
#include<WifiClient.h>
#include<ESP8266HTTPClient.h>

WiFiClient client;
HTTPClient http;


void setup() {
  // put your setup code here, to run once:
 //https://api.thingspeak.com/update?api_key=K6HATN4GK9UKUZ7I&field1=0
serial.begin(9600)
// connecting to wifi 
WiFi.begin("lekeamp","87654321");
 while(WiFistatus()! -WL_CONNECTED)
  {
  serial.println("****")//prints * while the nodemcu is getting connected to the WiFi
  delay(200);
  }

 Serial.println("NodeMCU is connected !!");
 }


void loop() {
 

void SendGETRequest(int data)
{ 
url=" http://api.thingspeak.com/update?api_key= ";

 
  //sending get requests to the thingspeak server
  http.begin(cilent," http://api.thingspeak.com/update?api_key=K6HATN4GK9UKUZ7I&field1=456");
 Serial.println("waiting for response");
 httpcode=http.GET();
  if (httpcode >0)
  {
  Serial.println(sensor data read successfully);
  response=http.getString();
  Serial.println("response");  
  begin_string=response.indexof("\"entry_id");
  end_sring=response.indesof("}]}");
  reult=response.substring(begin_sring+26,end_string-1);
  
  else
  {
    Serial.println("Failed to connect");
  }
http.end();
delay(1000);
}
