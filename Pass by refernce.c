#include <stdio.h>

int mutiply(int value,int result);

int main()
{
    int value;
    int result = 0;

    do{
        printf("Enter number to multiply or 0 to exit =>");
        scanf("%d",&value);

        mutiply(value,result);

    }while(value != 0);

    printf("the multiply result is %d\n",result);

    return 0;
}

int mutiply(int value,int result){

    return value*result;
}
