#include <stdio.h>

void main(){
    //��С�ȵ����
    int number;
    int factorial = 1;

    printf ("please inter number for factorial: ");
    scanf("%d",&number);

    //�����ż�

    for(int i = number; i>1 ; i--){
        factorial=factorial *i;

}


      //�ʴ���
      printf ("your factorial of %d is : %d",number,factorial);

    }













