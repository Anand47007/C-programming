#include<stdio.h>
#include<conio.h>

int main()
{
    char ch = '\0';

    printf("\n Enter A Character To Find Whether,it is Uppercase Or Lowercase Or Digit Or Special Symbol = ");
    ch = getche();

    if((ch >= 'A') && (ch <= 'Z'))
    {
        printf("\n Character %c is an Uppercase Alphabet",ch);
    }

    else if((ch >= 'a') && (ch <= 'z'))
    {
        printf("\n Character %c is a Lowercase Alphabet",ch);
    }

    else if((ch >= '0') && (ch <= '9'))
    {
        printf("\n Character %c is a Digit",ch);
    }

    else
    {
        printf("\n Character %c is a Special Symbol",ch);
    }

    printf("\n\n Thanks For Using Our Services!!!!!");

    getch();
    return 0;

}
