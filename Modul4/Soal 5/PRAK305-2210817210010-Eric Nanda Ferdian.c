#include <stdio.h>

int main()
{
    int sec,hari,jam,menit;
    scanf("%d",&sec);
    hari = sec / 86000;
    jam = sec / 3600;
    sec = sec -(3600*jam);
    menit = sec / 60;
    sec = sec - (60*menit);

    if(jam>23)
    {
        jam = jam - 24;
        printf("%d hari %02d : %02d : %02d",hari,jam,menit,sec);
    }
    else if(jam<24)
    {
        printf("%02d : %02d : %02d",jam,menit,sec);
    }
}
