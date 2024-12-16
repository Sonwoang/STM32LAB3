/*
 * software_timer.h
 *
 *  Created on: Dec 16, 2024
 *      Author: LENOVO
 */

#ifndef INC_SOFTWARE_TIMER_H_
#define INC_SOFTWARE_TIMER_H_

extern int timer_flag[];
extern int timer_counter[];

void setTimer(int index, int counter);
void clearTimer(int index);
void timerRun();


#endif /* INC_SOFTWARE_TIMER_H_ */
