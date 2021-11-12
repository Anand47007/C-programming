#include<stdio.h>
#include<conio.h>

int main()
{
    int Dcnt = 0, No = 0, Temp = 0;

    printf("\n Enter +ve Integer To Calculate Digit Count = ");
    scanf("%d",&No);

    if(No < 0)
    {
        printf("\n Invalid");return -1;
    }

    Temp = No;

    while(Temp > 0)
    {
        Dcnt++;
        Temp /= 10;
    }

    printf("\n Digit Count Of Number %d is |%d| ",No,Dcnt);

    printf("\n\n Thanks For Using Our Services!!!!!");
}
