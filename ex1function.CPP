#include<stdio.h>
int add(int,int);

void main(void)
{
 int num1,mun2,ansr;
 scanf("%d %d", &num1, &num2);
 ansr = add(num1,num2);
 printf("%d", ansr);
 getch();

}

int add(x1,x2)
{
 return x1+x2;
}