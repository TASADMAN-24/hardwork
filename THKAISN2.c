#include <stdio.h>

void main() {
    //�Ӣ�������� (input data)
    //��С�ȵ���� score �繪�Ե���ѡ��
 int score64011211048;

    //�����ż� ��йӢ������͡
    printf("Please enter the score (0-100) : ");
    scanf("%d",&score64011211048);
    if    (score64011211048  < 50) {
        printf("Your grad is F");
    }
    else if (score64011211048 < 60){
        printf("Your grad is D");
    }
    else if( score64011211048 < 70){
        printf("Your grad is C");
    }
    else if (score64011211048 < 80){
        printf("Your grad is B");
    }
    else {printf("Your grad is A");}

}//�������
