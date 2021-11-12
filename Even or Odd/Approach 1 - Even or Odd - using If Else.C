#include<stdio.h>
#include<conio.h>
int main()
{
    int Num=0;

    printf("\n Enter an Integer to find whether it is Even or Odd = ");
    scanf("%d",&Num);

    if(Num%2==0)
    {
        printf("\n Given number is Even");
    }
    else
    {
        printf("\n Given number is Odd");
    }

    getch();
    return 0;
}
