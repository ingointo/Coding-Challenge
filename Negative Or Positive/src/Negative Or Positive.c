/*
 ============================================================================
 Name        : Negative.c
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
	int num;
	printf("Enter A Number :");
	scanf("%d",&num);
	if(num<0){
		printf("Number Is Negative");
	}else{
		printf("Number Is Positive");
	}
	return EXIT_SUCCESS;
}
