/*Nama : Rahmatul Fajriah
  NIM : 18318008
  program ini merupakan program utama dari file program ini mengimpor fungsi-fungsi
  yang telah di buat dan di defenisikan pad header file
 */
 
#include <stdio.h>
#include <string.h>
//#include <olah_matriks.h>
// #include fungsi peye
// #include fungsi hendra

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
	
	// meminta inputan seed dan memasukan ke matriks awal
	char seed[100];
	printf ("Masukan seed awal : ");
	gets(seed);
	//fungsi peye
	
	// pilihan menu
	int pilih, n;
	printf("Menu : \n");
	printf("1.Tick\n");
	printf("1.Animate\n");
	printf("3.Quit\n");
	printf("Masukan pilhan : ");
	scanf ("%d", &pilih);
	while (pilih != 3)
	{
		while (pilih !=1 && pilih != 2)
		{
			printf("Pilihan menu anda salah\n");
			printf("Masukan pilhan : ");
			scanf ("%d", &pilih);
		}
		if (pilih == 1)
		{
			//fungsi donny
		}
		else if (pilih == 2)
		{
			printf ("jumlah iterasi : ");
			scanf("%d", &n);
			//fungsi hendra
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
		 
	

	
	
	
	
