/*
 ============================================================================
 Name        : Continue.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i;
	for(i=0;i<10;i++){
		printf("Helloo Groot\n");
		if(i==5){
			continue;
		}printf("Welcome Groot!!\n");
	}
	printf("You Are Finished");
	return EXIT_SUCCESS;
}
