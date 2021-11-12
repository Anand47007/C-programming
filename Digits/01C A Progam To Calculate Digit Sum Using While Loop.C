#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0, Dsum = 0, Temp = 0, Dig = 0;

    printf("\n Enter +ve Integer To Calculate Its Digit Sum = ");
    scanf("%d",&No);

    if(No < 0)
    {
        printf("\n Invalid");return -1;
    }
    Temp = No;
    while(Temp > 0)
    {
        Dig = Temp % 10;
        Dsum+=Dig;
        Temp/=10;
    }

    printf("\n Digit Sum of Number %d is |%d|",No,Dsum);

    printf("\n\n Thanks For Using Our Services!!!!!");

    getch();
    return 0;
}
