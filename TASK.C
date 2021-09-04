#include<stdio.h>
#include<conio.h>


void main(){
	/*Do while loop*/
	char ans='y';

	/*Loop*/
	   /*For comparison*/
	char search[10];
	char t[] = "toyota";
	char n[] = "nissan";
	char h[] = "honda";
	/*comparison end*/
	/*structure start*/
	struct autos {

	   char cname[20];
	   int cmodel;
	   int cspeed;
	   long cprice;
	   char ccolor[10];
	   int creg;
		};/*Structure*/struct autos toyota,honda,nissan;

	    clrscr();
		      /*Toyota*/
	 printf("\t\t ***TOYOTA***\n");
	 printf("enter the car name of toyota :\t ");
	 scanf("%s",toyota.cname);
	 printf("car name is :\t%s\n",toyota.cname);
	 printf("Enter the model of toyota car:\t");
	 scanf("%d",&toyota.cmodel);
	 printf("Model is :\t%d\n",toyota.cmodel);
	 printf("enter speed of toyota car:\t");
	 scanf("%d",&toyota.cspeed);
	 printf("Speed is : \t%d\n",toyota.cspeed);
	 printf("Enter price of toyota car:\t");
	 scanf("%lu",&toyota.cprice);
	 printf("Price is :\t %lu\n",toyota.cprice);
	 printf("Enter the color of toyota car:\t");
	 scanf("%s",toyota.ccolor);
	 printf("Color is: \t%s\n",toyota.ccolor);
	 printf("Enter Registration year of toyota car:\t");
	 scanf("%d",&toyota.creg);
	 printf("Registration year is :\t%d\n",toyota.creg);

			   /*Toyota*/


		    /*Honda start*/
	printf("\t\t***HONDA***\n");
	printf("enter the car name of honda :\t");
	 scanf("%s",honda.cname);
	 printf("Car name is :%s\n",honda.cname);
	 printf("Enter the model of honda car :\t");
	 scanf("%d",&honda.cmodel);
	 printf("Model is :%d\n",honda.cmodel);
	 printf("enter speed of honda car :\t");
	 scanf("%d",&honda.cspeed);
	 printf("Speed is :%d\n",honda.cspeed);
	 printf("Enter price of honda car:\t");
	 scanf("%lu",&honda.cprice);
	 printf("Price is%lu\n",honda.cprice);
	 printf("Enter the color of honda car :\t");
	 scanf("%s",honda.ccolor);
	 printf("Color is :%s\n",honda.ccolor);
	 printf("Enter Registration year of honda car:\t");
	 scanf("%d",&honda.creg);
	 printf("Registration year is :%d\n",honda.creg);
			/*honda End*/

			/*Nissan start*/
			printf("\t\t***Nissan***\n");
	printf("enter the car name of Nissan :\t");
	 scanf("%s",nissan.cname);
	 printf("Car name is :%s\n",nissan.cname);
	 printf("Enter the model of nissan car:\t");
	 scanf("%d",&nissan.cmodel);
	 printf("Model is :%d\n",nissan.cmodel);
	 printf("enter speed of  nissan: \t");
	 scanf("%d",&nissan.cspeed);
	 printf("Speed is :%d\n",nissan.cspeed);
	 printf("Enter price of nissan car\t");
	 scanf("%lu",&nissan.cprice);
	 printf("Price is :%lu\n",nissan.cprice);
	 printf("Enter the color of nissan car :\t");
	 scanf("%s",nissan.ccolor);
	 printf("Color is %s\n",nissan.ccolor);
	 printf("Enter Registration year of nissan car: \t");
	 scanf("%d",&nissan.creg);
	 printf("Registration year is: %d\n",nissan.creg);
			/*Nissan End*/
     do{

	 printf("\t What car are you looking for :\n");
	 scanf("%s",search);
	 strcmp(t,search);
	 strcmp(h,search);
	 strcmp(n,search);

	 if(strcmp(t,search)==0)

       { printf("\t\tCompany Name is Toyota \n");
	 printf("\t Car name is : %s\n",toyota.cname);
	 printf("\t Model is: %d \n",toyota.cmodel);
	 printf("\t Price is : %lu \n",toyota.cprice);
	 printf("\t Color is : %s \n",toyota.ccolor);
	 printf("\t Registration year is : %d\n\n",toyota.creg);}

	else if(strcmp(h,search)==0)
	{printf("\t \tCompany name is honda \n");
	 printf("\t Car name is : %s\n",honda.cname);
	 printf("\t Model is : %d\n",honda.cmodel);
	 printf("\t Price is : %lu\n",honda.cprice);
	 printf("\t Color is: %s\n",honda.ccolor);
	 printf("\t Registration year is : %d\n",honda.creg);}

	else if(strcmp(n,search)==0)
{	printf("\t\tCompany Name is nissan \n");
	 printf("\t Car name is : \t %s \n",nissan.cname);
	 printf("\t Model is : \t %d \n",nissan.cmodel);
	 printf("\t price is : \t %lu \n",nissan.cprice);
	 printf("\t color is : \t %s \n",nissan.ccolor);
	 printf("\t Registration year is :\t %d \n",nissan.creg);}

	 else
{         printf("Error keyword Try again plesae\n");}
	 printf("\tWould you like to see other car:(Y/N)?\n");
	 ans =getch();
	 }while( ans=='Y' || ans=='y');
getch();
}