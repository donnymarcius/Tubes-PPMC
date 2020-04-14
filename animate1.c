
// Hendra Chayadi Sutanto(18318013)
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

const int WIDTH = 67;
const int HEIGHT = 47;


void displayarray(int board[HEIGHT][WIDTH])
{
int rows;
int cols;
    for (rows = 0; rows <HEIGHT; rows++)
    {
        for(cols =0; cols <WIDTH; cols++)
            printf ("%3c", board[rows][cols]);
        printf ("\n");
    }
}

void checknewneighbors (int board[HEIGHT][WIDTH])
{
    int neighbors;
    int rows;
    int cols;
    int a, b;
    for (rows =1; rows <HEIGHT -1; rows++)
    {
        for (cols = 1; cols <WIDTH -1; cols ++)
        {
            neighbors = 0;
            if (board[rows][cols] == ' ')
            {
                for (a = -1; a <2; a++)
                {
                    for (b = -1; b <2; b++)
                        if (((rows +a) == rows) && ((cols +b) == cols))
                            neighbors = neighbors;
                        else if ((board[rows +a][cols +b] == 'O') || (board[rows +a][cols +b] == 1) || (board[rows +a][cols +b] == 0))
                            neighbors++;
                }
                if ((neighbors == 3))
                    board[rows][cols] = 2; 
            }
        }
    }
}