#include <stdio.h>
int vatCalculater (float *result);
void main(){

    float result;

    vatCalculater(&result);

    printf ("result is %.2f",result);
}

int  vatCalculater (float *result){
    int vatRate;
    float money;
    printf("result : ");
    scanf ("%f",&vatRate);
    printf("money : ");
    scanf ("%f",&money);


    switch (vatRate){
    case 1 ... 4:
        *result=(*result + money);
        break;
    default:
        *result=(*result + money)+5;
        break;
    }
}
