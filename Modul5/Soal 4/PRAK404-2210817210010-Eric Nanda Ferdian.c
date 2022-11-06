#include <stdio.h>
int main()
{
    int pilih;
    float x, y, hh;
    while(pilih != 5){
    printf("Pilih Program\n1. Penjumlahan\n2. Pengurangan\n3. Perkalian\n4. Pembagian\n5. Exit\n");
    printf("Masukkan Pilihan : ");
    scanf("%d",&pilih);
    if(pilih>5 || pilih<=0){
        printf("Input anda salah, silahkan coba lagi\n");}
    else if(pilih==5){
        printf("Terima kasih telah menggunakan kalkulator Eric\n");}
    else{
        printf("Masukkan nilai pertama : "); scanf("%f",&x);
        printf("Masukkan nilai kedua : "); scanf("%f",&y);
        if (pilih == 1){
            hh = x + y;
            printf("Hasil penjumlahan antara %.2f dengan %.2f adalah %.2f\n\n", x, y, hh);}
        else if (pilih == 2){
            hh = x - y;
            printf("Hasil pengurangan antara %.2f dengan %.2f adalah %.2f\n\n", x, y, hh);}
        else if (pilih == 3){
            hh = x * y;
            printf("Hasil perkalia antara %.2f dengan %.2f adalah %.2f\n\n",x,y,hh);}
        else{
            hh = x / y;
            printf("Hasil pembagian antara %.2f dengan %.2f adalah %.2f\n\n",x,y,hh);}
    }
    }
}
