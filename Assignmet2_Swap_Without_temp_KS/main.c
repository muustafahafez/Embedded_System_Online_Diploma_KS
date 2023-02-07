/*
 * main.c
 *
 *  Created on: Feb 7, 2023
 *      Author: Mustafa Hafez
 */
#include "STD_TYPES.h"
#include <stdio.h>
void main()
{

	u16 num1=5,num2=10;

	printf("num1 before swapping is %d\n",num1);
	printf("num2 before swapping is %d\n",num2);

/***swapping algotithm***/
	num1 = num1+num2;
	num2 = num1-num2;
	num1=num1-num2;
/***swapping algotithm***/

	printf("num1 after swapping is %d\n",num1);
	printf("num2 after swapping is %d\n",num2);

}
