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
	int i,mul,result,lim;
	printf("Enter A Number Which Multiplication Table You Need: ");
	scanf("%d",&mul);
	printf("Enter Your Multiplication Table Limit: ");
	scanf("%d",&lim);
	for(i=1;i<=lim;i++){
		result=i*mul;
			printf("%d * %d = %d\n",i,mul,result);
		}

	return EXIT_SUCCESS;
}
