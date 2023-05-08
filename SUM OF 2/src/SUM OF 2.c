/*
 ============================================================================
 Name        : SUM.c
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
	int number1,number2,sum;
	printf("Enter Two Numbers");
	scanf("%d%d",&number1,&number2);
	sum=number1+number2;
	printf("Result of The Sum is : %d",sum);
	return EXIT_SUCCESS;
}
