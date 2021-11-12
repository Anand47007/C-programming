#include<stdio.h>
#include<conio.h>

int main()
{
    char ch = 'A';

    printf("Value of Character is %c \n\n",ch);
    printf("\n Enter New Value For Character ");

    ch = getche();

    printf("\n\n Value of New Character is %c",ch);
    printf("\n Thank You For Using Our App \n press any key to exit.");

    getch();
    return 0;
}
