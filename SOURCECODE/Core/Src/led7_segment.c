/*
 * led7_segment.c
 *
 *  Created on: Dec 16, 2024
 *      Author: LENOVO
 */
#include "led7_segment.h"

void numToLed(int num){
	switch(num){
	case 0:
		ZERO();
		break;
	case 1:
		ONE();
		break;
	case 2:
		TWO();
		break;
	case 3:
		THREE();
		break;
	case 4:
		FOUR();
		break;
	case 5:
		FIVE();
		break;
	case 6:
		SIX();
		break;
	case 7:
		SEVEN();
		break;
	case 8:
		EIGHT();
		break;
	case 9:
		NINE();
		break;
	default:
		break;
	}
}
void CLEAR(){
	HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, SET);
	HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, SET);
	HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, SET);
	HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, SET);
	HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, SET);
	HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, SET);
	HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, SET);
}
void ZERO(){
	HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, RESET);
	HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, RESET);
	HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, RESET);
	HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, RESET);
	HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, RESET);
	HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, RESET);
	HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, SET);
}
void ONE(){
	HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, SET);
	HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, RESET);
	HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, RESET);
	HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, SET);
	HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, SET);
	HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, SET);
	HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, SET);
}
void TWO(){
	HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, RESET);
	HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, RESET);
	HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, SET);
	HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, RESET);
	HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, RESET);
	HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, SET);
	HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, RESET);
}
void THREE(){
	HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, RESET);
	HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, RESET);
	HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, RESET);
	HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, RESET);
	HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, SET);
	HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, SET);
	HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, RESET);
}
void FOUR(){
	HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, SET);
	HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, RESET);
	HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, RESET);
	HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, SET);
	HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, SET);
	HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, RESET);
	HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, RESET);
}
void FIVE(){
	HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, RESET);
	HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, SET);
	HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, RESET);
	HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, RESET);
	HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, SET);
	HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, RESET);
	HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, RESET);
}
void SIX(){
	HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, RESET);
	HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, SET);
	HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, RESET);
	HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, RESET);
	HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, RESET);
	HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, RESET);
	HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, RESET);
}
void SEVEN(){
	HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, RESET);
	HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, RESET);
	HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, RESET);
	HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, SET);
	HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, SET);
	HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, SET);
	HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, SET);
}
void EIGHT(){
	HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, RESET);
	HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, RESET);
	HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, RESET);
	HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, RESET);
	HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, RESET);
	HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, RESET);
	HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, RESET);
}
void NINE(){
	HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, RESET);
	HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, RESET);
	HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, RESET);
	HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, RESET);
	HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, SET);
	HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, RESET);
	HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, RESET);
}

