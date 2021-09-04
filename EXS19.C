#include<Stdio.h>
void  main(){
long sum=0;
struct emp{
char name[10];
char design[20];
long salary;
int id;

} ;
struct emp waleed,ali;


clrscr();
  printf("Enter name");
   scanf("%s",waleed.name);
   printf("name is %s\n",waleed.name);
   printf("Enter designation");
   scanf("%s",waleed.design);
   printf("designation is%s\n",waleed.design);
   printf("Enter salary");
   scanf("%lu",&waleed.salary);
   printf("%lu",waleed.salary);

   printf("Enter the name if second emp");
   scanf("%s",ali.name);
   printf("%s",ali.name);
   printf("Enter the id of second employee");
   scanf("%s",ali.id);
   printf("%s",ali.id);
   printf("Enter salary ofali");
   scanf("%lu",&ali.salary);
   sum = ali.salary + waleed.salary;
   printf("%lu",sum);
   getch();
}