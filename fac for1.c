#include <stdio.h>

void main(){
    //ประกาศตัวแปร
    int number;
    int factorial = 1;

    printf ("please inter number for factorial: ");
    scanf("%d",&number);

    //ประมวลผล

    for(int i = number; i>1 ; i--){
        factorial=factorial *i;

}


      //แสดงผล
      printf ("your factorial of %d is : %d",number,factorial);

    }













