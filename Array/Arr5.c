#include<stdio.h>
int main(){
    int i,j,count,size;
    int arr[50],freq[50];
    // inputing size of the array
    printf("Enter The Size Of An Array: ");
    scanf("%d",&size);
    // inputing elemnets of array
    printf("Enter the Elements of Array:\n");
    for(i=0;i<size;i++){
        scanf("%d",&arr[i]);
        freq[i]=-1;
    }
    for(i=0;i<size;i++){
        count=1;
        for(j=i+1;j<size;j++){
            if(arr[i]==arr[j]){
                count++;
                freq[j]=0;
            }
           
        }
        if(freq[i]!=0){
            freq[i]=count;
        }
    }
        printf("Freequency of all Elements in Array:\n");
        for(i=0;i<size;i++){
            if(freq[i]!=0){
                printf("%d Occurs %d Times \n",arr[i],freq[i]);
            }
        }
    
    return 0;
}