#include<stdio.h>
#include<conio.h>

void main()

{
int arr[5];
int i;
int sum =0;
int avg;

clrscr();
for(i=0;i<5;i++)
{
 scanf("%d",&arr[i]);
}

for(i=0;i<5;i++){
sum = sum + arr[i];

}
printf("%d\n",sum);

avg = sum / 4;


printf("%d\n",avg);
getch();
}