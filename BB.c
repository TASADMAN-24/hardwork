# include <stdio.h>
void main() {
   //��С�ȵ����
   int i,j;
   //�����ż�
   for (i =1; i<=9; i++){
    for (j =1; j<=9 ;j++){
        if (i==1  ||i==4 ||j ==1)
            printf("*");
        else if (i<4&&j==9)
            printf("*");
        else
        printf(" ");

    }
    printf("\n");
   }

}//�������
