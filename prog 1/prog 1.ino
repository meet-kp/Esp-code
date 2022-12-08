  #include <ESP8266WiFi.h>
#include <ESP8266WebServer.h>
Serial.begin(9600);
}

void loop() {
  int name = 1;
  int age = 3;
  Serial << "My name is " << name << " and I am " << age << " years old.";
  Serial.println();
   Serial.println("WiFi connected..!");
  Serial.print("Got IP: ");  Serial.println(WiFi.localIP());
  delay(500);
  String bob1 = "bob";
  Serial.println(bob1);
  delay(500);
  float f1 = 1.31;
  float f2 = 2.39;
  float f3 = 3.01;
  float arr[3] = { f1, f2, f3 };
  Serial print << f1 << "  " << f2 << "  " << f3;
  Serial.println();
}
