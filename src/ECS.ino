#include <WiFi.h>
#include <ESPAsyncWebServer.h>
#include <SPIFFS.h>
#include "mdfuncs.h"

#define PWM1 18
#define PWM2 17
#define PWM3 17
#define PWM4 6
#define PWM5 5
#define PWM6 4

#define MA1 10 // IN1A
#define MA2 11 // IN2A
#define MA3 12 // PWMA

#define MB1 13 // IN1B
#define MB2 14 // IN2B
#define MB3 21 // PWMB

#define MC1 43 // IN1C
#define MC2 44 // IN2C
#define MC3 42 // PWMC

#define MD1 41 // IN1D
#define MD2 40 // IN2D
#define MD3 30 // PWMD

#define LEDPIN 3
#define VBAT 2

pinMode(PWM1, OUTPUT);
pinMode(PWM2, OUTPUT);
pinMode(PWM3, OUTPUT);
pinMode(PWM4, OUTPUT);
pinMode(PWM5, OUTPUT);
pinMode(PWM6, OUTPUT);

pinMode(MA1, OUTPUT);
pinMode(MA2, OUTPUT);
pinMode(MA3, OUTPUT);

pinMode(MB1, OUTPUT);
pinMode(MB2, OUTPUT);
pinMode(MB3, OUTPUT);

pinMode(MC1, OUTPUT);
pinMode(MC2, OUTPUT);
pinMode(MC3, OUTPUT);

pinMode(MD1, OUTPUT);
pinMode(MD2, OUTPUT);
pinMode(MD3, OUTPUT);

const char* ssid = "Battle Bot AP - SN2";
const char* password = "ecspassword";
const char* targetPassword = "ecspassword";

AsyncWebServer server(80);

bool scanSSID(const char* targetSSID) {
  int numNetworks = WiFi.scanNetworks();

  for (int i = 0; i < numNetworks; ++i) {
    if (WiFi.SSID(i) == targetSSID) {
      return true;
    }
  }
  return false;
}


void setup() {
  Serial.begin(9600);

  if (!SPIFFS.begin(true)) {
    Serial.println("SPIFFS Error");
    return;
  }

  const char* targetSSID = "BattleBots";
  bool found = scanSSID(targetSSID);

  if (found) {
    Serial.println("Boot in Wifi Mode");
    WiFi.begin(targetSSID);
    while (WiFi.status() != WL_CONNECTED) {
      delay(1000);
      Serial.println("Connecting");
    }
  } else {
    Serial.println("Boot in AP Mode");
    WiFi.softAPConfig(IPAddress(10, 10, 10, 10), IPAddress(10, 10, 10, 10), IPAddress(255, 255, 255, 0));
    WiFi.softAP(ssid, password);
    Serial.println("SoftAP IP Address: " + WiFi.softAPIP().toString());
  }

  server.on("/", HTTP_GET, [](AsyncWebServerRequest * request) {
    File file = SPIFFS.open("/data/index.html");
    if (!file) {
      Serial.println("Failed to open file");
      request->send(404, "text/plain", "File not found");
      return;
    }
    request->send(SPIFFS, "/index.html", "text/html");
    file.close();
  });

  server.on("/button/1", HTTP_GET, [](AsyncWebServerRequest * request) {
    forwardTB6612();
    request->send(200);
  });

  server.on("/button/2", HTTP_GET, [](AsyncWebServerRequest * request) {
    leftTB6612();
    request->send(200);
  });

  server.on("/button/3", HTTP_GET, [](AsyncWebServerRequest * request) {
    stopFuncTB6612();
    request->send(200);
  });

  server.on("/button/4", HTTP_GET, [](AsyncWebServerRequest * request) {
    rightTB6612();
    request->send(200);
  });

  server.on("/button/5", HTTP_GET, [](AsyncWebServerRequest * request) {
    backwardTB6612();
    request->send(200);
  });

  server.begin();
}

void loop() {

}
