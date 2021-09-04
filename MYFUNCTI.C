#include<stdio.h>
int mmr(int,int);

void main()
{
 int a,b,ansr;
 printf("enter num1");
  scanf("%d",&a);
  printf("enter num2");
  scanf("%d",&b);

    printf("Enter ur choice");
    scanf("%d",&ansr);
    ansr = mmr(a,b);

 getch();
}

int ansr(a,b)

{

if(ansr==1)
printf("%d",a+b);
else
printf("%d",a-b);
}

