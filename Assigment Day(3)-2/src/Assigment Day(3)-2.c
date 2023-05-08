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
	float totalmarks;
	printf("Enter Your Marks : ");
	scanf("%f",&totalmarks);
	if(totalmarks>=90){
		if(totalmarks>100){
			printf("Errror!!!");
		}
		else{
			printf("Your Grade : A");
		}
	}else if(totalmarks>=80 && totalmarks<=89){
			printf("Your Grade : B");
	}else if(totalmarks>=70 && totalmarks<=79){
		printf("your Grade : C");
	}else if(totalmarks>=60 && totalmarks<=69){
		printf("Your Grade : D");
	}else if(totalmarks>=50 && totalmarks<=59){
		printf("Your Grade : E");
	}else if(totalmarks<50){
		printf("You Are Failed");
	}
	return EXIT_SUCCESS;
}
