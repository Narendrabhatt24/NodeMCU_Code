//Author: Narendra 
//This program set NodeMCU as Access point

#include <ESP8266WiFi.h>                                    //Header file included

const char * ssid= "";                                      //SSID for Access point
const char * password= "";                                  //Password for Access point

void setup() {
  Serial.begin(115200);                                     //Serial communication at 115200 
  WiFi.mode(WIFI_AP);                                       //Set NodeMCU as Access Point

  Serial.println();                             
  Serial.print("Setting Soft Access Point");               //Printing on Serial Monitor 
  WiFi.softAP(ssid,password);                              //Set SSID and Password for the Access Point (for protected Network)
  //WiFi.softAP(ssid);                                     //Set SSID for the Access Point (for open Network)
  
  Serial.print("Access Point: ");
  Serial.print(ssid);
  Serial.println("Started");
}

void loop() 
{
  unsigned int device_no= WiFi.softAPgetStationNum();                                 //Get no. of station connected to the access point
  Serial.printf("Total %d devices are connected to the Access Point",device_no);       
  delay(2000);
}
