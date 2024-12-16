/*
 * softwareTimer.h
 *
 *  Created on: Oct 10, 2023
 *      Author: Acer
 */

#ifndef INC_SOFTWARETIMER_H_
#define INC_SOFTWARETIMER_H_

extern int flag0;
extern int flag1;
extern int flag2;
extern int flag3;
extern int flag_7seg;
extern int flagBlinkMode;

void setCycle(int userCycle);

void setTimer0(int duration); //led PA5
void setTimer1(int duration); //led_traffic_1
void setTimer2(int duration); //led7seg
void setTimer3(int duration); //led_traffic_2
void setTime_counter_7seg (int duration); //led7seg-- khi traffic mode 1
void setTimerBlinkMode(int duration); //time led blink in mode 2 & 3 & 4

void timerRun();

#endif /* INC_SOFTWARETIMER_H_ */
