#include<stdio.h>
void main(){
    //��С�ȵ����
     int a=10;
     //��û����ż�������ʴ���
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
