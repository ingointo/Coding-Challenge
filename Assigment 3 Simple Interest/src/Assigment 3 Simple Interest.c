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
	int principalamount;
	float interestrate,numberofyears,simpleinterest;
	printf("Enter Principal Amount : ");
	scanf("%d",&principalamount);
	printf("Enter Interest Rate : ");
	scanf("%f",&interestrate);
	printf("Enter Number Of Years : ");
	scanf("%f",&numberofyears);
	simpleinterest=(principalamount*interestrate*numberofyears)/100;
	printf("Simple Interest (SI):%.3f",simpleinterest);

	return EXIT_SUCCESS;
}
