#include <stdio.h>
#include <math.h>
//��С�ȿѧ��ѹ��຺
float PMT(int money, int year);
float PMT2(int money, int year);
float PMT3(int money, int year);
void display(float pmt);

int main() {
    //��С�ȵ����
    int money, year; //�Ѻ��Ҩҡ�����ҹ
    float pmt;      //�Ѻ��Ҩҡ�ѧ��ѹ pmt

        //�����ż�
        printf("Please Enter money : ");
        scanf("%d",&money);
        printf("Please Enter year : ");
        scanf("%d",&year);
    if(year == 1 ){
        pmt = PMT(money,year);
    }
    else if(year >= 2 && year <= 3){
        pmt = PMT2(money,year);
    }
    else {
        pmt = PMT3(money,year);
    }
    display(pmt);

    return 0;
}
float PMT(int money, int year){
    float i   = (3.99+1)/100/12; //�ѵ�Ҵ͡���µ�ͧǴ
    float PMT = money/((1-(1/pow(1+i,year*12)))/i); //�ӹǹ�Թ����ͧ��Ф׹��ͧǴ
    return PMT;
}
float PMT2(int money, int year){
    float mrr;
        printf("interest : ");
        scanf("%f",&mrr);
    float i   = (mrr-2.16+1)/100/12;    //�ѵ�Ҵ͡���µ�ͧǴ
    float PMT = money/((1-(1/pow(1+i,year*12)))/i); //�ӹǹ�Թ����ͧ��Ф׹��ͧǴ
    return PMT;
}
float PMT3(int money, int year){
    float mrr;
        printf("interest : ");
        scanf("%f",&mrr);
    float  i   = (mrr+1)/100/12;    //�ѵ�Ҵ͡���µ�ͧǴ
    float  PMT = money/((1-(1/pow(1+i,year*12)))/i);    //�ӹǹ�Թ����ͧ��Ф׹��ͧǴ
    return PMT;
}
void display(float pmt){
    int total;
    int mot = (int)pmt%100;
    if(mot != 0){
        total = (int)pmt-mot+100;
    }else{
        total = (int)pmt;
    }
    printf("money to be paid per month  : %d\n  ",total);
}
