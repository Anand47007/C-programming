#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
    int No = 0, Cnt = 0, Sum = 0;

    printf("\n Enter 10 Numbers => \n\n");

    for(Cnt = 1; Cnt <= 10; Cnt ++)
    {
        printf("\n Enter Number %d is = ",Cnt);
        scanf("%d",&No);

        Sum = Sum + No;
    }

    printf("\n Press Any Key To Get Summation Of 10 Numbers");
    getche();
    system("cls");

    printf("The Summation of 10 Given Numbers = %d",Sum);

    printf("\n\n Thanks!!!!!");

    getch();
    return 0;
}
