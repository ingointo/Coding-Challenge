/*
 ============================================================================
 Name        : Choice.c
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
	int num1,num2,choice,result;
	printf("Enter Two Numbers : ");
	scanf("%d%d",&num1,&num2);
	printf("1.Addition \n2.Subtraction \n3.Multiplication \n4.Division \n  Enter Your Choice Manh!!!! : ");
	scanf("%d",&choice);
	printf("You Entered Choice : %d",choice );
	if(1==choice){
		result=num1+num2;
		printf(" Result Is :%d",result);
	}else if(2==choice){
		result=num1-num2;
		printf(" Result Is :%d",result);
	}else if(3==choice){
		result=num1*num2;
		printf(" Result Is :%d",result);
	}else if(4==choice){
		result=num1/num2;
		printf(" Result Is :%d",result);
	}else{
		printf("Check Your Choices \nYou Are Such a Fool Manhhh!!!!!");
	}
}
