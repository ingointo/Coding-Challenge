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

void sum();
int main(void) {
	sum();
	sum();
	return EXIT_SUCCESS;
}
void sum(){
	int num1,num2,sum;
	setbuf(stdout,NULL);
	printf("Enter Two Numbers:\n");
	scanf("%d%d",&num1,&num2);
	sum=num1+num2;
	printf("Result IS: %d\n",sum);
}
