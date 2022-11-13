#include <stdio.h>

void Biodata(int tahunLahir,char *Namaku,char *asal)
{
    int tahun_sekarang = 2020;
    printf("Perkenalkan Nama Saya : %s\n",Namaku);
    printf("Umur Saya : %d\n",tahun_sekarang - tahunLahir);
    printf("Saya Adalah Angkatan : %d\n",tahun_sekarang);
    printf("Asal Saya dari : %s\n",asal);
}

int main()
{
    int tahunLahir;
    char Namaku[20],asal[15];
    scanf("%d\n",&tahunLahir);
    scanf("%[^\n]%*c",&Namaku);
    scanf("%[^\n]%*c",&asal);
    Biodata(tahunLahir,Namaku,asal);
    return 0;
}
