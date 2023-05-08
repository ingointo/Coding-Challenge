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
	int weeks;
	printf("1.\n2.\n3.\n4.\n5.\n6.\n7.\n Enter Your Numbers To Check Weeks! : ");
	scanf("%d",&weeks);
	printf("You Are Selected %d Day is  ",weeks);
	switch(weeks){
	case 1:
		printf(" Is:Sunday");
	    break;
	case 2:
		printf(" Is: Monday");
	    break;
	case 3:
		printf(" Is: Tuesday");
		break;
	case 4:
		printf(" Is: Wednesday");
		break;
	case 5:
		printf(" Is: Thursday");
		break;
	case 6:
		printf(" Is: Friday");
		break;
	case 7:
		printf(" Is: Saturday");
		break;
	default:
		printf("  You Fool!!\n Enter Given Choices");

	}
	return EXIT_SUCCESS;
}
