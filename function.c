#include <stdio.h>

//��С�ȿѧ��
int positive (int number);
void display (int sum);

void main (){
    //��С�ȵ����
    int number;//�Ѻ������繵�Ǻǡ
    int sum;//�Ѻ�����ѧ�ҡ��äӹǳ
    //�����ż�

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
