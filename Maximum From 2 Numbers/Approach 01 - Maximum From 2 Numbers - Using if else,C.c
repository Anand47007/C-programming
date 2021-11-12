#include<stdio.h>
#include<conio.h>

int main()
{
    int Num1 = 0, Num2 = 0;

    printf("\n Enter 2 Integer Numbers = \n");
    scanf("%d%d",&Num1,&Num2);

    if(Num1 > Num2)
    {
        printf("Maximum Number is %d",Num1);
    }

    else
    {
        printf("Maximum Number is %d",Num2);
    }

    getch();
    return 0;

}
