#include<stdio.h>
void main(){
    int i,arr[30],even[30],odd[30],ev=0,od=0;
    int size;
    // input size of an arrray

    printf("Enter the size of an Array: ");
    scanf("%d",&size);

    // input the elements of the array is 

    printf("Enter %d Elements of the Array is:\n",size);
    for(i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<size;i++){
        if(arr[i] % 2 == 0){
            even[ev++]=arr[i];
        }
        else{
            odd[od++]=arr[i];
        }
    }
    printf("\nArray Elements of Even[%d] are...\n ",ev);
    for(i=0;i<ev;i++){
        printf("%d\t",even[i]);
    }
    printf("\nArray Elements of Odd[%d] are...\n",od);
    for(i=0;i<od;i++){
        printf("%d\t",odd[i]);
    }
    printf("\n");


}