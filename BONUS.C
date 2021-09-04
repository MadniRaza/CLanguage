#include<stdio.h>
#include<conio.h>
void main()
	{
int bs;
int ha;
int ma;
int ta;
int la;
int sum;
float bonus;
clrscr();
		printf("\nEnter basic salary:\t");
		scanf("%d",&bs);
		printf("Basic salary entered by user is :%d",bs);
		printf("\nEnter Home allowance:\t");
		scanf("%d",&ha);
		printf("Home allowance entered by user is:%d",ha);
		printf("\nEnter medical allowance:\t");
		scanf("%d",&ma);
		printf("Medical allowance entered by user is:%d",ma);
		printf("\nEnter transport allowance:\t");
		scanf("%d",&ta);
		printf("Transport Allowance entered by user is:%d",ta);
		printf("\nEnter lunch allowance:\t");
		scanf("%d",&la);
		printf("Luch allowance entered by user is %d",la);
	  sum = bs + ha + ta+ ma +la ;


		printf("\n\tTotal Salary is:%d",sum);
	  if(sum >=20000)
		bonus = sum * 0.03;
	  else if(sum <20000)
		bonus = sum * 0.05;
		printf("\n\t\t bonus is :%.2f",bonus);

getch();

	}