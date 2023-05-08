/*
 ============================================================================
 Name        : Sum.c
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
    int num,i,sum=0;
	printf("Enter Your Number : ");
	scanf("%d",&num);
	for(i=1;i<=num;i++){
		sum=sum+i;
	}
	printf("Result is: %d",sum);
	return EXIT_SUCCESS;
}
