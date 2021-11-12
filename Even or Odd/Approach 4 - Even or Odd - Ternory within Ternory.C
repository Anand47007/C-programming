#include<stdio.h>
#include<conio.h>
int main()
{
    int Num=0;

    printf("Enter an integer to check whether it is Even or Odd =");
    scanf("%d",&Num);

    (Num == 0) ? (printf("Given number is Neutral")) :((Num % 2 == 0) ? printf("\n Given number is Even.") : printf("\n Given number is Odd."));

    printf("\n Thanks");

    getch();
    return 0;
}

