#include <stdio.h>

 input(){
	char seed;
	FILE * fp;				//membaca file txt
    fp = fopen(seed,"r");			//seed menyimpan data nama file masukkan user

    int barlom[2];
    int i,a,b;

    for(i=0; i<2; i++) {			//mengambil nilai baris dan kolom dari file txt
            fscanf(fp,"%d",&barlom[i]);		// barlom[i] menyimpan nilai baris dan kolom
    }
    a = barlom[0];				// a merupakan nilai baris
    b = barlom[1];				// b merupakan nilai kolom
    /*printf("\n%d\n",a);			//mengetes kesesuaian nilai yang didapat dengan nilai yang ada di file txt
    printf("%d\n",b);*/
    
    int j,k;					//mengambil sell dari file txt menyimpannya di array
    char seedawal[100][100];			//seedawal[100][100] berisi sell
    char ch;
    ch = fgetc (fp); printf ("%c", ch);
    for(m=0; m<a; m++) {
        for(n=0; n<b; n++) {
            fscanf(fp,"%c",&seedawal[m][n]);
        }
        ch = fgetc(fp);
	}
	
	/*for(m=0; m<a; m++) {			//mengecek isi array seedawal[m][n]
    	for(n=0; n<b; n++){
            printf("%c",seedawal[m][n]);
        }
        printf("\n");
    }*/

    fclose(fp);					//menutup file
    return 0;
}
