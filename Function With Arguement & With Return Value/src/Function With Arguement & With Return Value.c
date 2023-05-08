/*
 ============================================================================
 Name        : Function.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int sum(int,int);
int main(void) {
	setbuf(stdout,NULL);
	int a,b,res;
	printf("Enter Two Numbers: ");
	scanf("%d%d",&a,&b);
	sum(a,b);
	res=sum(a,b);
	printf("Result Is: %d",res);
	return EXIT_SUCCESS;
}
int sum(int num1,int num2){
	int result;
	result=num1+num2;
	return result;
}
