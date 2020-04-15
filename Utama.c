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
	// menampilkan kelayar dekripsi permainan dan beberapa aturan singkat permainan
	printf("***---------------***Selamat datang dalam permainan Game of Life***---------------*** \n");
	printf("Aturan permainan \n");
	printf("1. Masukan seed awal permainan \n");
	printf("2. Lanjutkan permainan dengan memilih menu \n");
	printf("3. Tekan 1 untuk menu Tick yang akan melakukan 1 iterasi \n");
	printf("4. Tekan 2 untuk menu Animate yang akan melakukan n-iterasi \n");
	printf("5. Tekan 3 untuk menu Quit keluar dari permainan \n");
	
	// Deklrasi dan Inisialisai program
	int keluar = 0	;					// inisialisasi nilai keluar == 0
	int pilih;						// deklarasi pilih berupa integer yang akan  menyimpan nilai untuk pemilihan menu
	int a,b,n,m;						// deklarasi integer yang akan digunakan pada program ini
	char kel;						// deklasi kel berupa char yang akan menyimpan sebuah karakter untu permintaan keluar program
	char seed[100];						// deklarasi array seed tipe data string yang akan menyimpan file seed awal permainan
	char iterasi[100][100];					// array of string yang akan menampung isi dari file eksternal
	printf ("Masukan seed awal : ");			// meminta inputan seed awal(array seed)
	gets(seed);						// menyimpan inputan pada array seed
	a = getRow(seed);					// memanggil fungsi getRow yang terdapat pada file header input.h yang akan meberikan niai untuk banyak baris pada matriks
	b = getColumn(seed);					// memanggil fungsi getColumn yang terdapat pada file header input.h yang akan meberikan niai untuk banyak kolom pada matriks
	getSeed(a,b,seed,iterasi);				// memanggil fungsi getseed yang terdapat pada file header input.h yang akan merubah file eksternal menjadi matriks
	cetak(iterasi,a,b);					// memanggil fungsi cetak yng erdapat pada file header output.h
		
	while (keluar == 0)               		  	// selama nilai keluar bernilai 0
	{									//maka
										// mencetak pilihan menu permainan
		printf("Menu : \n");
		printf("1.Tick\n");
		printf("2.Animate\n");
		printf("3.Quit\n");
		printf("Masukan pilhan : ");
		scanf ("%d", &pilih);
		
		switch(pilih)					// memecah beberapa kondisi pilih menu
		{
			case 1 :				// jika memilih 1 maka 
				pick(iterasi,a,b);		// melakuakn tick pada iterasi  yang tersimpan sebelumnya
				cetak(iterasi,a,b);		// mencetak hasil dari tick
			break;
			
			case 2 :							// jika memilih 1 maka 
				printf ("jumlah iterasi : "); 				// meinta jumlah iterasi
				scanf("%d", &n);					// meyimpan jumlah iterasi pada variabel n
				for(m=0; m<n; m++)
				{
					pick(iterasi,a,b);		// melakuakn tick pada iterasi  yang tersimpan sebelumnya sebanyak n kali
					cetak(iterasi,a,b);		// mencetak hasil dari tick
					//animate nya jadi fungsi ato disisni langsung ???
				}
			break;
			
			case 3 :									// jika memilih 3 maka 
				printf ("lanjutkan permainan Y/N : ");					// menyanyakan permainan kan di lanjutkan atau stop
				scanf(" %c", &kel);							// menyimpan jawaban ke  kel 
					if (kel == 'N')							// bila kel sama dengan N maka keluar bernilai 1 program stop
					{
						keluar = 1;
					}
					else if( kel == 'Y')						// bil kel sam dengan Y , maka
					{
						printf ("Masukan seed awal");				//meminta memasukan seed awal permainan
						scanf(" %s", seed);					// menyimpan inputan pada array seed
						a = getRow(seed);					// memanggil fungsi getRow yang terdapat pada file header input.h yang akan meberikan niai untuk banyak baris pada matriks
						b = getColumn(seed);					// memanggil fungsi getColumn yang terdapat pada file header input.h yang akan meberikan niai untuk banyak kolom pada matriks
						getSeed(a,b,seed,iterasi);				// memanggil fungsi getseed yang terdapat pada file header input.h yang akan merubah file eksternal menjadi matriks
						cetak(iterasi,a,b);					// memanggil fungsi cetak yng erdapat pada file header output.h
					}
			break;
			
			default :									// jika pilhan menu salah maka akan mencetak pilihan menu salah
				printf("Pilihan menu anda salah\n");
			break;	 
		}
	}
	return 0;
}

