# include <stdio.h>

void main() {
    //�����Ź���� (input data)
    //��С�ȵ���� g64011211069 �繪�Դ����ѡ��
    //��С�ȵ���� i64011211069 �繪�Դ����ѡ��
    char g64011211069;
    int i64011211069;

    //����ǹ�� ��йӢ������͡
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
}//�������
