#include <stdio.h>
void main(){
    int a;

    printf("please enter odd number : ");
    scanf("%d",&a);
    int k=a;
    for(int i=0;i<k;i++){
        for(int j=0;j<a;j++){
            if(j<=i)
                printf("*");
             else;
                printf(" ");
        }
        printf("\n");
        a--;
    }
}
