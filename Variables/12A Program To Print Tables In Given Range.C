#include<stdio.h>
#include<conio.h>

int main()
{
    int CN = 0, RN = 0, Sno = 0, Eno = 0;

    printf("\n Enter Range of Table From & To = ");
    scanf("%d%d",&Sno,&Eno);

    printf("\n Tables From %d To %d Are As Follows =>",Sno,Eno);

    printf("\n ========================================********************======================================== \n");

    for(CN = 1; CN <= 10; CN++)
    {
        for(RN = Sno; RN <= Eno; RN++)
        {
            printf("\t %3d",CN*RN);
        }
        printf("\n");
    }

    printf("\n ========================================********************======================================== \n");

    getche();

    printf("\n\n Thanks!!!!!");

    getch();
    return 0;
}

