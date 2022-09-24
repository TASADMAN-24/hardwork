# include <stdio.h>

void main() {
    //ข้อมูลนำเข้า (input data)
    //ประกาศตัวแปร g64011211069 เป็นชนิดตัวอักษร
    //ประกาศตัวแปร i64011211069 เป็นชนิดตัวอักษร
    char g64011211069;
    int i64011211069;

    //ประมวนผล และนำข้อมูลออก
    printf("please type gender \'F\' or \'M\' : ");
    scanf("%s",&g64011211069);

    printf("please enter the income: ");
    scanf("%d",&i64011211069);
    if(g64011211069 == 'M') {
        if(i64011211069 <10000){
            printf("Sorry, your application is disapproved.");
        }
        else if(i64011211069 <= 20000){
            printf("Congratulation you have been approved with Silver card.");
        }
        else if(i64011211069 <= 40000){
            printf("Congratulation you have been approved with Gold card.");
        }
        else if(i64011211069 > 40000){
            printf("Congratulation you have been approved with Diamond card.");
        }
    }
    else if(g64011211069 == 'F') {
        if(i64011211069 <= 25000){
            printf("Congratulation you have been approved with Silver card.");
        }
        else if(i64011211069 <= 60000){
            printf("Congratulation you have been approved with Gold card.");
        }
        else if(i64011211069 > 60000){
            printf("Congratulation you have been approved with Diamond card.");
        }
    }
}//จบโปรแกรม
