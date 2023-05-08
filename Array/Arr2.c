#include<stdio.h>
// unique elements in array
void main(){
    int i,j,size,count;
    int arr[50];
    printf("Enter the size of the Array: ");
    scanf("%d",&size);
    printf("Enter the elements of the Array:\n");
    for(i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    printf("Unique Elements Are: \n");
    for(i=0;i<size;i++){
        count=0;
        for(j=0;j<size;j++){
            if(i!=j){
                if(arr[i]==arr[j]){
                count++;
                }
            }
        }
        if(count==0){
            printf("%d\t",arr[i]);
        }
    }
}