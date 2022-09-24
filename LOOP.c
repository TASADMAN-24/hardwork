#include<stdio.h>
void main(){

     for(int i=1; i<=5;i++){
         for(int j=1; j<=6;j++){

            if (i==1)
            printf("* ");
            else if (i==3)
            printf("* ");
            else if (i==5)
            printf("* ");
            else if (i>1&&j==1)
            printf("*");

            else
          printf(" ");
        }
        printf("\n");
    }
}
