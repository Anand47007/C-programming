#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0, Dcnt = 0, Temp = 0, Dsum = 0, Dig = 0;

    printf("\n Enter +ve Integer Number To Find its Digit Sum = ");
    scanf("%d",&No);

    if(No < 0)
    {
        printf("\n Invalid Number");return -1;
    }

    Temp = No;

    while(Temp > 0)
    {
        Dcnt++;
        Temp /= 10;
    }

    if(Dcnt == 3)
    {
        Temp = No;
        while(Temp > 0)
        {
            Dig = Temp % 10;
            printf("\n %d + %d = %d",Dsum,Dig,Dig+Dsum);
            Dsum = Dsum + Dig;
            Temp /= 10;
        }
    }

    else
    {
        printf("\n This is Not A 3-Digit Number");
        goto DWN;
    }

    printf("\n Digit Sum of Given Number %d is |%d|",No,Dsum);

    DWN:
        printf("\n\n Thanks For Using Our Service!!!!!");

        getch();
        return 0;
}
