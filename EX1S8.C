#include<stdio.h>
#include<conio.h>

void main(){
 float com=0,sa;
 clrscr();
 printf("enter sales amount");
 scanf("%f",&sa);
 if (sa >=10000)
 com = sa * 0.1;
 printf("\n commision = %f",com);
				 getch();
				 }