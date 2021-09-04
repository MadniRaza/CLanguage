#include<stdio.h>
#include<conio.h>
void main(){
int count;
char ch=' ';
char ans='y';
clrscr();
do{
     clrscr();

     printf("\t\tEnter sequence of characters");
     scanf("%s",ch);
       printf("%s",ch);

       printf("\nDo you want to  more (Y/n)?");
       ans=getch();

}while (ans =='Y' || ans=='y');

getch();
}