#include<stdio.h>
#include<conio.h>

int main()
{
    int Num = 0;

    printf("\n Enter Number = ");
    scanf("%d",&Num);

    if((Num % 5 == 0) && (Num % 7 == 0))
    {
        printf("\n Number %d is Divisible by Both 5 & 7",Num);
    }

    else if(Num % 5 == 0)
    {
        printf("\n Number %d is Divisible by Only 5",Num);
    }

    else if(Num % 7 == 0)
    {
        printf("\n Number %d is Divisible by Only 7",Num);
    }

    else
    {
        printf("\n Number %d is Not Divisible by Both 5 & 7",Num);
    }

    printf("\n\n Thanks!!!!!");

    getch();
    return 0;
}
