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
	int i,values[100],lim,sum=0;
	printf("Enter Limit: ");
	scanf("%d",&lim);
	printf("Enter Values:\n");
	for(i=0;i<lim;i++){
		scanf("%d",&values[i]);
	}
	for(i=0;i<lim;i++){
		sum=sum+values[i];
	}
	printf("Result Of Sum Is :%d ",sum);
	return EXIT_SUCCESS;
}
