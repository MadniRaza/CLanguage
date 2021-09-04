#include<stdio.h>
#include<conio.h>
void main()
{
char cha,chb,*cha1,*chb1;
int sum;
cha1 = &cha;
chb1 = &chb;
clrscr();
printf("enter first letter");
scanf(" %c", cha1);
printf("Enter Second letter");
scanf(" %c", chb1);
sum = cha+ chb;
printf("%c",cha+chb);


getch();
}