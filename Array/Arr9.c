// find second largest number in array
#include<stdio.h>
void main(){
    int size,i,j,arr[30],large,seclarge;
    printf("Enter the Size of the Array: ");
    scanf("%d",&size);
    printf("Enter the Array Values:\n");
    large=0;
    seclarge=0;
    for(i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<size;i++){
        if(arr[i]>large){
            seclarge=large;
            large=arr[i];
        }
        else if(arr[i]>seclarge){
            seclarge=arr[i];
        }
    }
    printf("Second largest Number is : %d",seclarge);

}