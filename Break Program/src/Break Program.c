/*
 ============================================================================
 Name        : Break.c
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
	int i,num=10;
		for(i=0;i<num;i++){
		printf("Hello\n");
		if(i==5){
			break;
		}
		printf("Smile\n");
	}
	printf("Finished Your Printing");
	return EXIT_SUCCESS;
}
