#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
    int Cnt = 1, No = 0, Sum = 0;

    printf("\n Enter Numbers To Find Out Their Summation => \n (Will Stop Summation After Reaching Zero or -ve Value");

    while(1)
    {
        printf("\n Enter Number %d is = ",Cnt);
        scanf("%d",&No);

        if(No <= 0)
        {
            break;
        }

        Sum = Sum + No;
        Cnt++;
    }
    printf("Press Any Key To Get Summation of Given Numbers =>");
    getche();

    system("cls");

    printf("\n Sum of All Given Numbers = %d",Sum);
    printf("\n\n Thanks");

    getch();
    return 0;
}
