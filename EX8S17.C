#include<stdio.h>
void main()
	{
	int num[3];
	int i;
	int sum=0;
       int sarr(int numarr[]); /*function declaration*/
       clrscr();
	for(i=0;i<3;i++)/*Accepts numbers into the array*/
       {
	printf("\n enter number %d", i+1);
	scanf("%d", &num[i]);
       }
	sum = sarr(num); /*Invokes the function*/
	printf("\n The sum of the array is %d",sum);
	getch();
	}

	int sarr(int numarr[]) /*function definition*/
	{
		int total,a;
		for(a=0,total=0;a<3;a++) /*calculates the sum*/
		total+=numarr[a];
		return total;
	}