/*
 ============================================================================
 Name        : Function.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int sum();
int main(void) {
	setbuf(stdout,NULL);
	int res;
	res=sum();
	printf("Result Is: %d ",res);
	return EXIT_SUCCESS;
}
int sum(){
	int num1,num2,result;
	printf("Enter Two Numbers:\n");
	scanf("%d%d",&num1,&num2);
	result=num1+num2;
	return result;
}
