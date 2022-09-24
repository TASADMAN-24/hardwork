#include <stdio.h>
void main() {
    int i,j,l;

    for(i=-4;i<=4;i++)
    {
        if(i<0)
            l=-i;
        else
            l=+i;
        for(j=0;j<2*(4-l)+1;j++)
        {

            if(j%2==0)
                printf("*\t");
        }
        printf("\n");
    }
}
