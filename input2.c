#include <stdio.h>

int main(){
	FILE * fp;
    fp = fopen("seed1.txt","r");

    int points[2];
    int i,a,b;

    for(i=0; i<2; i++) {
            fscanf(fp,"%d",&points[i]);
    }
    a = points[0] + 1;
    b = points[1] + 1;
    printf("\n%d\n",a);
    printf("%d\n",b);
    
    int j,k;
    char arr[100][100];
    char ch;
    for(j=0; j<a; j++) {
        for(k=0; k<b; k++) {
            fscanf(fp,"%c",&arr[j][k]);
        }
        ch = fgetc(fp);
	}
	//cek isi arr[j][k]
	for(j=0; j<15; j++) {
    	for(k=0; k<15; k++){
            printf("%c",arr[j][k]);
        }
        printf("\n");
    }

    fclose(fp);
    return 0;
}
