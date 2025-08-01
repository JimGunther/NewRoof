#ifndef KOMMS_H
#define KOMMS_H
#include <WiFi.h>
#include <PubSubClient.h>
#include "Config.h"

/***********************************************************************************************
* Komms.h: header file for Komms class                                                         *
*                                                                                              *
* Version: 0.1                                                                                 *
* Last updated: 20/06/2025 16:26                                                               *
* Author: Jim Gunther                                                                          *
*                                                                                              *
***********************************************************************************************/
    
class Komms {
  
  public:
  Komms();
  void begin();
  int getNwkIx();
  bool checkWifi();
  
  private:
  void unScram(const char *src, char * dest);  
  bool readCredentials(); // gets "menu" of wifi networks from code
  bool connectToWiFi();
  const char* getIP() { return _ipAddress; }
  
  //unsigned int icLength;
  int _status;
  int _nwkIx;
  
  char _ssid[NUM_NETWORKS][SSID_LEN];
  char _pwd[NUM_NETWORKS][PWD_LEN];
  char _ssidChosen[SSID_LEN], _pwdChosen[PWD_LEN];
  char _ipAddress[IP_LEN];  
  
};
#endif
