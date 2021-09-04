#include<stdio.h>
void main()
	{
	int a,b,c;
	a=b=c=0;
		printf("\n Enter ist integer: ");
		scanf("%d",&a);
		printf("Enter 2nd integer :");
		scanf("%d",&b);

	c=adder(a, b);
		printf("\n\na & b in main() are : %d,%d",a,b);
		printf("\n\n c in main () is :%d",c);
		/*C gives the addition of a and b*/
getch();
	}

	 adder(int a,int b)
	 {
	 int c;
	 c=a+b;
	 a+=a;
	 b+=5;
	 printf("\n\n a &b within adder function are: %d, %d, ",a,b);
	 printf("\n c within adder function is : %d",c);
	 return(c);
	 }