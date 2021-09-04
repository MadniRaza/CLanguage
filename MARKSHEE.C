#include<stdio.h>
#include<conio.h>
void main()
{
 char name;
 int eng;
 int accounts;
 int sci;
 int sum;
 float percentage;
 clrscr();
	printf("Enter your name");
	scanf("\n%s",&name);

	printf("Enter marks of english");
	scanf("\n%d",&eng);

	printf("Enter marks of accounts");
	scanf("\n%d",&accounts);

	printf("Enter marks of science");
	scanf("\n%d",&sci);

 sum = accounts + sci + eng;
	printf("\n\t total marks are:%d",sum);
 percentage = (sum * 100 /300);
 printf("\n\t and percentage is: %lf",percentage);
	if(percentage < 60)
		printf("\n\tand Your Grade is C");
	else if(percentage < 70)
		printf("\n\tand Your Grade Is B");
	else if(percentage < 80)
		printf("\n\tand Your Grade Is A");
	else if(percentage < 100)
		printf("\n\tand Your Grade Is A+");
 getch();
}