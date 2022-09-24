#include<stdio.h>

int main(){
    int i,j,loop;
    for(i=1;i<=20;i++){
        for(j=1;j<=20;j++){
            if(i==1||j==1||j==9||j==10){
                printf("*");
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }
}
