#include <stdio.h>

void main(){
    //ประกาศตัวแปร

    //ประมวลผล
    for(int i=0;i<=9; i++){
        for(int j=1;j<=9-i;j++)
            printf("");
            for(int n=1;n<=i; n++)
                    printf("*\t",n);
                    printf("\n");


}
}
