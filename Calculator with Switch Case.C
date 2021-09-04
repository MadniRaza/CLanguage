#include<stdio.h>
#include<conio.h>

void mains()
{

int a;
int b;
int op  ;
       clrscr();
printf("\t*********calculator*****\n1.addition\n2.sub\n3.mul\n4.div\n");
printf("enter value 1");
scanf("%d",&a) ;
printf("enter value 2");
scanf("%d",&b);
printf("enter your choice");
scanf("%d",&op);
switch(op){
case 1:
printf("%d",a+b);
break;
case 2:
printf("%d",a-b);
break;
case 3:
printf("%d",a*b)  ;
break;
case 4:


printf("%d",a/b)   ;
break;
}

getch();

}

void main()
{
int a,b=12;
clrscr();


for(a=1;a<=15;a++)
printf("\n %d * %d= %d",b,a,b*a);

getch();
  }

