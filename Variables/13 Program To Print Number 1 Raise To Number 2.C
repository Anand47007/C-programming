#include<stdio.h>
#include<conio.h>

int main()
{
    int No1 = 0, No2 = 0, Temp = 0, Pow = 1;

    printf("\n Enter Base = ");
    scanf("%d",&No1);

    printf("\n Enter Exponent = ");
    scanf("%d",&No2);

    Temp = No2;

    while(Temp > 0)
    {
        Pow = Pow * No1;
        Temp--;
    }

    printf("\n Power(%d) ^ (%d) = (%d) ",No1,No2,Pow);

    printf("\n\n Thanks!!!!!");

    getch();
    return 0;
}
