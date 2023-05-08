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
	float mark;
	mark=mark<=100;
	printf("Please Enter Your Your Obtained Marks : ");
	scanf("%f",&mark);
	if(mark>=50){
		if(mark>100){
			printf("Error You Entered\n Please Enter Correct You Obtained Marks");
}
		else{
		printf("You Are Passed");
}
	}else{
        printf("You are Failed You Are Scored Less Than : %f",mark);
	}
	return EXIT_SUCCESS;
}
