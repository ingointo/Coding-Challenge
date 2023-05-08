#include<stdio.h>
void main(){
    int i,j,n,k;
    printf("Enter A Integer Number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=2*n-i;j++){
            if(j<=n-i){
                printf(" ");
            }else if((i==1)||(i==n)||(j==1)||(j==n)){
                    printf("*");
                }else {
                    printf(" ");
                }
                
            }
            printf("\n");
        }
        
        // for(k=1;k<=n;k++){
            
        //     printf("*");

        
        // }
        
        printf("\n");
    }
// }