#include<stdio.h>
#include<conio.h>

int main()
{
    int Dig = 0, Dsum = 0, Temp = 0, No = 0;

    printf("Enter +ve Integer To Its Calculate Digit Sum = ");
    scanf("%d",&No);

    if(No < 0)
    {
        Temp = -No;
    }

    else
    {
        Temp = No;
    }

    for( ; Temp > 0; Temp/=10)
    {
        Dig = Temp % 10;

        printf("\n %d + %d = %d",Dig,Dsum,(Dig+Dsum) );

        Dsum += Dig;
    }

    printf("\n\n Sum of Digits in Given Number %d is |%d| ",No,Dsum);

    printf("\n\n Thanks For Using Our Service!!!!!");

    getch();
    return 0;
}
