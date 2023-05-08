/*
 ============================================================================
 Name        : Assigment.c
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
	int lim,i,sum=0;
	printf("Enter Limit Of The Sum Off Odd Number You Need: ");
	scanf("%d",&lim);
	printf("  Entered Limit: %d\n",lim);
	for(i=1;i<=lim;i++){
		if(i%2==1){
			sum=sum+i;
		}
	}
	printf("Sum Of Odd Numbers = %d\n",sum);
	return EXIT_SUCCESS;
}
