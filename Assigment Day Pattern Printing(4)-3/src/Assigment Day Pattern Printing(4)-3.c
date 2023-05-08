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
	int i,num,j;
	printf("Enter A Number Pattern You Need: ");
	scanf("%d",&num);
	for(i=1;i<=num;i++){
		for(j=1;j<=i;j++){
			printf("%d ",j);
		}printf("\n");
	}


	return EXIT_SUCCESS;
}
