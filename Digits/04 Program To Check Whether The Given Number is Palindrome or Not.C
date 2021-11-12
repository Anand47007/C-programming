#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0, Temp = 0, RevNum = 0;

    printf("\n Enter +ve Integer Number To Find Out It is Palindrome or Not = ");
    scanf("%d",&No);

    if(No < 0)
    {
        printf("\n Invalid");return -1;
    }

    Temp = No;

    while(Temp > 0)
    {
        RevNum = (RevNum * 10) + Temp % 10 ;
        Temp /= 10;
    }

    if(RevNum == No)
    {
        printf("\n As %d == %d Then,",No,RevNum);
        printf("\n Given Number is Palindrome");
    }

    else
    {
        printf("\n As %d != %d Then,",No,RevNum);
        printf("\n Given Number is Not Palindrome");
    }

    printf("\n\n Thanks For Using Our Services!!!!!");

    getch();
    return 0;
}
