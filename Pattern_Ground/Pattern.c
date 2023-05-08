#include <stdio.h>

int main()
{
    int i,j,k;
    for(i=1;i<=3;i++){
        for(j=1;j<=3*i*i;j++){
            printf("*");
            if(j%(3*i)==0){
                printf("\n");
                }
            }
             if(i==3){
                  break;
        }
        for(k=1;k<=3;k++){
            printf("*\n");
        } 
    }

    return 0;
}