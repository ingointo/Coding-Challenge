/*
 ============================================================================
 Name        : Greater.c
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
	int num1,num2;
	printf("Enter Two Numbers : \n");
	scanf("%d%d",&num1,&num2);
	if(num1>num2){
		printf("Greatest Number Is : %d",num1);
	}
	else{
		printf("Greatest Number Is : %d",num2);
	}
	return EXIT_SUCCESS;
}
