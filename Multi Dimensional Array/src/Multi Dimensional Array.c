/*
 ============================================================================
 Name        : Multi.c
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
	int values[3][3],i,j;
	printf("Enter Values:\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			scanf("%d",&values[i][j]);
		}
	}
	printf("Entered Values Are:\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d\t",values[i][j]);
		}
		printf("\n");
	}
	return EXIT_SUCCESS;
}
