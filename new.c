#include <stdio.h>
int main(void)
{
	int n = 5;
	int i, j, k;
	for (i = n; i >= 1; i--)
	{
		for (j = n; j > i; j--)
			printf(" ");


		for (k = 1; k < (i * 2); k++)
			printf("*");

		printf("\n");
	}


}
