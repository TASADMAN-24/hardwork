#include <stdio.h>
void main() {
    //�����Ź���� (input data)
    //��С�ȵ����  score �繪�Դ������
    char s64011211103;
    int d64011211103;

    //�����ż� ��йӢ������͡
    printf("Sex:");
    scanf ("%s",&s64011211103);
    printf("Enter sugar amount per day:");
    scanf ("%d",&d64011211103);
    switch (s64011211103){
        case 'G':
            switch (d64011211103){
                case 16:
                    printf ("You have High risk to diabetes");
                    break;
                case 12 ... 15:
                    printf ("You have Medium risk to diabetes");
                    break;
                case 8 ... 11:
                    printf ("You have Low risk to diabetes");
                    break;
                default :
                    printf ("You have No risk to diabetes");
                    break;

            }
        break;
        case 'B':
            switch (d64011211103){
                case 15:
                    printf ("You have High risk to diabetes");
                    break;
                case 11 ... 14:
                    printf ("You have Medium risk to diabetes");
                    break;
                case 7 ... 10:
                    printf ("You have Low risk to diabetes");
                    break;
                default :
                    printf ("You have No risk to diabetes");
                    break;
            }
    }

}//����÷ӧҹ
