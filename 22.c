
#include <stdio.h>
void main() {
//�����Ź���� (input data)
//��С�ȵ���� d �繪�Դ������
//��С�ȵ���� g �繪�Դ������
char g64011211034;
int d64011211034; //�����ż� ��йӢ������͡
printf(" Please enter the Gender \'F\' or \'M\' :");
scanf ("%s",&g64011211034);
printf("Please enter sugar amount per day :");
scanf ("%d",&d64011211034);
switch (g64011211034){
case 'F':
switch (d64011211034){
case 12 ...15:
printf ("You have medium risk to diabetes");
break;
case 8 ... 11:
printf ("You have low risk to diabetes");
break; default :
printf ("You have no risk to diabetes");
}
break;
case 'M':
switch (d64011211034){
case 15:
printf ("You have high risk to diabetes");
break;
case 11 ... 14:
printf ("You have medium risk to diabetes");
break;
case 7 ... 10:
printf ("You have low risk to diabetes");
break; default :
printf ("You have no risk to diabetes");
break;
}
}}//����÷ӧҹ


