/*
Nama        : Donny Marcius / 18318009
File        : olah_matriks.h
Deskripsi   : mengolah 2-dimensional array of char sesuai aturan conway's game of life
              (pakai definisi wikipedia)
Keterangan:
untuk pakai fungsi di file ini, cukup ketik = 'pick (array, row, column)'
dimana: array itu array of char dari file seed
        row = baris pertama file seed (baris dari array)
        column = baris kedua file seed (baris dari array)
*/

#include <stdio.h>
#include <stdlib.h>
// asumsi maksimal file seed 100 baris dan 100 kolom
#define m 100
#define n 100

int atas_kiri (int val, int max) {
  // case mentok atas/kiri
  if (val == -1)
    return (max-1);
  else
    return val;
}

int bawah_kanan (int val, int max) {
  // case mentok bawah/kanan
  if (val == max)
    return 0;
  else
    return val;
}

int neighbour_value (int array[m][n], int i, int j, int row, int column) {
  // cek banyak tetangga (minimal 0, maksimal 8)
  int value=0;
  value = array[atas_kiri(i-1, row)][atas_kiri(j-1, column)] + array[atas_kiri(i-1, row)][j] + array[atas_kiri(i-1, row)][bawah_kanan(j+1, column)] + array[i][atas_kiri(j-1, column)] + array[i][bawah_kanan(j+1, column)] + array[bawah_kanan(i+1, row)][atas_kiri(j-1, column)] + array[bawah_kanan(i+1, row)][j] + array[bawah_kanan(i+1, row)][bawah_kanan(j+1, column)];
  return value;
}

char pick (char array[m][n], int row, int column) {
  // fungsi pick (iterasi 1 kali)
  int i, j, array_integer[m][n] = {0}, tetangga[m][n] = {0};

  // translate array ke array of integer (mati = 0, hidup = 1) supaya mudah hitung 'tetangga' yang hidup
  for (i=0; i<row; i++) {
    for (j=0; j<column; j++) {
      if (array[i][j] == '-')
        array_integer[i][j] = 0;
      else
        array_integer[i][j] = 1;
    }
  }

  // hitung tetangga yang hidup, simpan nilainya di array tetangga[m][n]
  for (i=0; i<row; i++) {
    for (j=0; j<column; j++) {
      tetangga[i][j] = neighbour_value (array_integer, i, j, row, column);
    }
  }

  // ubah array[m][n] sesuai aturan soal
  for (i=0; i<row; i++) {
    for (j=0; j<column; j++) {
      if (array[i][j] == 'X') {
        if (tetangga[i][j] <= 2 || tetangga[i][j] > 3)
          array[i][j] = '-';
      }
      else {
        if (tetangga[i][j] == 3)
          array[i][j] = 'X';
      }
    }
  }

  return array[m][n];
}
