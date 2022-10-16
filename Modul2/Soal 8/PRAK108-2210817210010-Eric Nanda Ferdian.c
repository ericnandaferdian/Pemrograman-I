#include <stdio.h>
#define phi 3.14
int main()

{
    float putaran,jarak,kel,r;
    putaran = 5;
    jarak = 14;
    kel = jarak/putaran;

    printf("Diketahui :\n");
    printf("Pak Dengklek mengelilingi taman = %.0f Putaran\n",putaran);
    printf("Jarak tempuh Pak Dengklek = %.0f Kilometer \n",jarak);

    printf("Jawaban :\n");
    r = kel/(2*phi);
    printf("Jari-jari taman yang dikelilingi Pak Dengklek adalah %.2f Kilometer",r);
}
