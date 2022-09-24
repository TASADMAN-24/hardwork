#include <stdio.h>
void main()
{
    int i,j,m;
    int n=4;
    for(i=-n;i<=n;i++)
    {
        if(i<0)
            m=-i;
           else
            m=+i;
              for(j=0;j<2*(n-m)+1;j++)
           {
            if (j %2==0)
            printf("  *  ");
        }
        printf("\n");
    }
}

