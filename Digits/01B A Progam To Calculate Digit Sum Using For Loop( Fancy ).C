#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0, Dsum = 0, Temp = 0;

    printf("\n Enter +ve Integer To Calculate Its Digit Sum =");
    scanf("%d",&No);

    if(No < 0)
    {
        printf("\n Invalid"); return -1;
    }

    for(Temp = No; Temp > 0; Dsum += (Temp % 10), Temp /= 10 );

    printf("\n Sum of Digits of Given Number %d is %d ",No,Dsum);

    printf("\n\n Thanks For Using Our Service!!!!!");

    getch();
    return 0;
}
