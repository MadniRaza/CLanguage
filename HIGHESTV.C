#include<stdio.h>
#include<conio.h>
void main()
{
int arr[10];
int i;
int high;
clrscr();
	for(i=0 ; i<10 ; i++)
{
	printf("\n Enter value:%d:",i);
	scanf("%d",&arr[i]);}

high=arr[i];
for(i=0;i<10;i++)
{if(arr[i] > high)
high =arr[i];}
printf("%d",high);
getch();
}