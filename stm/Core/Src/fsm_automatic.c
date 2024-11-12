/*
 * fsm_automatic.c
 *
 *  Created on: Oct 27, 2024
 *      Author: admin
 */
#include "fsm_automatic.h"
#include "led_7seg.h"



const int MAX_LED1 = 4;
int index_led1 = 0;

void fsm_automatic_run(){
	switch(status){
	case INIT:
		//TODO
		HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, GPIO_PIN_SET);

		HAL_GPIO_WritePin(LED_RED1_GPIO_Port, LED_RED1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(LED_GREEN1_GPIO_Port, LED_GREEN1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(LED_YELLOW1_GPIO_Port, LED_YELLOW1_Pin, GPIO_PIN_SET);



		status = State1;
		setTimer1(greenTime);
		setTimer2(50);
		tmpTimeRed = redTime;
		tmpTimeYellow = yellowTime;
		tmpTimeGreen = greenTime;
		tmpTimeRed1 = redTime;
		tmpTimeYellow1 = yellowTime;
		tmpTimeGreen1 = greenTime;

		if(redTime !=  greenTime + yellowTime){
			mode = 2;
			status = MAN_RED;
			setTimer1(50);
		}

		break;
	case State1:
		//TODO

		HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, GPIO_PIN_SET);

		HAL_GPIO_WritePin(LED_RED1_GPIO_Port, LED_RED1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(LED_GREEN1_GPIO_Port, LED_GREEN1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(LED_YELLOW1_GPIO_Port, LED_YELLOW1_Pin, GPIO_PIN_SET);

		if (timer2_flag == 1){
			updateLedBuffer(tmpTimeRed1/100);
			updateLedBuffer_t(tmpTimeGreen1/100);
			if(index_led >= MAX_LED){index_led = 0;}
			if(index_led_t >= MAX_LED){index_led_t = 0;}

			update7SEG_t(index_led_t ++);
			update7SEG(index_led ++);

			if(index_led == 2) tmpTimeRed1 = tmpTimeRed1 -100;
			if(index_led_t ==2) tmpTimeGreen1 = tmpTimeGreen1 -100;
			setTimer2(50);
		}


		if(timer1_flag == 1 ){
			tmpTimeGreen1 = greenTime;
			status = State2;
			setTimer1(yellowTime);
		}

		if(isButton1Pressed() == 1){
			mode = 2;
			HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(LED_RED1_GPIO_Port, LED_RED1_Pin, GPIO_PIN_SET);
			status = MAN_RED;
			setTimer1(50);
		}



		break;
	case State2:
		//TODO
		HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, GPIO_PIN_SET);

		HAL_GPIO_WritePin(LED_RED1_GPIO_Port, LED_RED1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(LED_GREEN1_GPIO_Port, LED_GREEN1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(LED_YELLOW1_GPIO_Port, LED_YELLOW1_Pin, GPIO_PIN_RESET);

//		updateLedBuffer_2(tmpTimeRed/100, tmpTimeYellow/100);
		if (timer2_flag == 1){
			updateLedBuffer(tmpTimeRed1/100);
			updateLedBuffer_t(tmpTimeYellow1/100);
			if(index_led >= MAX_LED){index_led = 0;}
			if(index_led_t >= MAX_LED){index_led_t = 0;}

			update7SEG_t(index_led_t ++);
			update7SEG(index_led ++);

			if(index_led == 2) tmpTimeRed1 = tmpTimeRed1 -100;
			if(index_led_t ==2) tmpTimeYellow1 = tmpTimeYellow1 - 100;
setTimer2(50);
		}

		if(timer1_flag == 1 ){
			tmpTimeRed1 = redTime;
			tmpTimeYellow1 = yellowTime;
			status = State3;
			setTimer1(greenTime);
		}
		if(isButton1Pressed() == 1){
			mode = 2;
			HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(LED_RED1_GPIO_Port, LED_RED1_Pin, GPIO_PIN_SET);
			status = MAN_RED;
			setTimer1(50);
		}



		break;

	case State3:
		//TODO
		HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, GPIO_PIN_SET);

		HAL_GPIO_WritePin(LED_RED1_GPIO_Port, LED_RED1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(LED_GREEN1_GPIO_Port, LED_GREEN1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(LED_YELLOW1_GPIO_Port, LED_YELLOW1_Pin, GPIO_PIN_SET);

//		updateLedBuffer_2(tmpTimeGreen/100, tmpTimeRed/100);
		if (timer2_flag == 1){
			updateLedBuffer(tmpTimeGreen1/100);
			updateLedBuffer_t(tmpTimeRed1/100);
			if(index_led >= MAX_LED){index_led = 0;}
			if(index_led_t >= MAX_LED){index_led_t = 0;}

			update7SEG_t(index_led_t ++);
			update7SEG(index_led ++);

			if(index_led == 2) tmpTimeGreen1 = tmpTimeGreen1 -100;
			if(index_led_t ==2) tmpTimeRed1 = tmpTimeRed1 - 100;
setTimer2(50);
		}

		if(timer1_flag == 1 ){
            tmpTimeGreen1 = greenTime;
			status = State4;
			setTimer1(yellowTime);
		}
		if(isButton1Pressed() == 1){
			mode = 2;
			HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(LED_RED1_GPIO_Port, LED_RED1_Pin, GPIO_PIN_SET);
			status = MAN_RED;
			setTimer1(50);
		}

		break;

	case State4:
		//TODO
		HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, GPIO_PIN_RESET);

		HAL_GPIO_WritePin(LED_RED1_GPIO_Port, LED_RED1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(LED_GREEN1_GPIO_Port, LED_GREEN1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(LED_YELLOW1_GPIO_Port, LED_YELLOW1_Pin, GPIO_PIN_SET);

//		updateLedBuffer_2(tmpTimeYellow/100, tmpTimeRed/100);
		if (timer2_flag == 1){
			updateLedBuffer(tmpTimeYellow1/100);
			updateLedBuffer_t(tmpTimeRed1/100);
			if(index_led >= MAX_LED){index_led = 0;}
			if(index_led_t >= MAX_LED){index_led_t = 0;}

			update7SEG_t(index_led_t ++);
			update7SEG(index_led ++);

			if(index_led == 2) tmpTimeYellow1 = tmpTimeYellow1-100;
			if(index_led_t ==2) tmpTimeRed1= tmpTimeRed1 -100;
setTimer2(50);
		}

		if(timer1_flag == 1 ){
  tmpTimeRed1 = redTime;
  tmpTimeYellow1 = yellowTime;
			status = State1;
			setTimer1(greenTime);
		}
		if(isButton1Pressed() == 1){
			mode = 2;
			HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(LED_RED1_GPIO_Port, LED_RED1_Pin, GPIO_PIN_SET);
			status = MAN_RED;
			setTimer1(50);
		}

		break;

	default:
		break;
	}
}
