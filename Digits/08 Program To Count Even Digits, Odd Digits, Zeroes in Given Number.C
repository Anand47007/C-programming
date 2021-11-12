#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0, Temp = 0, Dig = 0, Ecnt = 0, Ocnt = 0, Zcnt = 0;

    printf("\n Enter +ve Integer Number To Count Even Digits, Odd Digits and Zeroes in it = ");
    scanf("%d",&No);

    if(No < 0)
    {
        printf("\n Invalid Number");return -1;
    }

    Temp = No;

    while(Temp > 0)
    {
        Dig = Temp % 10;

        if(Dig == 0)
        {
            Zcnt++;
        }

        else if(Dig%2 == 0)
        {
            Ecnt++;
        }

        else
        {
            Ocnt++;
        }
        Temp /= 10;
    }

    printf("\n Count of Zeroes in Given Number %d = |%d|",No,Zcnt);
    printf("\n Count of Even Digits in Given Number %d = |%d|",No,Ecnt);
    printf("\n Count of Odd digits in Given Number %d = |%d|",No,Ocnt);

    printf("\n\n Thanks For Using Our Services!!!!!");

    getch();
    return 0;
}
