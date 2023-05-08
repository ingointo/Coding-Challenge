/*
 ============================================================================
 Name        : Prrint.c
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
	int i,num,j;
	printf("Enter A Number To How Many Stars You Want See That : ");
	scanf("%d",&num);
	for(i=0;i<=num;i++){
		for(j=0;j<i;j++){
			printf(" *");
		}
		printf("\n");
	}

	return EXIT_SUCCESS;
}
