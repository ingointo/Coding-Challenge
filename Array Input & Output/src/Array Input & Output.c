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
	int i,aray[50];
	printf("Enter A Values: ");
	for(i=0;i<5;i++){
		scanf("%d",&aray[i]);
	}
	printf("Entered Values Are : \n");
	for(i=0;i<5;i++){
		printf(" %d\t ",aray[i]);
	}
	return EXIT_SUCCESS;
}
