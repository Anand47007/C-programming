#include<stdio.h>
#include<conio.h>

int main()
{
    int No1 = 0, No2 = 0;

    printf("\n Enter 2 Integer Numbers = ");
    scanf("%d%d",&No1,&No2);

    printf("\n Before Swap, First Number is %d, Second Number is %d",No1,No2);

    No1=No1+No2;
    No2=No1-No2;
    No1=No1-No2;

    printf("\n\n After Swap, First Number is %d, Second Number is %d",No1,No2);

    getch();
    return 0;
}
