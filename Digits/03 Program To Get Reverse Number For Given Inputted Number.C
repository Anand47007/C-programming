#include<stdio.h>
#include<conio.h>

int main()
{
    int No= 0, Temp = 0, RevNum = 0;

    printf("\n Enter +ve Integer To Get Its Reverse Number = ");
    scanf("%d",&No);

    if(No < 0)
    {
        printf("\n Invalid");return -1;
    }

    Temp = No;

    while(Temp > 0)
    {
        RevNum = (RevNum * 10)+ Temp % 10;
        Temp /= 10;
    }

    printf("\n Reverse Number of Given Integer %d is |%d|",No,RevNum);

    printf("\n\n Thanks For Using Our Services!!!!!");

    getch();
    return 0;
}
