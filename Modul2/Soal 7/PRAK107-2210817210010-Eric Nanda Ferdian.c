#include <stdio.h>

int main()

{
    int a,b,c,kel,harga,biaya;

    a = 4;
    b = 5;
    c = 7;
    harga = 85000;

    printf("Diketahui : \n");
    printf("Panjang sisi segitiga berturut-turut adalah %d, %d, dan %d\n",a,b,c);

    kel = a+b+c;
    printf("Keliling Tanah Pak Dengklek adalah %d\n",kel);
    printf("Harga tanah Per Meter adalah %d\n",harga);
    printf("Jawaban :\n");

    biaya = kel*harga;
    printf("Biaya yang diperlukan Pak Dengklek adalah : Rp %d",biaya);
}
