/*
 * softwareTimer.c
 *
 *  Created on: Oct 10, 2023
 *      Author: Acer
 */


#include "softwareTimer.h"

int timerCounter0 = 0;
int flag0 = 0;

int timerCounter1 = 0;
int flag1 = 0;

int timerCounter2 = 0;
int flag2 = 0;

int timerCounter3 = 0;
int flag3 = 0;

int time_counter_7seg = 0;
int flag_7seg = 0;

int timerMode = 0;
int flagBlinkMode = 0;

int cycle = 10;

void setCycle(int userCycle) {
	cycle = userCycle;
}

void setTimer0(int duration) {
	timerCounter0 = duration/cycle;
	flag0 = 0;
}
void setTimer1(int duration) {
	timerCounter1 = duration/cycle;
	flag1 = 0;
}
void setTimer2(int duration) {
	timerCounter2 = duration/cycle;
	flag2 = 0;
}
void setTimer3(int duration) {
	timerCounter3 = duration/cycle;
	flag3 = 0;
}
void setTime_counter_7seg(int duration) {
	time_counter_7seg = duration/cycle;
	flag_7seg = 0;
}
void setTimerBlinkMode(int duration) {
	timerMode = duration/cycle;
	flagBlinkMode = 0;
}

void timerRun() {
	if(timerCounter0 > 0) {
		timerCounter0--;
		if(timerCounter0 <= 0) {
			flag0 = 1;
		}
	}
	if(timerCounter1 > 0) {
		timerCounter1--;
		if(timerCounter1 <= 0) {
			flag1 = 1;
		}
	}
	if(timerCounter2 > 0) {
		timerCounter2--;
		if(timerCounter2 <= 0) {
			flag2 = 1;
		}
	}
	if(timerCounter3 > 0) {
		timerCounter3--;
		if(timerCounter3 <= 0) {
			flag3 = 1;
		}
	}
	if( time_counter_7seg > 0 ) {
		time_counter_7seg--;
		if( time_counter_7seg <= 0 ) {
			flag_7seg = 1;
		}
	}
	if( timerMode > 0 ) {
		timerMode--;
		if( timerMode <= 0 ) {
			flagBlinkMode = 1;
		}
	}
}

