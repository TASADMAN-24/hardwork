#include<stdio.h>

void main () {
     int A=9;
     for (int i=0; i<9; i++){
        for (int j=0; j<A; j++){

            if(j<=i)
            printf("*");
        }
        printf("\n");
        A--;
     }
}



