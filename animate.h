//EL2208 Praktikum Pemecahan Masalah dengan C
//MODUL 8- Tugas Besar
//Nama (NIM)        : Hendra Chayadi Sutanto(18318013) 
//Asisten (NIM)     : Akmal Narendra Sakti (13217034)
//Kelompok          : 5
//File              : animate.h 
//Hari dan Tanggal  : Jumat, 17 April 2020
//Deskripsi         : Mengatur proses animasi dari output pada program Game of Life

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
