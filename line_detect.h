/**********************************************************************
 * Author: Hoang Minh Lê
 * Description: This file contains functions for detecting the line
 * Date: 15 May 2022
 ***********************************************************************/
 #ifndef LINE_DETECT_H
 #define LINE_DETECT_H
 #include "pin_name.h"

bool data_r = !digitalRead(rig_ir);
bool data_m = !digitalRead(mid_ir);
bool data_l = !digitalRead(left_ir);

//extern bool right(){
//  return digitalRead(rig_ir)&&!digitalRead(left_ir);
//}
//
//extern bool left(){
//  return digitalRead(left_ir)&&!digitalRead(rig_ir);
//}
//
//extern bool mid(){
//  return digitalRead(mid_ir)&&!digitalRead(rig_ir)&&!digitalRead(left_ir);
//}
extern bool right(){
    return data_r && !data_l;
}

extern bool mid(){
    return data_m && !data_l && !data_r;
}

extern bool left() {
    return !data_r && data_l;
}
#endif
