#include<stdio.h>
void main()
	{
	int a,b,c,sum;
		printf("\n Enter any three numbers :");
		scanf("%d %d %d",&a,&b,&c);
		sum = calculatesum(a, b, c);
		printf("Sum is %d",sum);
		getch();
	}
	calculatesum(int d, int e ,int f)
	{
	 int g;
	 g=d+e+f;
	 return(g);


	}