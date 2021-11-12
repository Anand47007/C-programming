#include<stdio.h>
#include<conio.h>

int main()
{
    int RN = 0, CN = 0;

    printf("\n Tables From 5 to 10 are as Follows => \n");

    for(RN = 1; RN <= 10; RN++)
    {
        for(CN = 5; CN <= 10 ; CN++)
        {
            printf("\t %3d",CN*RN);
        }
        printf("\n");
    }

    getche();

    printf("\n Thanks!!!!!");

    getch();
    return 0;
}



