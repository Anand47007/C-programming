#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
int  R_no = 00;
char Nm[80]= "";
float Per=00.00;
char Grade = '\0';

printf("\n Enter Student Details =>");

printf("\n Enter Roll No = ");
scanf("%d",&R_no);

fflush(stdin);

printf("\n Enter Name = ");
gets(Nm);

printf("\n Enter Grade = ");
Grade=getche();

printf("\n Enter Percentage = ");
scanf("%f",&Per);

system("cls");

printf("\n Student Information");
printf("\n====================**********====================");

printf("\n\t Name = %s \n\t Roll Number = %d \n\t Grade = %c \n\t Percentage = %f %",Nm,R_no,Grade,Per);

printf("\n====================**********====================");

getch();
return 0;

}
