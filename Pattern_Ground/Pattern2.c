#include<stdio.h>
void main(){
    int i,j,s;
    for(s=1;s<=3;s++){
        printf(" ");
    }
    for(i=1;i<=7;i++){
        printf("   +\n");
        if(i==3){
            for(j=1;j<=7;j++){
                printf("+");
            }
        }
    }
}
