#include <stdio.h>

//ประกาศฟังก์
int positive (int number);
void display (int sum);

void main (){
    //ประกาศตัวแปร
    int number;//รับค่ามาเป็นตัวบวก
    int sum;//รับค่าหลังจากการคำนวณ
    //ประมวลผล

    sum = positive(number);
    display(sum);
}
int positive (int number){

    int sum;

    do{
        printf("please enter number type 0 to finish : ");
        scanf("%d",&number);
    sum=sum+number;
    }while (number!=0);

    return(sum);
}
void display (int total){
    printf("Total is : %d\n",total);
    getch();
    }
