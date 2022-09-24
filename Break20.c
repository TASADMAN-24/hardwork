#include<stdio.h>
void main(){
    int n;

    for (n = 10; n>0 ; n--){
        if (n==3){
            printf("countdown aborted");
            break;

        }
        printf ("%d,\t",n);

    }
}

