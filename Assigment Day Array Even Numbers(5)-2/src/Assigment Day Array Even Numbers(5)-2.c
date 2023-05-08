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
	int i,size,array[100],even=0;
	printf("Enter The Size Of The Array: ");
	scanf("%d",&size);
	printf("Enter The Values Of The Array:\n");
	for(i=0;i<size;i++){
		scanf("%d",&array[i]);
	}
	printf("Number Of Even Numbers In Given Array is: ");
	for(i=0;i<size;i++){
		if(array[i]%2==0){
			even=even+1;
		}
			}
	printf("%d",even);

		return EXIT_SUCCESS;
}
