/*

Main Arduino File
Copyright (C) 2023 Alex Blackman
Available: https://github.com/afb26/ECS

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <https://www.gnu.org/licenses/>.

*/

// Uncomment ONLY one line to define motor driver
#define USE_TB6612
//#define USE_L298N

#include <WiFi.h>
#include <ESPAsyncWebServer.h>
#include <SPIFFS.h>
#include "MotorDriver.h"

#define LEDPIN 3
#define VBAT 2

// Replace "SNX" below with the serial number of your device (found on the back of the case)
const char *ssid = "Battle Bot AP - SNX";
const char *password = "ecspassword";
const char *targetPassword = "ecspassword";

AsyncWebServer server(80);

bool scanSSID(const char *targetSSID)
{
  int numNetworks = WiFi.scanNetworks();

  for (int i = 0; i < numNetworks; ++i)
  {
    if (WiFi.SSID(i) == targetSSID)
    {
      return true;
    }
  }
  return false;
}

void setup()
{
  Serial.begin(9600);

  pinMode(18, OUTPUT);
  pinMode(17, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(4, OUTPUT);

  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);

  pinMode(13, OUTPUT);
  pinMode(14, OUTPUT);
  pinMode(21, OUTPUT);

  pinMode(43, OUTPUT);
  pinMode(44, OUTPUT);
  pinMode(42, OUTPUT);

  pinMode(41, OUTPUT);
  pinMode(40, OUTPUT);
  pinMode(39, OUTPUT);

  if (!SPIFFS.begin(true))
  {
    Serial.println("SPIFFS Error");
    return;
  }

  const char *targetSSID = "BattleBots";
  bool found = scanSSID(targetSSID);

  if (found)
  {
    Serial.println("Boot in Wifi Mode");
    WiFi.begin(targetSSID);
    while (WiFi.status() != WL_CONNECTED)
    {
      delay(1000);
      Serial.println("Connecting");
    }
  }
  else
  {
    Serial.println("Boot in AP Mode");
    WiFi.softAPConfig(IPAddress(10, 10, 10, 10), IPAddress(10, 10, 10, 10), IPAddress(255, 255, 255, 0));
    WiFi.softAP(ssid, password);
    Serial.println("SoftAP IP Address: " + WiFi.softAPIP().toString());
  }

  server.on("/", HTTP_GET, [](AsyncWebServerRequest *request)
            {
    File file = SPIFFS.open("/data/index.html");
    if (!file) {
      Serial.println("Failed to open file");
      request->send(404, "text/plain", "File not found");
      return;
    }
    request->send(SPIFFS, "/index.html", "text/html");
    file.close(); });

  #if defined USE_TB6612
    server.on("/button/1", HTTP_GET, [](AsyncWebServerRequest *request)
              {
      forwardTB6612();
      request->send(200); });

    server.on("/button/2", HTTP_GET, [](AsyncWebServerRequest *request)
              {
      leftTB6612();
      request->send(200); });

    server.on("/button/3", HTTP_GET, [](AsyncWebServerRequest *request)
              {
      stopFuncTB6612();
      request->send(200); });

    server.on("/button/4", HTTP_GET, [](AsyncWebServerRequest *request)
              {
      rightTB6612();
      request->send(200); });

    server.on("/button/5", HTTP_GET, [](AsyncWebServerRequest *request)
              {
      backwardTB6612();
      request->send(200); });
  #elif defined USE_L298N
    server.on("/button/1", HTTP_GET, [](AsyncWebServerRequest *request)
              {
      forwardL298N();
      request->send(200); });

    server.on("/button/2", HTTP_GET, [](AsyncWebServerRequest *request)
              {
      leftL298N();
      request->send(200); });

    server.on("/button/3", HTTP_GET, [](AsyncWebServerRequest *request)
              {
      stopFuncL298N();
      request->send(200); });

    server.on("/button/4", HTTP_GET, [](AsyncWebServerRequest *request)
              {
      rightL298N();
      request->send(200); });

    server.on("/button/5", HTTP_GET, [](AsyncWebServerRequest *request)
              {
      backwardL298N();
      request->send(200); });
  #else
  #error No Motor Driver defined...
  #endif

  server.begin();
}

void loop()
{
}