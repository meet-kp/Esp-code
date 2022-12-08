#include
<ESP8266WiFi.h>
#include<WifiClient.h>
#include<ESP8266HTTPClient.h>

WiFiClient client;
HTTPClient http;
String url;
String api key ="K6HATN4GK9UKUZ7I";
String FieldNo="1";

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
  random_number= random (0,100);
  SendGETRequest(random_number)
  delay(16000) // 16 sec delay
}
void SendGETRequest(int data)
{ 
url=" http://api.thingspeak.com/update?api_key= ";
url=url+Api key;
url=url+ Fieldno; 
url=url+"=" ;  
url=url+ data;
 
  //sending get requests to the thingspeak server
  http.begin(cilent," http://api.thingspeak.com/update?api_key=K6HATN4GK9UKUZ7I&field1=456");
 Serial.println("waiting for response");
 httpcode=http.GET();
  if (httpcode >0)
  {
  Serial.println(random_number);
  Serial.println("Data sent successfully");  
  }
  else
  {
    Serial.println("Error sending the data");
  }
http.end();

}


