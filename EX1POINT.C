#include<stdio.h>
#include<conio.h>
void main(){
int arr[3]={5,7,9};
int *p;
int i;
clrscr();
p=arr;
for(i=0;i<3;i++)
{printf("*(p*%d): %d \n",i,*(p+i));
}
for(i=0;i<3;i++)
{
printf("*(arr*%d): %d\n",i,*(arr+i));
}
getch();
}