
// Hendra Chayadi Sutanto(18318013)
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int i;
int j;

void delay(int milliseconds);

int main()
{
    int x;
    
    void cetak (char array[i][j], int a, int b)
    {

	    for(i=0;i<=a;i++)
    	{
    		for(j=0;j<=b;j++)
    		{
    			printf("%c",array[i][j]);
    			delay(250);
	    	}
    		printf("\n");
    	}
    }
}

void delay(int milliseconds)
{
    long pause;
    clock_t now,then;

    pause = milliseconds*(CLOCKS_PER_SEC/1000);
    now = then = clock();
    while( (now-then) < pause )
        now = clock();
}
