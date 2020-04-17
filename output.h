/*EL2208 Praktikum Pemecahan Masalah dengan C 2019/2020
 * Modul 8 - TUGAS BESAR
 * Kelompok			: 5
 * Hari dan Tanggal		: Kamis,  17 April 2020 
 * Asisten (NIM)		: Akmal Narendra Sakti (13217034)
 * Nama file 		 	: output.h
 * Deskripsi			: Program mencetak array untuk seed permainan Game Of life
*/
#include <stdio.h>
#include <stdlib.h>
#define m 100 		// asumsikan panjang baris maksimal file eksternal 100
#define n 100		// asumsikan panjang kolom maksimal file eksternal 100
void cetak (char array[m][n], int a, int b)
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
