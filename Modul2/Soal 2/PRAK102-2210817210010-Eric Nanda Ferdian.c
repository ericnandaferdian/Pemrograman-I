#include <stdio.h>

int main()
{
    float a,b,c,hasil;
    printf("Variabel a bernilai ");
    scanf("%f",&a);

    printf("Variabel b bernilai ");
    scanf("%f",&b);

    printf("Variabel c bernilai ");
    scanf("%f",&c);

    hasil = a*b/c;

    printf("Hasil dari a dikali b dibagi c adalah %f",hasil);
    return 0;
}
