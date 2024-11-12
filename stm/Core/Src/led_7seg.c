/*
 * led_7seg.c
 *
 *  Created on: Oct 28, 2024
 *      Author: admin
 */

#include "led_7seg.h"

  void display7SEG(int num)
    {
   	  if(num == 0)
   	  {
   		  HAL_GPIO_WritePin(a_GPIO_Port, a_Pin,GPIO_PIN_RESET);
   		  HAL_GPIO_WritePin(b_GPIO_Port, b_Pin,GPIO_PIN_RESET);
   		  HAL_GPIO_WritePin(c_GPIO_Port, c_Pin,GPIO_PIN_RESET);
   		  HAL_GPIO_WritePin(d_GPIO_Port, d_Pin,GPIO_PIN_RESET);
   		  HAL_GPIO_WritePin(e_GPIO_Port, e_Pin,GPIO_PIN_RESET);
   		  HAL_GPIO_WritePin(f_GPIO_Port, f_Pin,GPIO_PIN_RESET);
   		  HAL_GPIO_WritePin(g_GPIO_Port, g_Pin,GPIO_PIN_SET);

   	  }
   	  if(num == 1)
   	  {
   		  HAL_GPIO_WritePin(a_GPIO_Port, a_Pin,GPIO_PIN_SET);
   		  HAL_GPIO_WritePin(b_GPIO_Port, b_Pin,GPIO_PIN_RESET);
   		  HAL_GPIO_WritePin(c_GPIO_Port, c_Pin,GPIO_PIN_RESET);
   		  HAL_GPIO_WritePin(d_GPIO_Port, d_Pin,GPIO_PIN_SET);
   		  HAL_GPIO_WritePin(e_GPIO_Port, e_Pin,GPIO_PIN_SET);
   		  HAL_GPIO_WritePin(f_GPIO_Port, f_Pin,GPIO_PIN_SET);
   		  HAL_GPIO_WritePin(g_GPIO_Port, g_Pin,GPIO_PIN_SET);
   	  }
   	  if(num == 2)
   	  {
   		  HAL_GPIO_WritePin(a_GPIO_Port, a_Pin,GPIO_PIN_RESET);
   		  HAL_GPIO_WritePin(b_GPIO_Port, b_Pin,GPIO_PIN_RESET);
   		  HAL_GPIO_WritePin(c_GPIO_Port, c_Pin,GPIO_PIN_SET);
   		  HAL_GPIO_WritePin(d_GPIO_Port, d_Pin,GPIO_PIN_RESET);
   		  HAL_GPIO_WritePin(e_GPIO_Port, e_Pin,GPIO_PIN_RESET);
   		  HAL_GPIO_WritePin(f_GPIO_Port, f_Pin,GPIO_PIN_SET);
   		  HAL_GPIO_WritePin(g_GPIO_Port, g_Pin,GPIO_PIN_RESET);
   	  }
   	  if(num == 3)
   	  {
   		  HAL_GPIO_WritePin(a_GPIO_Port, a_Pin,GPIO_PIN_RESET);
   		  HAL_GPIO_WritePin(b_GPIO_Port, b_Pin,GPIO_PIN_RESET);
   		  HAL_GPIO_WritePin(c_GPIO_Port, c_Pin,GPIO_PIN_RESET);
   		  HAL_GPIO_WritePin(d_GPIO_Port, d_Pin,GPIO_PIN_RESET);
   		  HAL_GPIO_WritePin(e_GPIO_Port, e_Pin,GPIO_PIN_SET);
   		  HAL_GPIO_WritePin(f_GPIO_Port, f_Pin,GPIO_PIN_SET);
   		  HAL_GPIO_WritePin(g_GPIO_Port, g_Pin,GPIO_PIN_RESET);
   	  }
   	  if(num == 4)
   	  {
   		  HAL_GPIO_WritePin(a_GPIO_Port, a_Pin,GPIO_PIN_SET);
   		  HAL_GPIO_WritePin(b_GPIO_Port, b_Pin,GPIO_PIN_RESET);
   		  HAL_GPIO_WritePin(c_GPIO_Port, c_Pin,GPIO_PIN_RESET);
   		  HAL_GPIO_WritePin(d_GPIO_Port, d_Pin,GPIO_PIN_SET);
   		  HAL_GPIO_WritePin(e_GPIO_Port, e_Pin,GPIO_PIN_SET);
   		  HAL_GPIO_WritePin(f_GPIO_Port, f_Pin,GPIO_PIN_RESET);
   		  HAL_GPIO_WritePin(g_GPIO_Port, g_Pin,GPIO_PIN_RESET);
   	  }
   	  if(num == 5)
   	  {
   		  HAL_GPIO_WritePin(a_GPIO_Port, a_Pin,GPIO_PIN_RESET);
   		  HAL_GPIO_WritePin(b_GPIO_Port, b_Pin,GPIO_PIN_SET);
   		  HAL_GPIO_WritePin(c_GPIO_Port, c_Pin,GPIO_PIN_RESET);
   		  HAL_GPIO_WritePin(d_GPIO_Port, d_Pin,GPIO_PIN_RESET);
   		  HAL_GPIO_WritePin(e_GPIO_Port, e_Pin,GPIO_PIN_SET);
   		  HAL_GPIO_WritePin(f_GPIO_Port, f_Pin,GPIO_PIN_RESET);
   		  HAL_GPIO_WritePin(g_GPIO_Port, g_Pin,GPIO_PIN_RESET);
   	  }
   	  if(num == 6)
   	  {
   		  HAL_GPIO_WritePin(a_GPIO_Port, a_Pin,GPIO_PIN_RESET);
   		  HAL_GPIO_WritePin(b_GPIO_Port, b_Pin,GPIO_PIN_SET);
   		  HAL_GPIO_WritePin(c_GPIO_Port, c_Pin,GPIO_PIN_RESET);
   		  HAL_GPIO_WritePin(d_GPIO_Port, d_Pin,GPIO_PIN_RESET);
   		  HAL_GPIO_WritePin(e_GPIO_Port, e_Pin,GPIO_PIN_RESET);
   		  HAL_GPIO_WritePin(f_GPIO_Port, f_Pin,GPIO_PIN_RESET);
   		  HAL_GPIO_WritePin(g_GPIO_Port, g_Pin,GPIO_PIN_RESET);
   	  }
   	  if(num == 7)
   	  {
   		  HAL_GPIO_WritePin(a_GPIO_Port, a_Pin,GPIO_PIN_RESET);
   		  HAL_GPIO_WritePin(b_GPIO_Port, b_Pin,GPIO_PIN_RESET);
   		  HAL_GPIO_WritePin(c_GPIO_Port, c_Pin,GPIO_PIN_RESET);
   		  HAL_GPIO_WritePin(d_GPIO_Port, d_Pin,GPIO_PIN_SET);
   		  HAL_GPIO_WritePin(e_GPIO_Port, e_Pin,GPIO_PIN_SET);
   		  HAL_GPIO_WritePin(f_GPIO_Port, f_Pin,GPIO_PIN_SET);
   		  HAL_GPIO_WritePin(g_GPIO_Port, g_Pin,GPIO_PIN_SET);
   	  }
   	  if(num == 8)
   	  {
   		  HAL_GPIO_WritePin(a_GPIO_Port, a_Pin,GPIO_PIN_RESET);
   		  HAL_GPIO_WritePin(b_GPIO_Port, b_Pin,GPIO_PIN_RESET);
   		  HAL_GPIO_WritePin(c_GPIO_Port, c_Pin,GPIO_PIN_RESET);
   		  HAL_GPIO_WritePin(d_GPIO_Port, d_Pin,GPIO_PIN_RESET);
   		  HAL_GPIO_WritePin(e_GPIO_Port, e_Pin,GPIO_PIN_RESET);
   		  HAL_GPIO_WritePin(f_GPIO_Port, f_Pin,GPIO_PIN_RESET);
   		  HAL_GPIO_WritePin(g_GPIO_Port, g_Pin,GPIO_PIN_RESET);
   	  }
   	  if(num == 9)
   	  {
   		  HAL_GPIO_WritePin(a_GPIO_Port, a_Pin,GPIO_PIN_RESET);
   		  HAL_GPIO_WritePin(b_GPIO_Port, b_Pin,GPIO_PIN_RESET);
   		  HAL_GPIO_WritePin(c_GPIO_Port, c_Pin,GPIO_PIN_RESET);
   		  HAL_GPIO_WritePin(d_GPIO_Port, d_Pin,GPIO_PIN_RESET);
   		  HAL_GPIO_WritePin(e_GPIO_Port, e_Pin,GPIO_PIN_SET);
   		  HAL_GPIO_WritePin(f_GPIO_Port, f_Pin,GPIO_PIN_RESET);
   		  HAL_GPIO_WritePin(g_GPIO_Port, g_Pin,GPIO_PIN_RESET);
   	  }
   	  else
   	  {
   		  return;
   	  }

    }

  void display7SEG1(int num)
  {
	  if(num == 0)
	  {
		  HAL_GPIO_WritePin(a1_GPIO_Port, a1_Pin,GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(b1_GPIO_Port, b1_Pin,GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(c1_GPIO_Port, c1_Pin,GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(d1_GPIO_Port, d1_Pin,GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(e1_GPIO_Port, e1_Pin,GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(f1_GPIO_Port, f1_Pin,GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(g1_GPIO_Port, g1_Pin,GPIO_PIN_SET);

	  }
	  if(num == 1)
	  {
		  HAL_GPIO_WritePin(a1_GPIO_Port, a1_Pin,GPIO_PIN_SET);
		  HAL_GPIO_WritePin(b1_GPIO_Port, b1_Pin,GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(c1_GPIO_Port, c1_Pin,GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(d1_GPIO_Port, d1_Pin,GPIO_PIN_SET);
		  HAL_GPIO_WritePin(e1_GPIO_Port, e1_Pin,GPIO_PIN_SET);
		  HAL_GPIO_WritePin(f1_GPIO_Port, f1_Pin,GPIO_PIN_SET);
		  HAL_GPIO_WritePin(g1_GPIO_Port, g1_Pin,GPIO_PIN_SET);
	  }
	  if(num == 2)
	  {
		  HAL_GPIO_WritePin(a1_GPIO_Port, a1_Pin,GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(b1_GPIO_Port, b1_Pin,GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(c1_GPIO_Port, c1_Pin,GPIO_PIN_SET);
		  HAL_GPIO_WritePin(d1_GPIO_Port, d1_Pin,GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(e1_GPIO_Port, e1_Pin,GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(f1_GPIO_Port, f1_Pin,GPIO_PIN_SET);
		  HAL_GPIO_WritePin(g1_GPIO_Port, g1_Pin,GPIO_PIN_RESET);
	  }
	  if(num == 3)
	  {
		  HAL_GPIO_WritePin(a1_GPIO_Port, a1_Pin,GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(b1_GPIO_Port, b1_Pin,GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(c1_GPIO_Port, c1_Pin,GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(d1_GPIO_Port, d1_Pin,GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(e1_GPIO_Port, e1_Pin,GPIO_PIN_SET);
		  HAL_GPIO_WritePin(f1_GPIO_Port, f1_Pin,GPIO_PIN_SET);
		  HAL_GPIO_WritePin(g1_GPIO_Port, g1_Pin,GPIO_PIN_RESET);
	  }
	  if(num == 4)
	  {
		  HAL_GPIO_WritePin(a1_GPIO_Port, a1_Pin,GPIO_PIN_SET);
		  HAL_GPIO_WritePin(b1_GPIO_Port, b1_Pin,GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(c1_GPIO_Port, c1_Pin,GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(d1_GPIO_Port, d1_Pin,GPIO_PIN_SET);
		  HAL_GPIO_WritePin(e1_GPIO_Port, e1_Pin,GPIO_PIN_SET);
		  HAL_GPIO_WritePin(f1_GPIO_Port, f1_Pin,GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(g1_GPIO_Port, g1_Pin,GPIO_PIN_RESET);
	  }
	  if(num == 5)
	  {
		  HAL_GPIO_WritePin(a1_GPIO_Port, a1_Pin,GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(b1_GPIO_Port, b1_Pin,GPIO_PIN_SET);
		  HAL_GPIO_WritePin(c1_GPIO_Port, c1_Pin,GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(d1_GPIO_Port, d1_Pin,GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(e1_GPIO_Port, e1_Pin,GPIO_PIN_SET);
		  HAL_GPIO_WritePin(f1_GPIO_Port, f1_Pin,GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(g1_GPIO_Port, g1_Pin,GPIO_PIN_RESET);
	  }
	  if(num == 6)
	  {
		  HAL_GPIO_WritePin(a1_GPIO_Port, a1_Pin,GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(b1_GPIO_Port, b1_Pin,GPIO_PIN_SET);
		  HAL_GPIO_WritePin(c1_GPIO_Port, c1_Pin,GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(d1_GPIO_Port, d1_Pin,GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(e1_GPIO_Port, e1_Pin,GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(f1_GPIO_Port, f1_Pin,GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(g1_GPIO_Port, g1_Pin,GPIO_PIN_RESET);
	  }
	  if(num == 7)
	  {
		  HAL_GPIO_WritePin(a1_GPIO_Port, a1_Pin,GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(b1_GPIO_Port, b1_Pin,GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(c1_GPIO_Port, c1_Pin,GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(d1_GPIO_Port, d1_Pin,GPIO_PIN_SET);
		  HAL_GPIO_WritePin(e1_GPIO_Port, e1_Pin,GPIO_PIN_SET);
		  HAL_GPIO_WritePin(f1_GPIO_Port, f1_Pin,GPIO_PIN_SET);
		  HAL_GPIO_WritePin(g1_GPIO_Port, g1_Pin,GPIO_PIN_SET);
	  }
	  if(num == 8)
	  {
		  HAL_GPIO_WritePin(a1_GPIO_Port, a1_Pin,GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(b1_GPIO_Port, b1_Pin,GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(c1_GPIO_Port, c1_Pin,GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(d1_GPIO_Port, d1_Pin,GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(e1_GPIO_Port, e1_Pin,GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(f1_GPIO_Port, f1_Pin,GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(g1_GPIO_Port, g1_Pin,GPIO_PIN_RESET);
	  }
	  if(num == 9)
	  {
		  HAL_GPIO_WritePin(a1_GPIO_Port, a1_Pin,GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(b1_GPIO_Port, b1_Pin,GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(c1_GPIO_Port, c1_Pin,GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(d1_GPIO_Port, d1_Pin,GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(e1_GPIO_Port, e1_Pin,GPIO_PIN_SET);
		  HAL_GPIO_WritePin(f1_GPIO_Port, f1_Pin,GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(g1_GPIO_Port, g1_Pin,GPIO_PIN_RESET);
	  }
	  else
	  {
		  return;
	  }

  }

   int led_buffer [2] = {0,0};
   void update7SEG(int index)
   {
   	switch (index){
   	case 0:
   		   HAL_GPIO_WritePin(EN0_GPIO_Port,EN0_Pin,GPIO_PIN_RESET);
   		   HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, GPIO_PIN_SET);

            display7SEG(led_buffer[index]);
   		break;
   	case 1:
   		   HAL_GPIO_WritePin(EN0_GPIO_Port,EN0_Pin,GPIO_PIN_SET);
   		   HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, GPIO_PIN_RESET);

   		display7SEG(led_buffer[index]);
   		break;
   	default:
   	    break;
   	}
   }
   void updateLedBuffer(int mode) {
       led_buffer[0] = mode / 10;
       led_buffer[1] = mode % 10;
   }
   // mode led


   //TIME LED
   int led_buffer_t [2] = {0,0};
   void update7SEG_t(int index)
   {
   	switch (index){
   	case 0:
   		   HAL_GPIO_WritePin(EN2_GPIO_Port,EN2_Pin,GPIO_PIN_RESET);
   		   HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, GPIO_PIN_SET);

            display7SEG1(led_buffer_t[index]);
   		break;
   	case 1:
   		   HAL_GPIO_WritePin(EN2_GPIO_Port,EN2_Pin,GPIO_PIN_SET);
   		   HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, GPIO_PIN_RESET);

   		display7SEG1(led_buffer_t[index]);
   		break;
   	default:
   	    break;
   	}
   }
   void updateLedBuffer_t(int time) {
       led_buffer_t[0] = time / 10;
       led_buffer_t[1] = time % 10;
   }
   //TIME LED
   int led_buffer_2 [4] = {0,0,0,0};
   void update7SEG2(int index)
     {
      switch (index){
      case 0:
          HAL_GPIO_WritePin(EN0_GPIO_Port,EN0_Pin,GPIO_PIN_RESET);
          HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, GPIO_PIN_SET);
          HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, GPIO_PIN_SET);
          HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, GPIO_PIN_SET);
              display7SEG(led_buffer_2[index]);

       break;
      case 1:
          HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin,GPIO_PIN_SET);
          HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, GPIO_PIN_RESET);
          HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, GPIO_PIN_SET);
          HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, GPIO_PIN_SET);
       display7SEG(led_buffer_2[index]);
       break;
      case 2:
          HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin,GPIO_PIN_SET);
          HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, GPIO_PIN_RESET);
          HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, GPIO_PIN_SET);
          HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, GPIO_PIN_SET);

       display7SEG(led_buffer_2[index]);
       break;
      case 3:
          HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin,GPIO_PIN_SET);
          HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, GPIO_PIN_RESET);
          HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, GPIO_PIN_SET);
          HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, GPIO_PIN_SET);
       display7SEG(led_buffer_2[index]);
       break;
      default:
          break;
      }
     }

   void updateLedBuffer_2(int col1,int col2) {
       led_buffer_2[0] = col1 / 10;
       led_buffer_2[1] = col1 % 10;

       led_buffer_2[2] = col2 / 10;
       led_buffer_2[3] = col2 % 10;

   }
