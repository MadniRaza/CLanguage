#include<stdio.h>
#include<conio.h>
void main()
{
 int x;
 char i,ans;
 i = ' ';
 do
 {
 clrscr();
 x = 0;
 ans ='y';
 printf("\n enter sequence of characters:");
 do
 {
 i= getchar();
 x++;
 }
 while(i != '\n');
 i =' ';
 printf("\numbers of characters entered is :%d",--x);
 printf("\n more sequences(Y/N)?");
 ans = getch();
 }
 while(ans == 'y'|| ans =='Y');
 }

