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
	File *fp;
	fp = fopen(seed,"r");
	int i,b;
	int arr[100];
	for(i=0; i<2; i++){
		fscanf(fp, "%d", &arr[i]);
	}
	b = arr[1];
	fclose(fp);
	return b;
}

char getSeed (a,b,char seed[100]){
	File *fp;
	fp = fopen(seed,"r")
	int m,n;					
    char seedawal[100][100];			
    char ch;
    ch = fgetc (fp); printf ("%c", ch);
    for(m=0; m<a; m++) {
        for(n=0; n<b; n++) {
            fscanf(fp,"%c",&seedawal[m][n]);
        }
        ch = fgetc(fp);
	}
	fclose (fp);
	return seedawal;
}
