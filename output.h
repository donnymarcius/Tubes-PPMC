#include <stdio.h>
#include <stdlib.h>
int i;
int j;
int cetak (char array[i][j], int a, int b)
{

	for(i=0;i<=a;i++)
	{
		for(j=0;j<=b;j++)
		{
			printf("%c",array[i][j]);
		}
		printf("\n");
	}
	return array[i][j];
}
