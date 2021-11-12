#include<stdio.h>
#include<conio.h>
int main()
{
        int Num1=0, Num2=0, Temp=0;

        printf("\n\n Enter 2 Numbers for Swapping =");
        scanf("%d%d",&Num1, &Num2);

        printf("\n\n Before Swapping Number 1 = %d",Num1);
        printf("\n Before Swapping Number 2 = %d ",Num2);

        Temp = Num1;
        Num1 = Num2;
        Num2 = Temp;


        printf("\n\n After Swapping Number 1 = %d",Num1);
        printf("\n After Swapping Number 2 = %d ",Num2);

        getch();
        return 0;
}
