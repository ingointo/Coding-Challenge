/*
 ============================================================================
 Name        : Even.c
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
	int num,i;
	printf("Enter A Number Which Wan't Even : ");
	scanf("%d",&num);
	for(i=1;i<=num;i++){
		if(i%2==0){
			printf("Result is : %d\n",i);
		}


	}
	return EXIT_SUCCESS;
}
