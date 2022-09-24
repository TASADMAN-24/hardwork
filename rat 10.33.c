#include <stdio.h>

float PMT (int money);
float PMT2(int money);
float PMT3(int money);
float PMT4(int money);
void display (float pmt);


int main() {
    int money, year;
    float pmt;

    printf("Please enter amount of money to be borrowed : ");
    scanf("%d",&money);

    printf("Please enter the number of years of the loan : ");
    scanf("%d",&year);

    if(year == 1 ){
        pmt = PMT(money);
    }
    else if(year == 2 ){
        pmt = PMT2(money);
    }
    else if(year == 3 ){
        pmt = PMT3(money);
    }
    else {
        pmt = PMT4(money);
    }
    display(pmt);

    return 0;
}

float PMT(int money){
    float i = 2.90/100;
    float PMT = i*money;
    return PMT;
}
float PMT2(int money){
    float mrr;
    scanf("%d",&mrr);
    float i = (mrr-3.25)/100;
    float PMT = i*money;
    return PMT;
}
float PMT3(int money){
    float mrr;
    scanf("%d",&mrr);

    float i = (mrr-2.40)/100;
    float PMT = i*money;
    return PMT;
}
float PMT4(int money){
    float mrr;
    scanf("%d",&mrr);

    float i = (mrr-0.50)/100;
    float PMT = i*money;
    return PMT;
}

void display(float pmt){
    float result;
    int mot = (int)pmt%100;
    if(mot != 0){
        result = (int)pmt-mot+100;
    }
    else{
        result = (int)pmt;
    }
    printf("money to be paid per year: %f\n",result);

}
