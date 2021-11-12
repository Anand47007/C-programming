#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0, Temp = 0, Dig = 0, Ecnt = 0;

    printf("\n Enter +ve Integer To Count Even Digits in it = ");
    scanf("%d",&No);

    if(No < 0)
    {
        printf("\n Invalid Number");return -1;
    }

    Temp = No;

    while(Temp > 0)
    {
        Dig = Temp % 10;
        if((Dig % 2 == 0)&&(Dig != 0))
        {
            Ecnt++;
        }
        Temp /= 10;
    }

    printf("\n Number Even Digits in Number %d is |%d|",No,Ecnt);

    printf("\n\n Thanks For Using Our Services");

    getch();
    return 0;
}
