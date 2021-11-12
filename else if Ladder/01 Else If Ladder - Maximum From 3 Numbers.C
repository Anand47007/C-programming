#include<stdio.h>
#include<conio.h>

int main()
{
    int No1 = 0, No2 = 0, No3 = 0;

    printf("Enter Three Numbers = ");
    scanf("%d%d%d",&No1, &No2,&No3);

    if((No1 == No2) && (No2 == No3))
    {
        printf("\n All Three Number Are Equal");
    }

    else if((No1 > No2) && (No1 > No3))
    {
        printf("\n Number %d is Maximum",No1);
    }

    else if((No2 > No3) && (No2 > No1))
    {
        printf("\n Number %d is Maximum",No2);
    }

    else
    {
        printf("\n Number %d is Maximum",No3);
    }

    printf("\n\n Thanks For Using Our Services!!!!!");

    getch();
    return 0;
}
