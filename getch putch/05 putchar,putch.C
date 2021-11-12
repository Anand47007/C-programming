#include<stdio.h>
#include<conio.h>

int main()
{
    char Ch = 'Q', Group = 'A', Grade = 'X';

    putch('\n');
    putchar('\t');

    printf("\n Demonstration of (putch/putchar) = \n");

    putch(Ch);
    putchar('\n');

    putchar(Ch);
    putch('\n');

    putch(Group);
    putchar('\n');

    putchar('S');
    putch('\n');

    putch('Karad');
    putchar('\n');

    putchar('Grade');
    putch('\n');

    getch();
    return 0;
}
