#include <stdio.h>
void main() {
    //ข้อมูลนำเข้า (input data)
    //ประกาศตัวเปร  d เป็นชนิดข้อมูล
    //ประกาศตัวเปร  s เป็นชนิดข้อมูล
    char s64011211048;
    int d64011211048;

    //ประมวลผล และนำข้อมูลออก
    printf(" Please enter the Gender \'W\' or \'M\' :");
    scanf ("%s",&s64011211048);
    printf("Please enter sugar amount per day :");
    scanf ("%d",&d64011211048);
    switch (s64011211048){
        case 'W':
            switch (d64011211048){
                case 16:
                    printf ("You have high risk to diabetes");
                    break;
                case 12 ...15:
                    printf ("You have medium risk to diabetes");
                    break;
                case 8 ... 11:
                    printf ("You have low risk to diabetes");
                    break;

                default :
                    printf ("You have no risk to diabetes");
            }
        break;
        case 'M':
            switch (d64011211048){
                case 15:
                    printf ("You have high risk to diabetes");
                    break;
                case 11 ... 14:
                    printf ("You have medium risk to diabetes");
                    break;
                case 7 ... 10:
                    printf ("You have low risk to diabetes");
                    break;

                default :
                    printf ("You have no risk to diabetes");
                    break;
            }
    }

}//จบการทำงาน
