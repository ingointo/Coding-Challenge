/*
 ============================================================================
 Name        : Sorted.c
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
	int i,limit,array[100];
	int temp,j;
	printf("Enter Limit: ");
	scanf("%d",&limit);
	printf("Enter Values Of Array:\n");
	for(i=0;i<limit;i++){
		scanf("%d",&array[i]);
		}
	printf("Sorted Values Are:\n");
	for(i=0;i<limit-1;i++){
		for(j=i+1;j<limit;j++){
			if(array[i]>array[j]){
				temp=array[i];
				array[i]=array[j];
				array[j]=temp;
			}
		}
	}
	for(i=0;i<limit;i++){
		printf("%d\n",array[i]);

	}
	return EXIT_SUCCESS;
}
