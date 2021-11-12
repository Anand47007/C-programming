#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
    int No = 0, Cnt = 0,Sum = 0;

    printf("\n Enter Numbers To Calculate Their Sum => \n (Until User Enters Zero or -ve Number)");

    for(Cnt= 1; ;Cnt ++)
    {
        printf("\n Enter Number %d is = ",Cnt);
        scanf("%d",&No);

        if(No <= 0)
        {
            break;
        }

        Sum = Sum + No;
    }

    printf("\n Enter Any Key To Print Sum of Given Numbers => ");
    getche();

    system("cls");

    printf("\n Sum of Given Numbers = %d",Sum);

    printf("\n\n Thanks!!!!!");

    getch();
    return 0;
}
