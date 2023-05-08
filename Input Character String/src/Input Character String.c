/*
 ============================================================================
 Name        : Input.c
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
	int name[20];
	printf("Enter A Name: ");
	scanf("%s",name);
	printf("Entered Name Is: %s",name);
	return EXIT_SUCCESS;
}
