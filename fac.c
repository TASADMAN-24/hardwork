#include <stdio.h>

//��С�ȿѧ��
int factorial (int f);
void display (int f,int fac);

void main (){
    //��С�ȵ����
    int f;
    int fac;
    //�����ż�
    printf("please enter number to calculate factorial ");
    scanf("%d",&f);

    fac = factorial(f);
    display(f,fac);

}

int factorial (int f){
    int fac = 1;
    for(int i=f; i>=1;i--){
        fac = fac*i;
    }
    return (fac);
}
void display (int fac,int f){
    printf("factorial of %d is :%d",f,fac);

}
