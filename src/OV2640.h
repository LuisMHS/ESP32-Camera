/*
MIT License

Copyright (c) 2025 Luis Miguel Hernández Samaniego

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
*/ 
/*
@Library:ESP32-Camera
@author:
-Luis Miguel Hernández Samaniego
@Version Library: 0.0.1
@Arduino: 2.3.6
@ESP32 version:  3.2
@date:  2025-04-30
*/

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
