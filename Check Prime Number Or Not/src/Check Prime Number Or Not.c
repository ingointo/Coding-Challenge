/*
 ============================================================================
 Name        : Check.c
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
	int num,i,flag=0;
	printf("Enter A Number \nTo Check Whether Prime Number Or Not : ");
	scanf("%d",&num);
	for(i=2;i<num/2;i++){
		if(num%i==0){
			flag=1;
			break;
		}
	}
		if(flag==0){
			printf("Prime ");
		}else{
			printf("Not a Prime Number ");
		}
	return EXIT_SUCCESS;
}
