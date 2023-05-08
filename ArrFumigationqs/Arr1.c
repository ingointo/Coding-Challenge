#include<stdio.h>
#include<limits.h>
void main(){
    int size,small,secsmall;
    int i,arr[30];
    printf("Enter a size of Array: ");
    scanf("%d",&size);
    printf("Enter the Values of Array:\n");
    for(i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    small=INT_MAX;
    secsmall=INT_MAX;
    for(i=0;i<size;i++){
        if(arr[i]<small){
            secsmall=small;
            small=arr[i];
        }
        else if(arr[i]>small && arr[i]<secsmall){
          secsmall=arr[i];
        }
    }
    printf("Sec Smallest Number is: %d",secsmall);
    }