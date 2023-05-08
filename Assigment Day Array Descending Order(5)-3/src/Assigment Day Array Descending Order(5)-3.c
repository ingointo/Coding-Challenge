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
	int size,values[100],i,j,temp;
	printf("Enter The Size Of An Array: ");
	scanf("%d",&size);
	printf("Enter The Values Of An Array: ");
	for(i=0;i<size;i++){
		scanf("%d",&values[i]);
	}
	printf("Sorted Array Is:\n");
	for(i=0;i<size-1;i++){
		for(j=i+1;j<size;j++){
			if(values[j]>values[i]){
				temp=values[i];
				values[i]=values[j];
				values[j]=temp;
			}
		}
	}
	for(i=0;i<size;i++){
	printf("%d ",values[i]);
	}

	return EXIT_SUCCESS;
}
