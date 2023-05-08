/*
 ============================================================================
 Name        : Greater.c
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
	int num1,num2,num3;
	printf("Enter Three Numbers : ");
	scanf("%d%d%d",&num1,&num2,&num3);
	if(num1>num2){
		if(num1>num3){
			printf("Greatest Number is : %d",num1);
		}else{
			printf("Greatest Number Is : %d",num3);
	}
	}
 if(num2>num1){
 if(num2>num3){
			printf("Greatest Number is :%d",num2);
			}else{
				printf("Greatest Number is %d",num3);
			}
 }
	return EXIT_SUCCESS;
	}
