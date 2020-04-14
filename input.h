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
	FILE *fp;
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

char getSeed (int a, int b, char seed[100]){
	FILE *fp;
	fp = fopen(seed,"r");
	int m,n;					
    char array[100][100];			
    char ch;
    ch = fgetc (fp); printf ("%c", ch);
    for(m=0; m<(a+2); m++) {
        for(n=0; n<b; n++) {
            fscanf(fp,"%c",&array[m][n]);
        }
        ch = fgetc(fp);
	}
	int i,j;
	int k = 2;
	int l = 0;
	char seedawal[100][100];
	for (i=0; 1<a; i++){
		for(j=0; j<b; j++){
			seedawal[i][j] == array[k][l];
			k++;
			l++;
		}
	}
	fclose (fp);
	return seedawal[m][n];
}
