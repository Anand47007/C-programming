#include<stdio.h>
#include<conio.h>

int main()
{
    int Fact = 1, Temp = 0, No = 0;

    printf("\n Enter An Integer Number To Find Its Factorial = ");
    scanf("%d",&No);

    for(Temp = No; Temp >= 1; Temp--)
    {
        Fact *= Temp;
    }

    printf("\n The Factorial of Number %d is |%d|",No,Fact);

    printf("\n\n Thanks!!!!!");

    getch();
    return 0;
}
