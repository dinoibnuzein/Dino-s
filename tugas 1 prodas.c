#include <stdio.h>

int main(){
	//Menggunakan int karena semua data di bawah merupakan satuan Integrated (angka)
	float rata_rata, jumlahsiswa, jumlah, siswa1, siswa2, siswa3, siswa4, siswa5;
	
	//membuat urutan tampilan layar
	printf("Masukkan jumlah siswa kelas C : ");
	scanf("%f", &jumlahsiswa);
	
	printf("Data tinggi badan siswa kelas C ke-1 : ");
	scanf("%f", &siswa1);
	
	printf("Data tinggi badan siswa kelas C ke-2 : ");
	scanf("%f", &siswa2);
	
	printf("Data tinggi badan siswa kelas C ke-3 : ");
	scanf("%f", &siswa3);
	
	printf("Data tinggi badan siswa kelas C ke-4 : ");
	scanf("%f", &siswa4);
	
	printf("Data tinggi badan siswa kelas C ke-5 : ");
	scanf("%f", &siswa5);
	
	//membuat rumus/equal
	jumlah = siswa1 + siswa2 + siswa3 + siswa4 + siswa5;
	rata_rata = jumlah/jumlahsiswa;
	
	printf("\nRata-rata tinggi badan siswa di kelas C = %f", rata_rata);

	//semua program diatas menggunakan %d karena yang ditampilkan adalah int
    
    return 0;
}