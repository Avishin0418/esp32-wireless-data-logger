#include <WiFi.h>
#include <WiFiClient.h>

const char* ssid = "YOUR_SSID";
const char* password = "YOUR_PASSWORD";
WiFiServer server(80);

void setup() {
  Serial.begin(115200);
  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }
  Serial.println("Connected to WiFi");
  server.begin();
}

void loop() {
  WiFiClient client = server.available();
  if (client) {
    int sensorValue = analogRead(34);
    client.print(String(sensorValue));
    delay(1000);  // send every 1 sec
    client.stop();
  }
}
