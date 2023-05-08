#include<stdio.h>
int main(){
    int i,j,size,prime,flag,large;
    int arr[50];

    // inputing the size of the array

    printf("Enter the size of the Array: ");
    scanf("%d",&size);

    // inputing elemnets of the array

    printf("Enter The Elements of the Array:\n");
    for(i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<size;i++){
        prime=arr[i];
        flag=0;
        for(j=2;j<prime;j++){
            if(prime%j==0){
                flag=1;
                break;
            }
        }
        if(flag==0){
            printf("%d  is Prime \n",prime);
        }
    }
return 0;
  }
        
        
    