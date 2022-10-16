#include <stdio.h>

int main()
{

    int a,b,x,y,total;
    printf("Variabel a bernilai ");
    scanf("%d",&a);

    printf("Variabel b bernilai ");
    scanf("%d",&b);

    printf("Variabel x bernilai ");
    scanf("%d",&x);

    printf("Variabel y bernilai ");
    scanf("%d",&y);

    total = a%b+x%y;

    printf("Total sisa bagi dari a dibagi b dan x dibagi y adalah  %d",total);
    return 0;
}

