#include<stdio.h>
#include<conio.h>
void main(){
int a;
int b;

clrscr();
printf("enter table");
scanf("%d",&a);
for(b=1;b<10;b++)
{if(b==4) continue;
printf("\n%d * %d = %d ",a,b,a*b);}
getch();
}
