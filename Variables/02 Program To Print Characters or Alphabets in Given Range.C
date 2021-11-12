#include<stdio.h>
#include<conio.h>

int main()
{
    char Sch = '\0', Ech = '\0';

    printf("\n Enter Starting Character = ");
    Sch = getche();

    printf("\n Enter Ending Character = ");
    Ech = getche();

    for(; Sch <= Ech; Sch++ )
    {
        printf("\n %c",Sch);
    }

    printf("\n\n Thanks!!!!!");

    getch();
    return 0;
}
