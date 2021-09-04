#include<stdio.h>

void main(){
 int sum=0;

 struct emp{
 char name[10];
 char des[20];
 long salary;
 int id;


 }; struct emp ali,madni,tabish;
 clrscr();
 printf("Enter name of emp1\n");
 scanf("%s",ali.name);
 printf("%s",ali.name);
 printf("enter des of emp1\n");
 scanf("%s",ali.des);
 printf("%s",ali.name);
 printf("Enter salary of emp1\n");
 scanf("%lu",&ali.salary);
 printf("%lu",ali.salary);
 printf("Enter Name of emp2\n ");
 scanf("%s",madni.name);
 printf("%s",madni.name);
 printf("enter des of emp2\n");
 scanf("%s",madni.des);
 printf("%s",madni.des);
 printf("Enter salary of emp2\n");
 scanf("%lu",&madni.salary);
 printf("%lu",madni.salary);
 printf("enter id of emp2\n");
 scanf("%d",&madni.id);
 printf("%d",madni.id);
 sum = ali.salary + madni.salary;
 printf("%d",sum);
getch();
}