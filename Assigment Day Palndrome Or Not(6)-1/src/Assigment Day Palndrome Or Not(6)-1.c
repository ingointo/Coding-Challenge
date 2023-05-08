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
#include <string.h>

int main(void) {
	setbuf(stdout,NULL);
	char strgname[20];
	int i,length;
	int flag=0;
	printf("Entered A Name:\n");
	scanf("%s",strgname);
	length=strlen(strgname);
	for(i=0;i<length;i++){
		if(strgname[i]!=strgname[length-i-1]){
			flag=1;
			break;
		}
	}
	if(flag==1){
		printf("%s is Not a Palindrome",strgname);
	}
	else{
		printf("%s is Palindrome",strgname);
	}
	return EXIT_SUCCESS;
}
