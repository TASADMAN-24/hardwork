
#include <stdio.h>

void main() {
   //ข้อมูลนำเข้า (input data)
   //ประกาศตัวแปร score เป็นชนิดตัวอักษร
    int score64011211048;

    //ประมวลผล และนำข้อมูลออก
    printf("Please enter the score (0-100) : ");
    scanf("%d",&score64011211048);
    switch (score64011211048/10) {
        case 10:
        case 9:
        case 8:
            printf("Your grad is A");
            break;
        case 7:
            printf("Your grad is B");
            break;
        case 6:
            printf("Your grad is C");
            break;
        case 5:
            printf("Your grad is D");
            break;
        default :
            printf("Your grad is F");
            break;
           }
}//จบโปรแกรม
