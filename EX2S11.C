#include<stdio.h>
#include<conio.h>
void main()
{
 int ary[10];
 int i;
 int total;
 int high;
 clrscr();
 for(i=0;i<10;i++)
 {
	printf("\n Enter value:%d :",i);
	scanf("%d",&ary[i]);
}


high = ary[0];
for(i=1;i<10;i++)
{
	if(ary[i] > high)
	high = ary[i];
}
	printf("\nHighest value entered was %d",high);
getch();
}