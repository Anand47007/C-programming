#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0, Cnt = 0;

    printf("\n Enter Integer Number To Print Its Reverse Table = ");
    scanf("%d",& No);

    for(Cnt = 10; Cnt >= 1; Cnt--)
    {
        printf("\n %3d * %3d = %3d",No,Cnt,(No*Cnt));
    }

    getche();

    printf("\n\n Thanks !!!!!");

    getch();
    return 0;
}
