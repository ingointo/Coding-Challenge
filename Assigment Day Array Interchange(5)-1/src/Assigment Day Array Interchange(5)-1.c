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
		int i,limit,array1[100];
		int temp,array2[100];
		printf("Enter Limit: ");
		scanf("%d",&limit);
		printf("Enter Values Of Array1:\n");
		for(i=0;i<limit;i++){
			scanf("%d",&array1[i]);
		}
		printf("Enter Values Of Array2:\n");
		for(i=0;i<limit;i++){
			scanf("%d",&array2[i]);
		}
		printf("Sorted Values Are:\n");
		for(i=0;i<limit;i++){
			temp=array1[i];
			array1[i]=array2[i];
			array2[i]=temp;
		}
		printf("Array 1: ");
		for(i=0;i<limit;i++){
			printf("%d ",array1[i]);
		}
		printf("\nArray 2: ");
		for(i=0;i<limit;i++){
			printf("%d ",array2[i]);
		}
		return EXIT_SUCCESS;
	}
