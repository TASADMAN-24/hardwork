#include <stdio.h>

//ประกาศฟังก์ชันต้นเบบ
int positive (int number);
void display (int sum);

void main (){
    //ประกาศตัวแปร
    int number;
    int sum;
    int total;
    //ประมวลผล

    //เรียกฟังก์ชัน
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
