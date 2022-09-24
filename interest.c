#include <stdio.h>
#include <math.h>
//ประกาศฟังก์ชันต้นเบบ
float PMT(int money, int year);
float PMT2(int money, int year);
float PMT3(int money, int year);
void display(float pmt);

int main() {
    //ประกาศตัวแปร
    int money, year; //รับค่าจากผู้ใช้งาน
    float pmt;      //รับค่าจากฟังก์ชัน pmt

        //ประมวลผล
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
    float i   = (3.99+1)/100/12; //อัตราดอกเบี้ยต่องวด
    float PMT = money/((1-(1/pow(1+i,year*12)))/i); //จำนวนเงินที่ต้องำระคืนต่องวด
    return PMT;
}
float PMT2(int money, int year){
    float mrr;
        printf("interest : ");
        scanf("%f",&mrr);
    float i   = (mrr-2.16+1)/100/12;    //อัตราดอกเบี้ยต่องวด
    float PMT = money/((1-(1/pow(1+i,year*12)))/i); //จำนวนเงินที่ต้องำระคืนต่องวด
    return PMT;
}
float PMT3(int money, int year){
    float mrr;
        printf("interest : ");
        scanf("%f",&mrr);
    float  i   = (mrr+1)/100/12;    //อัตราดอกเบี้ยต่องวด
    float  PMT = money/((1-(1/pow(1+i,year*12)))/i);    //จำนวนเงินที่ต้องำระคืนต่องวด
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
