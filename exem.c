#include <stdio.h>

int mutiply(int value,int result);

int main()
{
    int value;
    int result;

    do{
        printf("Enter number to multiply or 0 to exit =>");
        scanf("%d",&value);

        result = mutiply (value,result);

    }while(value != 0);

    printf("the multiply result is %d\n", result);

    return 0;
}

int mutiply(int value,int result){
    return result*value;
}
