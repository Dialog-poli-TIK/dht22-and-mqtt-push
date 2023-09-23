#include <WiFi.h>

#define SSID            "B6FEE3"
#define PASSWORD        "fl4mb0y4n2022"

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  while(!Serial) {
    delay(100);
    }

  Serial.println();
  Serial.println("******************************************************");
  Serial.print("Connecting to ");
  Serial.println(SSID);
  WiFi.begin(SSID, PASSWORD);
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
    }
  Serial.println("");
  Serial.println("WiFi connected");
  Serial.println("IP address: ");
  Serial.println(WiFi.localIP());
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.print("IP Address: ");
  Serial.println(WiFi.localIP());
}
