#include <stdio.h>
int main () {
	//ubah penggunaan (+) menjadi koma (,)
	int a = 12,  b = 28;
	float c = 2.5, d = 8.9;
	char e = 'R';
	
	//(tambahkan komentar disini)
	int sum = a + (b * c) - d;
	printf("Bilangan a: %d\n", a);
	
	//ubah prints menjadi printf
	printf("Bilangan b: %d\n", b);
	printf("Bilangan c: %.2f\n", c);
	printf("Bilangan d: %.2f\n", d);
	
	//ubah prints menjadi printf, dan ubah %c menjadi %f karena diatas double
	printf("Karakter e: %c\n", e);
	
	//ubah %f menjadi %d, karena diatas berupa int
	printf("Hasil: %d\n", sum);
	
	return 0;
}