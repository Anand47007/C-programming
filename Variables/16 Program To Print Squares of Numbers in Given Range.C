#include<stdio.h>
#include<conio.h>

int main()
{
    int Sno = 0, Eno = 0;

    printf("\n Enter Starting Number = ");
    scanf("%d",&Sno);

    printf("\n Enter Ending Number = ");
    scanf("%d",&Eno);

    printf("\n ================================================= \n");

    printf("\n  Number  Square ");

    while(Sno <= Eno)
    {
        printf("\n  %4d  =  %4d ",Sno,(Sno*Sno));
        Sno++;
    }

    printf("\n ================================================= \n");

    printf("\n\n Thanks!!!!!");

    getch();
    return 0;
}
