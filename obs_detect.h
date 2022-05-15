/**************************************************************
 * Author: Hoang Minh Lê
 * Description: This file is for calculating obstacle detection
 * Date: 15 May 2022
 *************************************************************/

#ifndef OBS_DETECT_H
#define OBS_DETECT_H
 #include "pin_name.h"
 #define MAX_DISTANCE 200
 NewPing sonar(trigPin,echoPin,MAX_DISTANCE);
 bool has_obs(uint8_t *dist)
 {
  delay(10);
    (*dist)=sonar.ping_cm();
    Serial.print("Distance: ");
    Serial.print((*dist),DEC);
    if((*dist)<=50){
      Serial.println("\tObstacle detected");
      return true;
    }
    else
    return false;
 }
#endif
