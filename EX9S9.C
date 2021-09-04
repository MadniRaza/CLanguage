#include<stdio.h>
#include<conio.h>
void main()
{
 int num1;
 int num2;
 clrscr();
 num2 =0;
 do
 {printf("\nenter a number");
 scanf("%d",&num1);
 printf("no is %d",num1);num2++;
 }
 while(num1 !=0);
 printf("\n the total numbers entered were %d",--num2);

getch();
}