//Hendra Chayadi Sutanto(18318013) 
//File        : animate.h 
//Deskripsi   : Mengatur proses animasi dari output pada program Game of Life

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//fungsi untuk mengatur delay program
void delay (int mdetk) {
    long stop;
    clock_t awal,akhir;

    stop = mdetk*(CLOCKS_PER_SEC/1000); 
    awal = akhir = clock();
    while( (awal - akhir) < stop )
    awal = clock();
}


//Refrensi
//https://www.quora.com/How-do-you-use-the-time-delay-in-C-programming
