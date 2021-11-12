#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0, Zcnt = 0, Temp = 0, Dig = 0;

    printf("\n Enter +ve Integer Number To Count Number of Zeroes in it =");
    scanf("%d",&No);

    if(No < 0)
    {
        printf("\n Invalid Number");return -1;
    }

    Temp = No;

    while(Temp > 0)
    {
        Dig = Temp % 10;
        if(Dig == 0)
        {
            Zcnt++;
        }
        Temp /= 10;
    }

    printf("\n Number of Zeroes in Number %d is %d ",No,Zcnt);

    printf("\n\n Thanks For Using Our Service!!!!!");

    getch();
    return 0;
}
