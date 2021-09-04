#include<stdio.h>
#include<conio.h>

void main()

{int num1,num2;
clrscr();
printf("enter num1");
scanf("%d",&num1);
printf("enter num 2");
scanf("%d",&num2);
if(num1 > num2)
printf("num is greater then num 2");
else if(num1 < num2)
printf("num 1 is less than num 2");
else
printf("numbers are equal");
getch();


}