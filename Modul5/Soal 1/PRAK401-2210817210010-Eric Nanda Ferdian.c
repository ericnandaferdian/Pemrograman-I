#include <stdio.h>

int main()
{
    int i,a;
    char simbol;
    scanf("%d %c",&a,&simbol);
    for(i=1;i<=50;i++){
        if(i% a == 0)
        {
            printf("%c",simbol);
        }
        else
        {
            printf("%d",i);
        }
    }
}
