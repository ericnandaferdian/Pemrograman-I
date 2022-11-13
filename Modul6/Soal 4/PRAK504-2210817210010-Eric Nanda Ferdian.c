#include <stdio.h>

int reverse(int a)
{
    int rev = 0;
    while (a!=0)
    {
        rev = rev*10;
        rev = rev+a%10;
        a = a / 10;
    }
    return rev;
}

int main()
{
    int A,B,C;
    scanf("%d %d",&A,&B);
    A = reverse(A);
    B = reverse(B);
    C = A + B;
    printf("%d",reverse(C));
}
