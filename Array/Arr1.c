#include <stdio.h>
// total number of duplicate elements in array

int  main(){
    int i,j,arr[50];
    int size,count=0;

    // Input Size of an array

    printf("Enter Size of The Array:\n");
    scanf("%d",&size);

    // inputing array elements

    printf("Enter The Elements In Array:\n");
    for(i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }

    // find all duplicate elements in array
    
    for(i=0;i<=size;i++){
        for(j=i+1;j<=size;j++){

// If duplicate found then increment count by 1 

            if(arr[i]==arr[j]){
                count++;
                break;
            }
        }
    }
    printf("Total Number of Duplicate elements found in Array:%d  ",count);
    return 0;
}