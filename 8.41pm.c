#include <stdio.h>

//��С�ȿѧ��ѹ��຺
int positive (int number);
void display (int sum);

void main (){
    //��С�ȵ����
    int number;
    int sum;
    int total;
    //�����ż�

    //���¡�ѧ��ѹ
 sum =positive(total);
    display(sum);


}

int positive (int number){

    int sum=0;

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
