#include<stdio.h>
#include<conio.h>
int main()
{
    int Num=0;

    printf("Enter an integer to check whether it is Even or Odd =");
    UP:
    scanf("%d",&Num);

    if(Num == 0)
    {
            printf("\nGiven number is Neutral. \n\n Please Enter an Integer other than zero to find whether it is Even or Odd =");
            goto UP;
    }

    (Num % 2 == 0) ? printf("\n Given number is Even.") : printf("\n Given number is Odd.");
    printf("\n Thanks");

    getch();
    return 0;
}
