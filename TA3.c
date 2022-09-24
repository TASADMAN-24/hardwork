# include <stdio.h>

void main() {
    //ข้อมูลนำเข้า (input data)

    char status64011211048;
    int money64011211048;

    //ประมวนผล และนำข้อมูลออก
    printf("Please enter your status 'M' or 'S' : ");
    scanf("%s",&status64011211048);

    printf("please enter the money: ");
    scanf("%d",&money64011211048);
    if(status64011211048 == 'M'){
        if (money64011211048 <=10000000);
            printf("your interest rat is 3%%");

        else if money64011211048 <=8000000;
            printf("your interest rat is 3.5%%");

        else if money64011211048 <=5000000;
            printf("your interest rat is 4%%");
        else money64011211048 >3000000;
            printf("your interest rat is 4.5%%");
    }

    else if(status64011211048 == 'S'){
        if money64011211048 <=10000000;
            printf("your interest rat is 3.2%%");

        else if money64011211048 <=8000000;
            printf("your interest rat is 3.6%%");

        else if money64011211048 <=5000000;
            printf("your interest rat is 4.1%%");

        else  money64011211048 >3000000;
            printf("your interest rat is 4.6%%");
    }

}//จบโปรแกรม
