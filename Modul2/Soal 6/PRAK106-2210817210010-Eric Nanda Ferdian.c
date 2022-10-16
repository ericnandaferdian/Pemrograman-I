#include <stdio.h>

int main()

{
    int a,b,c,hasil1,hasil2,hasil3;
     printf("Variabel a bernilai ");
    scanf("%d",&a);

    printf("Variabel b bernilai ");
    scanf("%d",&b);

    printf("Variabel c bernilai ");
    scanf("%d",&c);

    hasil1 = a==b;
    hasil2 = a>=c;
    hasil3 = a!=c;

    printf("Apakah a sama dengan b ? jawabannya adalah %d\n",hasil1);
    printf("Apakah b lebih besar dari c ? jawabannya adalah %d\n",hasil2);
    printf("Apakah a tidak sama dengan c ? jawabannya adalah %d\n",hasil3);
}
