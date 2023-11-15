#include <stdio.h>

int main()
{
    int angka, i, tangka;
    
    printf("Masukkan sebuah angka: ");
    scanf("%d", &angka); 
    
    i = 1; 
    tangka = 0; 
    
    while (i <= angka)
    {
        tangka = tangka + i; 
        i++; 
    }
    
    printf("Jumlah angka dari 1 hingga %d adalah %d\n", angka, tangka);
    
    return 0;
    
}
