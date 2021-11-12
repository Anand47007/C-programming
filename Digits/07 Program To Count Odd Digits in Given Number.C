#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0, Ocnt = 0, Temp = 0, Dig = 0;

    printf("\n Enter +ve Integer Number To Count Odd Digits in it = ");
    scanf("%d",&No);

    if(No < 0)
    {
        printf("Invalid Number");return -1;
    }

    Temp = No;

    while(Temp > 0)
    {
        Dig = Temp % 10;
        if(Dig%2 != 0)
        {
            Ocnt++;
        }
        Temp /= 10;
    }

    printf("\n Number of Odd Digits in Given Number %d is |%d|",No,Ocnt);

    printf("\n\n Thanks For Using Our Services!!!!!");

    getch();
    return 0;
}
