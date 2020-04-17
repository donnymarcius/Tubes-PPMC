/*EL2208 Praktikum Pemecahan Masalah dengan C 2019/2020
 * Modul 8 - TUGAS BESAR
 * Kelompok			: 5
 * Hari dan Tanggal		: Jum'at, 17 April 2020 
 * Asisten (NIM)		: Akmal Narendra Sakti (13217034)
 * Nama file 		 	: Utama.c
 * Deskripsi			: Program menu utama untuk permainan Game Of life
*/
#include <stdio.h>
#include <string.h>
#include "olah_matriks.h"
#include "input.h"
#include "animate.h"
#include "output.h"
// Asumsi maksimal panjang baris dan kolom file seed 100
#define n 100
#define m 100

int main()
{
	// menampilkan kelayar dekripsi permainan dan beberapa aturan singkat permainan
	printf("***---------------***Selamat datang dalam permainan Game of Life***---------------*** \n");
	printf("Aturan permainan.\n");
	printf("1. Masukan seed awal permainan dengan format txt.\n");
	printf("2. Lanjutkan permainan dengan memilih menu.\n");
	printf("3. Tekan 1 untuk menu Tick yang akan melakukan 1 iterasi.\n");
	printf("4. Tekan 2 untuk menu Animate yang akan melakukan n-iterasi.\n");
	printf("5. Tekan 3 untuk menu Quit keluar dari permainan.\n");
	
	// Deklrasi dan Inisialisai program
	int keluar = 0	;														// inisialisasi nilai keluar == 0
	char pilih;																// deklarasi pilih berupa integer yang akan  menyimpan nilai untuk pemilihan menu
	int a,b,c,i;															// deklarasi integer yang akan digunakan pada program ini
	char kel;																// deklasi kel berupa char yang akan menyimpan sebuah karakter untu permintaan keluar program
	char seed[100];															// deklarasi array seed tipe data string yang akan menyimpan file seed awal permainan
	char iterasi[m][n];														// array of string yang akan menampung isi dari file eksternal
  printf ("\nMasukan nama file seed awal (dalam format: namafile.txt): ");	// meminta inputan seed awal(array seed)
  gets (seed);	
																// menyimpan inputan pada array seed
  FILE* fp = fopen (seed,"r");												// membuka dan membaca file eksternal
  while(fp == NULL)								
	{
		printf("\nFile \"%s\" tidak berada di dalam folder yang sama!\nLanjutkan permainan? (Ketik Y untuk ya atau N untuk tidak): ", seed);
		scanf (" %c",&kel);							// menyimpan jawaban ke  kel

		while(kel != 'Y'&& kel != 'N')
		{
			printf ("Pilihan anda salah! Cukup Y atau N saja.\n");
			printf("Lanjutkan permainan? (Ketik Y untuk ya atau N untuk tidak): ");					// menyanyakan permainan kan di lanjutkan atau stop
			scanf (" %c", &kel);							// menyimpan jawaban ke kel
			
		}
		if (kel == 'N')								// bila kel sama dengan N maka program stop
		{
			printf ("Keluar dari program...\n");
			exit(0);
		}
		else 										// bil kel sam dengan Y , maka
		{
			getchar();
			printf ("\nMasukan nama file seed awal (dalam format: namafile.txt): ");	// meminta inputan seed awal(array seed)
			gets (seed);																// menyimpan inputan pada array seed
			fp = fopen (seed,"r");												// membuka dan membaca file eksternal
		}
	}
	fclose (fp);																		// menutup file eksternal
	
	a = getRow(seed);					// memanggil fungsi getRow yang terdapat pada file header input.h yang akan meberikan niai untuk banyak baris pada matriks
	b = getColumn(seed);				// memanggil fungsi getColumn yang terdapat pada file header input.h yang akan meberikan niai untuk banyak kolom pada matriks
	getSeed(a,b,seed,iterasi);			// memanggil fungsi getseed yang terdapat pada file header input.h yang akan merubah file eksternal menjadi matriks
	
	printf("File %s berhasil dimuat!\n", seed);
	printf("Mencetak ke layar...");
	delay(250);							//memanggil fungsi delay dengan waktu 250ms
	
	system("cls");
	cetak(iterasi,a,b);					// memanggil fungsi cetak yng erdapat pada file header output.h
		
	while (keluar == 0)                 // selama nilai keluar bernilai 0
	{									//maka						
		// mencetak pilihan menu permainan
		printf("\nMenu: \n");
		printf("1. Tick\n");
		printf("2. Animate\n");
		printf("3. Quit\n");
		printf("Masukan nomor menu: ");
		scanf(" %c", &pilih);
		
		switch(pilih)					// memecah beberapa kondisi pilih menu
		{
			case '1' :					// jika memilih 1 maka 
				tick(iterasi,a,b);		// melakuakn tick pada iterasi  yang tersimpan sebelumnya
				printf("Melakukan operasi tick...\nMencetak ke layar...");
				delay(250);
				
				system("cls");
				cetak(iterasi,a,b);	// mencetak hasil dari tick
				printf("Operasi tick selesai!\n");
				break;
		
			case '2' :										// jika memilih 1 maka 
				printf ("Jumlah iterasi : "); 				// meinta jumlah iterasi
				scanf(" %d", &c);							// meyimpan jumlah iterasi pada variabel c
				printf("\nMelakukan operasi animate %d kali...\n\nMencetak iterasi 1 ke layar...",c);
				delay(250);
				
				system("cls");
				for(i=0; i<c; i++)
				{
					tick(iterasi,a,b);		// melakuakn tick pada iterasi  yang tersimpan sebelumnya sebanyak n kali
					cetak(iterasi,a,b);		// mencetak hasil dari tick
					if (i != c-1)
					{
						printf("\nMencetak iterasi %d ke layar...",i+2);
						delay(250);
						
						system("cls");
					}
				}
				printf("Operasi animate %d kali selesai!\n",c);
				break;
			
			case '3' :											// jika memilih 3 maka 
				printf("Lanjutkan permainan? (Ketik Y untuk ya atau N untuk tidak): "); 	// menanyakan ingin melanjutkan permainan
				scanf (" %c", &kel);													// menyimpan input ke dalam kel}
				while (kel != 'Y' && kel != 'N')
				{
					printf("Pilihan anda salah! Cukup Y atau N saja.\n");
					printf("Lanjutkan permainan? (Ketik Y untuk ya atau N untuk tidak): "); 	// menanyakan ingin melanjutkan permainan
					scanf (" %c", &kel);													// menyimpan input ke dalam kel}
				}
				if (kel == 'N')								// bila kel sama dengan N maka program stop
				{
					keluar=1;
				}
				else 										// bil kel sam dengan Y , maka
				{
					getchar();
					printf ("\nMasukan nama file seed awal (dalam format: namafile.txt): ");	// meminta inputan seed awal(array seed)
					gets(seed);																// menyimpan inputan pada array seed
					FILE *fp = fopen(seed,"r");												// membuka dan membaca file eksternal
					while(fp == NULL)								
					{
						printf("\nFile \"%s\" tidak berada di dalam folder yang sama!", seed);						
						printf("\nLanjutkan permainan? (Ketik Y untuk ya atau N untuk tidak): "); // menanyakan ingin melanjutkan permainan
						scanf (" %c", &kel);												// menyimpan input ke dalam kel
						while (kel != 'Y' && kel != 'N')
						{
							printf("Pilihan anda salah! Cukup Y atau N saja.\n");
							printf("Lanjutkan permainan? (Ketik Y untuk ya atau N untuk tidak): "); 	// menanyakan ingin melanjutkan permainan
							scanf (" %c", &kel);													// menyimpan input ke dalam kel}
						}
						if (kel == 'N')								// bila kel sama dengan N maka program stop
						{
							printf ("Keluar dari program...\n");
							exit(0);
						}
						else 						// bil kel sam dengan Y , maka
						{
							getchar();
							printf ("\nMasukan nama file seed awal (dalam format: namafile.txt): ");	// meminta inputan seed awal(array seed)
							gets(seed);																// menyimpan inputan pada array seed
							fp = fopen(seed,"r");												// membuka dan membaca file eksternal
						}
					}
					fclose(fp);																		// menutup file eksternal
					
					a = getRow(seed);					// memanggil fungsi getRow yang terdapat pada file header input.h yang akan meberikan niai untuk banyak baris pada matriks
					b = getColumn(seed);				// memanggil fungsi getColumn yang terdapat pada file header input.h yang akan meberikan niai untuk banyak kolom pada matriks
					getSeed(a,b,seed,iterasi);			// memanggil fungsi getseed yang terdapat pada file header input.h yang akan merubah file eksternal menjadi matriks
					
					printf("File %s berhasil dimuat!\n", seed);
					printf("Mencetak ke layar...");
					delay(250);							//memanggil fungsi delay dengan waktu 250ms
					
					system("cls");
					cetak(iterasi,a,b);					// memanggil fungsi cetak yng erdapat pada file header output.h
				}						
				break;
				
			default :											// jika pilhan menu salah maka akan mencetak pilihan menu salah
				printf("Pilihan menu anda salah! Cukup nomor menu saja.\n");
				break;	 
		}
	}
	printf("Keluar dari program...\n");
	return 0;
}
