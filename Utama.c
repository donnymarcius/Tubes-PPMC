/*Nama : Rahmatul Fajriah
  NIM : 18318008
  program ini merupakan program utama dengan mengimpor fungsi-fungsi
  yang telah di buat yang di defenisikan pada header file
 */
 
#include <stdio.h>
#include <string.h>
#include "olah_matriks.h"
#include "input.h"
#include "animate1.h"
#include "ouput.h"

int main()
{
	// Tampilan awal dekripsi permainan
	printf("***---------------***Selamat datang dalam permainan Game of Life***---------------*** \n");
	printf("Aturan permainan \n");
	printf("1. Masukan seed awal permainan \n");
	printf("2. Lanjutkan permainan dengan memilih menu \n");
	printf("3. Menu Tick untuk melakukan 1 iterasi \n");
	printf("4. Menu Animate untuk melakukan n-iterasi \n");
	printf("5. Menu Quit untuk keluar dari permainan \n");
	
	// meminta inputan seed dan memasukan ke matriks awal asumsikan seed awal yang dimasukan benar
	int keluar = 0;
	while (keluar == 0)
	{
		char seed[100];
		int a,b;
		printf ("Masukan seed awal : ");
		gets(seed);
		a = getRow(seed);
		b = getColumn(seed);
		iterasi[i][j] = getSeed(a, b, seed);
	
		// pilihan menu
		int pilih, n,m,a,b;
		printf("Menu : \n");
		printf("1.Tick\n");
		printf("1.Animate\n");
		printf("3.Quit\n");
		printf("Masukan pilhan : ");
		scanf ("%d", &pilih);
		
		while (pilih !=1 && pilih != 2)
		{
			printf("Pilihan menu anda salah\n");
			printf("Masukan pilhan : ");
			scanf ("%d", &pilih);
		}
		switch(pilih){
		case'1' :
			pick(char iterasi[i][j], int a, int b);
			cetak(char iterasi[i][j], int a, int b);
		break;
		case'2' :
			printf ("jumlah iterasi : ");
			scanf("%d", &n);
			for(m=0; m<n ; m++)
			{
				pick(char iterasi[i][j], int a, int b);
				cetak(char iterasi[i][j], int a, int b);
			}
		break;
		case'3' :
				char kel;
				printf ("lanjutkan permainan Y/N : ")
				scanf("%c", &kel);
				if (kel ='N');
				{
					keluar = 1;
				}
		break;
		}
		printf("Menu : \n");
		printf("1.Tick\n");
		printf("1.Animate\n");
		printf("3.Quit\n");
		printf("Masukan pilhan : ");
		scanf ("%d", &pilih);
	}	
	return 0;
}
		 
	

	
	
	
	
