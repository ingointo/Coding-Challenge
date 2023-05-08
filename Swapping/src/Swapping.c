/*
 ============================================================================
 Name        : Swapping.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a=20,b=30,temp;
	temp=a;
	a=b;
	b=temp;
	printf("a: %d b: %d",a,b);
	return EXIT_SUCCESS;
}
