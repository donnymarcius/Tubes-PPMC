# Tubes-PPMC
18318004 18318008 18318009 18318013

Pengusulan penyelesaian masalah menggunakan suatu matriks 2 dimensi dengan ukuran dan isi matriks berdasarkan hasil input file seed. Ordo matriks berdasarkan 2 baris pertama dari file seed (baris pertama menjadi baris sebagai m dan baris kedua menjadi kolom sebagai n). m line selanjutnya dari file mengisi matriks dengan tiap elemennya disebut elemen[i][j] dimana i merupakan posisi baris pada matriks[m][n] dimulai dari 0 sampai (m-1) dan j merupakan posisi kolom pada matriks[m][n] dimulai dari 0 sampai (n-1).

Sebagai sebuah matriks, setiap elemen[i][j] akan dievaluasi berdasarkan jumlah ‘tetangga’ di sekitarnya. Elemen[i][j] secara umum dapat dibagi menjadi 2 yaitu elemen[i][j] tepi dan elemen[i][j] tengah. Elemen[i][j] tepi adalah elemen-elemen matriks[m][n] pada bagian pertama atau terakhir yaitu baris 0, baris (m-1), kolom 0, atau kolom (n-1) sedangkan elemen[i][j] tengah merupakan elemen sisanya.

Definisi tetangga disini adalah elemen-elemen pada matriks[m][n] lain yang mengelilingi suatu elemen[i][j] (untuk setiap elemen tengah terdapat 8 tetangga: kiri atas, atas, kanan atas, kiri, kanan, kiri bawah, bawah, dan kanan bawah). Karena matriks bersifat toroidal, maka jumlah tetangga akan tetap 8 untuk elemen[i][j] tepi matriks (tetapi definisi tetangga untuk elemen[i][j] tepi akan disesuaikan bergantung posisi baris dan kolom). Jumlah tetangga yang dimaksud adalah jumlah tetangga yang hidup sehingga tetangga yang ‘mati’ diberi nilai 0 dan tetangga yang ‘hidup’ diberi nilai 1.

Solusi permasalahan dimulai dengan membuat matriks lain dengan baris m dan kolom n yang kemudian disebut nilai[m][n]. Komponen-komponen elemen dalam nilai[m][n] pada baris i dan kolom j diisi jumlah tetangga elemen[i][j] pada matriks[m][n].

Pada 1x iterasi (tick), matriks[m][n] akan diubah berdasarkan kondisi matriks[m][n] sebelumnya dan nilai[m][n] sesuai dengan aturan soal. Keempat aturan yang dideskripsikan di bagian deskripsi masalah dapat dirangkum menjadi 3 hal:
	Jika elemen[i][j] pada matriks[m][n] hidup dan nilai[m][n] pada baris i kolom j bernilai < 1 atau > 4, maka elemen[i][j] akan berubah menjadi mati.
	Jika elemen[i][j] pada matriks[m][n] mati dan nilai[m][n] pada baris i dan kolom j bernilai = 3 maka elemen[i][j] akan berubah menjadi hidup.
	Selain kedua kondisi tersebut, elemen[i][j] akan tetap, tidak mengalami perubahan dari mati ke hidup ataupun sebaliknya.

Matriks[m][n] akan selalu diperbarui dan nilai[m][n] selalu di reset setiap selesai 1x operasi tick sehingga nilainya selalu mengikuti matriks[m][n] paling baru. Pilihan animate akan menunjukkan tick sebanyak berapa kali yang diinginkan oleh user.
