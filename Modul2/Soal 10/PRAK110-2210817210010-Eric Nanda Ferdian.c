#include <stdio.h>
#define bil 0.5
int main()
{
    int a,t,b,k,L;

    a = 5;
    t = 12;
    b = sqrt((a*a)+(t*t));

    printf("Diketahui : \n");
    printf("Alas = %d cm \n",a);
    printf("Tinggi = %d cm \n",t);

    printf("Jawab : \n");
    printf("Sisi A = %d cm \n",t);
    printf("Sisi B = %d cm \n",b);
    printf("Sisi C = %d cm \n",a);

    k = a+t+b;
    L = bil*a*t;
    printf("Keliling = %d cm\n",k);
    printf("Luas = %d cm",L);
}
