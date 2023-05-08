/*
 ============================================================================
 Name        : User.c
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
	int i,lim,values[100],searchkey;
	int flag=0;
	printf("Enter Limit: ");
	scanf("%d",&lim);
	printf("Enter Values: ");
	for(i=0;i<lim;i++){
		scanf("%d",&values[i]);
	}
	printf("Which Value You Wan't To Search:\n ");
	scanf("%d",&searchkey);
	for(i=0;i<lim;i++){
		if(searchkey==values[i]){
			flag=1;
			break;
		}
			}
	if(flag==1){
		printf("Value Found At The Position: %d",i+1);
	}else{
		printf("Values Not Found!!!\n Check You Entered Values!!!");
	}
	return EXIT_SUCCESS;
}
