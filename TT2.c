
#include <stdio.h>
void main() {
    //�����Ź���� (input data)
    //��С�ȵ����  score �繪�Դ������
    char s64011211109;
    int d64011211109;

    //�����ż� ��йӢ������͡
    printf("Sex:");
    scanf ("%s",&s64011211109);
    printf("Enter sugar amount per day:");
    scanf ("%d",&d64011211109);
    switch (s64011211109){
        case 'G'://˭ԧ
            switch (d64011211109){
                case 8 ... 11:
                    printf ("You have No risk to diabetes");
                    break;
                case 12 ... 15:
                    printf ("have Low risk to diabetes");
                    break;
                case 16:
                    printf ("You have Medium risk to diabetes");
                    break;
                default :
                    printf ("You have High risk to diabetes");

                    break;

            }
        break;
        case 'B'://���
            switch (d64011211109){
                case 7 ... 10:
                 printf ("You have No risk to diabetes");
                    break;
                case 11 ... 14:
                      printf ("You have Medium risk to diabetes");
                    break;

                 default :
                    printf ("You have High risk to diabetes");

                    break;
            }
    }

}//����÷ӧҹ

