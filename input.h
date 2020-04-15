#include <stdio.h>
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

char getSeed (int a, int b, char seed[100],char seedawal[100][100]){
	FILE * fp;				//membaca file txt
    fp = fopen(seed,"r");			//seed menyimpan data nama file masukkan user

    int barlom;					//barlom menyimpan data tidak perlu dari file txt
    int i;
    for(i=0; i<2; i++) {			//melakulan 2 kali scan data
            fscanf(fp,"%d",&barlom);		//mengambil data tidak perlu dari file txt
    }
    
    int m,n;					//mengambil sell dari file txt menyimpannya di array
    char ch;
    ch = fgetc (fp); printf ("%c", ch);
    for(m=0; m<a; m++) {
        for(n=0; n<b; n++) {
            fscanf(fp,"%c",&seedawal[m][n]);	//mengambil data selanjutnya (seed)
        }
        ch = fgetc(fp);
	}
	
    fclose(fp);					//menutup file
    return seedawal[m][n];
}
