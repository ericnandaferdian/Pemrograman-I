#include <stdio.h>

int main()
{
    float r,t,V,L,K;
    printf("");
    scanf("%f",&r);
    printf("");
    scanf("%f",&t);
    V=r*r*t*22/7;
    L=2*r*(r+t)*22/7;
    K=2*r*22/7;
    printf("Volume=%.2f\n",V);
    printf("Luas=%.2f\n",L);
    printf("Keliling=%.2f\n",K);
    printf("\n");
    printf("");
    scanf("%f",&r);
    printf("");
    scanf("%f",&t);
    V=r*r*t*22/7;
    L=2*r*(r+t)*22/7;
    K=2*r*22/7;
    printf("Volume=%.2f\n",V);
    printf("Luas=%.2f\n",L);
    printf("Keliling=%.2f",K);
}
