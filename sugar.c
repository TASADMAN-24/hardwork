
#include <stdio.h>
void main() {
    //ข้อมูลนำเข้า (input data)
    //ประกาศตัวเปร  score เป็นชนิดข้อมูล
    char s64011211109;
    int d64011211109;

    //ประมวลผล และนำข้อมูลออก
    printf("Sex:");
    scanf ("%s",&s64011211109);
    printf("Enter sugar amount per day:");
    scanf ("%d",&d64011211109);
    switch (s64011211109){
        case 'G'://หญิง
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
        case 'B'://ชาย
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

}//จบการทำงาน

