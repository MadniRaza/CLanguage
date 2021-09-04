#include<stdio.h>
#include<conio.h>
void main(){

   clrscr();

   int a;
   int b;
   int op;
   printf("\t********Calculator****\n1.Addition\n2.Sub\n3.Mul\n4.Div\n");
   //value1
   printf("enter value1\n");
   scanf("%d",&a);
   //value2

   printf("Enter 2nd value\n");
   scanf("%d",&b);
   //operator

   printf("enter operation\n");
   scanf("%d",&op);

   //calcilation here
   if(op==1)

   printf("Addition is=%d",a+b);
   else if(op==2)
   printf("%d",a-b);
   else if(op==3)
   printf("%d",a*b);
   else if(op==4)
   printf("%d",a/b);
   else
   printf("get out");






   getch();


}