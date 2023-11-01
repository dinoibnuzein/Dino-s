#include <stdio.h>

//Menggunakan enum karena bentuk variabel nya adalah kumpulan nilai konstan
//Deklarasikan variabel menu makanan
enum Makanan {
	NasiGoreng = 50000, 
	MieGoreng = 45000, 
	AyamGoreng = 65000
	};
	
//Deklarasikan variabel menu minuman
enum Minuman {
	AirMIneral = 13000, 
	EsTeh = 15000, 
	JusJeruk = 20000
	};
	
//bagian menuMakanan pasti berbentuk int, dan dideklarasikan dalam variabel menuMakanan agar dapat di panggil di main
//menggunakan ptr karena
	float total, uang, kembalian;
	char member;
	enum Makanan menuMakanan;
	enum Minuman menuMinuman;
	float *ptr;
	
//Membuat program main untuk input Makanan dan Minuman yang dipilih
int main(){

	printf("===== Rumah Makan =====\n");
	printf("Menu Makanan : \n");
	printf("1. Nasi Goreng \tRp. 50000\n");
	printf("2. Mie Goreng \tRp. 45000\n");
	printf("3. Ayam Goreng \tRp. 65000\n");
	printf("Pilih Menu makanan (1-3) : ");
	scanf("%d", &menuMakanan);
	
	printf("\nMenu Minuman : \n");
	printf("1. Air Mineral \tRp. 13000 \n");
	printf("2. Es teh \tRp. 15000 \n");
	printf("3. Jus Jeruk \tRp. 20000 \n");
	printf("Pilih Menu makanan (1-3) : ");
	scanf("%d", &menuMinuman);
	
	//Menggunakan switch karena bentuk nilai nya adalah constan, dan akan lebih simpel menggunakan switch. Juga mengikuti perintah modul
	switch(menuMakanan){
	case 1:
		total += NasiGoreng;
		break;
	case 2:
		total += MieGoreng;
		break;
	case 3:
		total += AyamGoreng;
		break;
	default:
		printf("Pilihan menu makanan tidak ada");
		break;
	};
	
	switch(menuMinuman){
	case 1:
		total += AirMIneral;
		break;
	case 2:
		total += EsTeh;
		break;
	case 3:
		total += JusJeruk;
		break;
	default:
		printf("Pilihan menu minuman tidak ada");
		break;
	};
	
	//%s disini berfungsi sama dengan %c, bedanya %s/string dapat memasukan serangkaian character
	printf("Apakan anda adalah member? (Y/N) : ");
	scanf("%s", &member);
	
	printf("\n");

	if (member == 'y' || member == 'Y'){
		total *=  0.9;
		printf("Total Harga: Rp. %.2f\n", total);
	}else if (member == 'n' || member == 'N'){
		total = total;
		printf("Total Harga : Rp. %.2f\n", total);
	}else{
		printf("Input tidak sesuai");
	}
	ptr = &total;
	
	//%p untuk memanggil alamat dari variabel total
	printf("Alamat memori variabel total: %p", &total);
	
	printf("\nMasukan uang pembayaran: ");
	scanf("%f", &uang);

	kembalian = uang - total;
	
	if (uang > total) {
		printf("Kembalian Anda: %.2f", kembalian);
	} else if(uang < total) {
		printf("uang anda kurang");
	} else if (uang == total) {
		printf("Terimakasih");
	} else {
		printf("Pakai uang bukan daun");
	};
	
	
	return 0;
	
}