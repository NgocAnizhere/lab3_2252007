/*
 * led_7seg.h
 *
 *  Created on: Oct 28, 2024
 *      Author: admin
 */

#ifndef INC_LED_7SEG_H_
#define INC_LED_7SEG_H_

#include "global.h"
void display7SEG(int num);
void display7SEG1(int num);
void update7SEG(int index);
void updateLedBuffer(int mode);
void update7SEG_t(int index);
void updateLedBuffer_t(int time);
void update7SEG2(int index);
void updateLedBuffer_2(int col1,int col2);

extern int led_buffer_t [2];
extern int led_buffer [2];
extern int led_buffer_2 [4];
#endif /* INC_LED_7SEG_H_ */
