#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
    int No = 0, Cnt = 1, Sum = 0;

    printf("\n Enter Integer Numbers To Calculate Their Summation => \n (Will Stop Summation After Zero or -ve");

    UP:
        printf("\n Enter Number %d is ",Cnt);
        scanf("%d",&No);

        if(No <= 0)
        {
            goto Out;
        }

        Sum = Sum + No;
        Cnt++;

        goto UP;

        Out:

        printf("\n Press Any Key To Get Sum Of Given Numbers ");
        getche();

        system("cls");

        printf("\n Sum of All Given Numbers is %d ",Sum);

        printf("\n\n Thanks!!!!!");

        getch();
        return 0;
}
