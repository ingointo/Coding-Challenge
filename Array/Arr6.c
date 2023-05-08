#include<stdio.h>
void main(){
    int arr[30],i,size;
    int small,large;
    printf("Enter the size of an Array: ");
    scanf("%d",&size);
    printf("Enter the %d elements of an Array:\n",size);
    for(i=0;i<size;i++){
         scanf("%d",&arr[i]);
    }
    small=arr[0];
    large=arr[0];
    
    for(i=1;i<size;i++){
        if(arr[i]<small){
            small=arr[i];
        }
        if(arr[i]>large){
            large=arr[i];
        }
    }
   
    printf("\n Smallest Number in the Array is: %d\n",small);
    printf("\n Largest Number in the Array is : %d\n",large);
   printf("\n");
}