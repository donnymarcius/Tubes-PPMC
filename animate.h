//Hendra Chayadi Sutanto(18318013) //
//File        : animate.h //
//Deskripsi   : Mengatur proses animasi dari output pada program Game of Life//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void delay (int milliseconds) {
    long pause;
    clock_t now,then;

    //fungsi untuk mengatur delay program//
    pause = milliseconds*(CLOCKS_PER_SEC/1000); 
    now = then = clock();
    while( (now - then) < pause )
    now = clock();
}


//Refrensi//
//https://www.quora.com/How-do-you-use-the-time-delay-in-C-programming//