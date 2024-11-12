#include <ESP8266WiFi.h>
 
#define  ssid "Network24"
#define password "NetPass24"
 
void setup() {
  Serial.begin(115200);
  delay(10000);
  WiFi.mode(WIFI_STA);
WiFi.begin(ssid,password);
 
  Serial.print("Connecting to ");
  Serial.println(ssid);
 
while (WiFi.status() != WL_CONNECTED) {
  delay(500);
  Serial.print(".");
}
 
Serial.println();
Serial.print("Connected to ");
Serial.println(ssid);
Serial.print("IP Address: ");
Serial.println(WiFi.localIP());
}
 
 
void loop() {
  // put your main code here, to run repeatedly:
 
}
 