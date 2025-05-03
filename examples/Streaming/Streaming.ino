/*
@Library:ESP32-Camera
@author:
-Luis Miguel Hernández Samaniego
@Version Library: 0.0.1
@Arduino: 2.3.6
@ESP32 version:  3.2
@date:  2025-05-02
*/
//----------------------Header---------------------//
//Incluir el archivo OV2640.h de la librería ESP32-Camera
#include <OV2640.h>
//-------------------------------------------------//

//----------------------Objeto---------------------//
OV2640 camara;
//-------------------------------------------------//

//-----------------Constante------------------------//
//colocar SSID y clave de seguridad de red PASSWORD
//Banda de Red: 2.4GHz
const char *SSID = "Taller robotica";
const char *PASSWORD = ".*89LuisUnivLM";
//-------------------------------------------------//

//-----------------Variable------------------------//
int count = 0;
String img = " ";
//-------------------------------------------------//

void setup() {
  //-------------------------------------------------//
  //Configurar la comunicación serial a 9600 baudios
  Serial.begin(115200);
  //-------------------------------------------------//
  
  //-------------Acceso a la red Wi-Fi---------------//
  camara.begin(SSID, PASSWORD);
  //-------------------------------------------------//

  //--------------------Streaming--------------------//
  camara.streaming();
  //-------------------------------------------------//
  
  Serial.print("Camera OV2640! Usa 'http://");
  Serial.print(camara.ip());
  Serial.println("' Conectado");
}

void loop() {
  //---------------------Photo SD--------------------//
  count++;
  img = "casa" + String(count);
  camara.photo(img.c_str());
  //-------------------------------------------------//
  delay(20000);
}
