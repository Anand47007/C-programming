#include<stdio.h>
#include<conio.h>

int main()
{
    char ch = 'A';

    printf("\n Value of Character is %c. \n ..........Hello Indians..........",ch);
    printf("\n Are you an Indian (Yes/No) ?????");

    ch = getchar();

    if(ch == 'Y' || ch == 'y')
    {
            printf("\n\n Welcome Dear \n\n");
    }

    else
    {
            printf("\n\n Bye Bye \n\n");
    }

    getche();
    return 0;
}
