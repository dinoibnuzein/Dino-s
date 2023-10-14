#include <stdio.h>
int main (){
	float nmtk, nfisika, nbiologi, ratarata, total;
	const int sksmtk = 4, sksfisika = 3, sksbiologi = 2;
	
	printf("-_-_Perhitungan Nilai Rata-rata_-_-\n");
	
	printf("\nMasukkan nilai Matematika anda : ");
	scanf("%f", &nmtk);
	printf("Masukkan nilai Fisika anda : ");
	scanf("%f", &nfisika);  
	printf("Masukkan nilai Biologi anda : ");
	scanf("%f", &nbiologi);
	
	ratarata = (nmtk * sksmtk) + (nfisika * sksfisika) + (nbiologi * sksbiologi);
	total = ratarata / 9;
	
	printf("\nNilai rata-rata anda : %.2f", total);
	
}