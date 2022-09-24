#include<stdio.h>
void main(){
    //ประกาศตัวแปร
     int a=10;
     //การประมวลผลเเละเเสดงผล
     do {
        if (a == 15) {
            a++;
            continue;
            }
            printf("value of a %d\n",a);
            a++;
         }while(a<20);

return 0;
}
