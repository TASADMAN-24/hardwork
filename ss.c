#include <stdio.h>

void mutiply(int *v,int *result);


int main()
{
    int value = 1;
    int result = 1;

    do{
        printf("Enter number to multiply or 0 to exit =>");
        scanf("%d",&value);

        if (value > 0);
        mutiply(&value,&result);

    }while(value != 0);

    printf("the multiply result is %d\n",result);

    return 0;
}

void mutiply(int *v,int *r){
     *r = *r * *v;
}
