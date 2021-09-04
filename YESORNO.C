#include<stdio.h>
#include<conio.h>
void main(){
int count;
char ch=' ';
char ans='y';
clrscr();
do{
     clrscr();
     count =0;
     printf("Enter sequence of characters");
     do
	{
	ch=getchar();
	count++;
	}while (ch != '\n');
       printf("\nNumber of characters are entered is:%d",--count);
       printf("\nDo you want to  more (Y/n)?");
       ans=getch();

}while (ans =='Y' || ans=='y');

getch();
}