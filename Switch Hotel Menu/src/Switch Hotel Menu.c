/*
 ============================================================================
 Name        : Switch.c
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
	int choice;
    printf("Select Any Of The Choices\n 1.Barotta\n 2.Chicken Biriyaanii\n 3.Mandhii\n 4.SevenUP\n 5.Matton Soup\n Enter Your Choice ");
    scanf("%d",&choice);
    switch(choice){
    case 1:
    	printf("You Selected  Barotta");
    	break;
    case 2:
    	printf("Youu Selected  Chicken Biriiyaanii");
    	break;
    case 3:
    	printf("You Selected Mandhii");
    	break;
    case 4:
    	printf("You Selected SevenUp");
    	break;
    case 5:
    	printf("You selected Matton Soup");
    	break;
    default :
    	printf("You Are Such A Big Fool\n   Dont Do That Check Choice Bro!!!!");
    }
	return EXIT_SUCCESS;
}
