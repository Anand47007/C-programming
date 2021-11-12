#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0, Fact = 1, Temp = 0;

    printf("\n Enter An Integer Number To Find Its Factorial = ");
    scanf("%d",&No);

    Temp = No;

    while(Temp > 1)
    {
        Fact = Fact * Temp;
        Temp--;
    }

    printf("\n The Factorial of Number %d is |%d|",No,Fact);

    printf("\n\n Thanks!!!!!");

    getch();
    return 0;
}
