/*
 ============================================================================
 Name        : Assigment.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout,NULL);
	int number1;
	float number2,sum;
	printf("Enter Two Numbers :\n");
	scanf("%d%f",&number1,&number2);
	sum=number1+number2;
	printf("Sum is : %.2f",sum);
	return EXIT_SUCCESS;
}
