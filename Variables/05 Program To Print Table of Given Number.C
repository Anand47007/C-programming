#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0,Cnt = 0;

    printf("\n Enter Number To Print Its Table = ");
    scanf("%d",&No);

    for(Cnt = 1; Cnt <= 10; Cnt ++)
    {
        printf("\n %3d * %3d = %3d",No,Cnt,(No*Cnt));
    }

    getche();

    printf("\n\n Thanks!!!!!");

    getch();
    return 0;
}

