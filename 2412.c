#include <stdio.h>
#include <math.h>



float PMT(int money, int year){
    float i = (1.99+1)/100/12;
    float PMT = money/((1-(1/pow(1+i,year*12)))/i);
    return PMT;
}
float PMT2(int money, int year){
    float mrr;
    printf("interest");
    scanf(" %f",&mrr);
    float i = (mrr-3.16+1)/100/12;
    float PMT = money/((1-(1/pow(1+i,year*12)))/i);
    return PMT;
}
float PMT3(int money, int year){
    float mrr;
    printf("interest");
    scanf(" %f",&mrr);
    float i = (mrr-2.65+1)/100/12;
    float PMT = money/((1-(1/pow(1+i,year*12)))/i);
    return PMT;
}
float PMT4(int money, int year){
    float mrr;
    printf("interest");
    scanf("%f",&mrr);
    float i = (mrr-1.00+1)/100/12;
    float PMT = money/((1-(1/pow(1+i,year*12)))/i);
    return PMT;
}
void display(float pmt){
    int result;
    int mot = (int)pmt%100;
    if(mot != 0){
        result = (int)pmt-mot+100;
    }else{
        result = (int)pmt;
    }
    printf("amount to be paid : %d\n",result);
}
int main() {
    int money, year;
    float pmt;
    printf("please enter number money :");
    scanf("%d",&money);

    printf("please enter number year :");
    scanf("%d",&year);

    if(year == 1 ){
        pmt = PMT(money,year);
    }
    else if(year == 2 ){
        pmt = PMT2(money,year);
    }
    else if(year == 3 ){
        pmt = PMT3(money,year);
    }

    else {
        pmt = PMT4(money,year);
    }
    display(pmt);

    return 0;
}
