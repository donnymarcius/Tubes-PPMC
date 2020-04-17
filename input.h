#include <stdio.h>
#define m 100
#define n 100
int getRow (char seed[100]){
 	FILE * fp;		//membaca file txt
 	fp = fopen(seed,"r");	//seed menyimpan data nama file masukkan user
 	int a;			//a menyimpan nilai baris
 	fscanf(fp,"%d",&a);	//mengambil nilai baris dari file txt
 	fclose (fp);		//menutup file
 	return a;		//mengembalikan nilai a
 }

int getColumn (char seed[100]){
	FILE *fp;			//membaca file txt
	fp = fopen(seed,"r");		//seed menyimpan data nama file masukkan user
	int i,b;			//b menyimpan nilai kolom
	for(i=0; i<2; i++){		//melakukan 2 kali fscanf
		fscanf(fp, "%d", &b);	//mengambil nilai dari file txt
	}
	fclose(fp);			//menutup file
	return b;			//mengembalikan nilai b
}

char getSeed (int a, int b, char seed[100],char seedawal[m][n]){
	FILE * fp;				//membaca file txt
    fp = fopen(seed,"r");			//seed menyimpan data nama file masukkan user

    int barlom;					//barlom menyimpan data tidak perlu dari file txt
    int i,j;
	
   for (i=0; i<m; i++) {			//inisialisasi seedawal dengan spasi
	   for (j=0; j<n; j++) {
		   seedawal[i][j] = ' ';
      }
    }
	
    for(i=0; i<2; i++) {			//melakulan 2 kali scan data
            fscanf(fp,"%d",&barlom);		//mengambil data tidak perlu dari file txt
    }
	
    //mengambil sell dari file txt menyimpannya di array
    char ch;
    ch = fgetc (fp);
    for(i=0; i<a; i++) {
        for(j=0; j<b; j++) {
            fscanf(fp,"%c",&seedawal[i][j]);	//mengambil data selanjutnya (seed)
        }
        ch = fgetc(fp);
	}
	
    fclose(fp);					//menutup file
    return seedawal[m][n];
}
