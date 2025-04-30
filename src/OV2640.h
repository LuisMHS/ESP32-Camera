
//-------------------------------------------------//
#ifndef _OV2640_H
#define _OV2640_H
//-------------------------------------------------//

//------------------Directiva include---------------//
#include <Arduino.h>
#include <esp_camera.h>
#include <WiFi.h>
#include "camera_pins.h"
#include <SD_MMC.h>
//-------------------------------------------------//
void streaming_video();
void setupLedFlash(int pin);
//-----------------Clase OV2640------------------------//
class OV2640 {
//Función de miembro de acceso publico
public:
//Constructor
  OV2640();
//declaracion de Metodos
  void begin(const char *ssid, const char *password);
  void streaming();
  void photo(const char *name);
  String ip();
};
#endif
