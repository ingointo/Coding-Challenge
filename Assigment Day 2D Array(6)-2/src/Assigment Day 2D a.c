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
	int array1[30][30];
	int array2[30][30];
	int sum[30][30];
	int row,column,i,j;
	setbuf(stdout,NULL);
	printf("Enter The Size Of Arrays\n");
	printf("Enter Rows : ");
	scanf("%d",&row);
	printf("Enter Columns: ");
	scanf("%d",&column);
	printf("Enter The Values of Array 1:\n");
	for(i=0;i<row;i++){
		for(j=0;j<column;j++){
			scanf("%d",&array1[i][j]);
		}
	}
	printf("Enter The Values of Array 2:\n");
	for(i=0;i<row;i++){
		for(j=0;j<column;j++){
			scanf("%d",&array2[i][j]);
		}
	}
	printf("Entered Values In Array 1:\n");
	for(i=0;i<row;i++){
		for(j=0;j<column;j++){
			printf("%d\t",array1[i][j]);
		}
		printf("\n");
	}
	printf("Entered Values Are:\n");
	for(i=0;i<row;i++){
		for(j=0;j<column;j++){
			printf("%d\t",array2[i][j]);
		}
		printf("\n");
	}
	printf("Sum Of Array Is:\n");
	for(i=0;i<row;i++){
		for(j=0;j<column;j++){
			sum[i][j]=array1[i][j]+array2[i][j];
			printf("%d\t",sum[i][j]);
		}
		printf("\n");
	}

	return EXIT_SUCCESS;
}
