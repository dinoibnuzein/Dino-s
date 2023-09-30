#include <stdio.h>

int main(){
	//tambahkan int karena bentuknya bilangan bulat
	int apples = 5, bananas =8;
	
	//tambahkan fload karena bentuknya bilangan asli
	float orangePrice = 1.5, bananaPrice = 0.75;
	
	//tambahkan char karena bentuknya huruf
	char currency = '$';
	
	double totalCost = (apples * orangePrice) + (bananas * bananaPrice);
	
	printf("Jumlah apel: %d\n", apples);
	printf("Jumlah pisang: %d\n", bananas);
	printf("Harga jeruk per buah: %.2f %c\n", orangePrice, currency);
	printf("Harga pisang per buah: %.2f %c\n", bananaPrice, currency);
	printf("Total biaya: %.2f %c\n", totalCost, currency);
	
	return 0;
}
