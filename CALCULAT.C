#include<stdio.h>
#include<conio.h>

void main()
{
int a;
int b;
int c;
clrscr();
printf("\t ***calculator***\n 1.Addition\n 2.subtraction\n 3.multiplication\n 4.division\n ");
printf("Enter value 1:");
scanf("%d",&a);
printf("Enter value 2:");
scanf("%d",&b);
printf("Enter your choice");
scanf("%d",&c);
switch(c){
case 1:
printf("Addition is = %d",a+b);
break;
case 2:
printf("subtraction is = %d",a-b);
break;
case 3:
printf("multiplication is =%d",a*b);
break;
case 4:
printf("division is = %d",a/b);
break;
	  }
getch();
}


