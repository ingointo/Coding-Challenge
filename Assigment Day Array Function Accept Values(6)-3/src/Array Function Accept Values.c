/*
 ============================================================================
 Name        : Array.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
void getarray(int limit);
void getdisplay(int limit);
int main(void) {
	int limit;
	setbuf(stdout,NULL);
	printf("Enter The Limit Of The Array:\n");
	scanf("%d",&limit);
	getarray(limit);
	getdisplay(limit);

	return EXIT_SUCCESS;
}
void getarray(int limit){
	int values[30][30];
	int i,j;
	printf("Enter Array Values:\n");
	for(i=0;i<limit;i++){
		for(j=0;j<limit;j++){
			scanf("%d",&values[i][j]);
		}
	}
}
void getdisplay(int limit){
	int values[30][30];
	int i,j;
	printf("Entered Array Values Are:\n");
	for(i=0;i<limit;i++){
		for(j=0;j<limit;j++){
			printf("%d\t",values[i][j]);
		}
		printf("\n");
	}

}
