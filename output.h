#include <stdio.h>
#include <stdlib.h>
void cetak (char array[100][100], int a, int b)
{
	int i, j;
	for(i=0;i<=a;i++)
	{
		for(j=0;j<=b;j++)
		{
			printf("%c",array[i][j]);
		}
		printf("\n");
	}
}
