/*
 ============================================================================
 Name        : Array.c
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
	int i,a[100],limit;
	printf("Enter Array Limit: ");
	scanf("%d",&limit);
	printf("Enter The Values:\n");
	for(i=0;i<limit;i++){
		scanf("%d",&a[i]);
	}
	printf("Entered Values Are:\n ");
	for(i=0;i<limit;i++){
		printf("%d\n ",a[i]);
	}
	return EXIT_SUCCESS;
}
