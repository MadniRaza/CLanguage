#include<stdio.h>
#include<conio.h>


void main(){


	char search[]= "toyota";
	char t[9];
	struct autos {

	   char cname[20];
	   int cmodel;
	   int cspeed;
	   long cprice;
	   char ccolor[10];
	   int creg;
		};/*Structure*/struct autos toyota,honda,nissan;

	    clrscr();

	 printf("enter the car name of toyota");
	 scanf("%s",toyota.cname);
	 printf("%s",toyota.cname);
	 printf("Enter the model of toyota car");
	 scanf("%d",&toyota.cmodel);
	 printf("%d",toyota.cmodel);
	 printf("enter speed of toyota car");
	 scanf("%d",&toyota.cspeed);
	 printf("%d",toyota.cspeed);
	 printf("Enter price of toyota car");
	 scanf("%lu",&toyota.cprice);
	 printf("%lu",toyota.cprice);
	 printf("Enter the color of toyota car");
	 scanf("%s",toyota.ccolor);
	 printf("%s",toyota.ccolor);
	 printf("Enter Registration year of toyota car");
	 scanf("%d",&toyota.creg);
	 printf("%d",toyota.creg);
	 printf("Name");


  /*	printf("enter the car name of honda");
	 scanf("%s",honda.cname);
	 printf("%s",honda.cname);
	 printf("Enter the model of honda car");
	 scanf("%d",&honda.cmodel);
	 printf("%d",honda.cmodel);
	 printf("enter speed of honda car");
	 scanf("%d",&honda.cspeed);
	 printf("%d",honda.cspeed);
	 printf("Enter price of honda car");
	 scanf("%lu",&honda.cprice);
	 printf("%lu",honda.cprice);
	 printf("Enter the color of honda car");
	 scanf("%s",honda.ccolor);
	 printf("%s",honda.ccolor);
	 printf("Enter Registration year of honda car");
	 scanf("%d",&honda.creg);
	 printf("%d",honda.creg);
	printf("enter the car name of Nissan");
	 scanf("%s",nissan.cname);
	 printf("%s",nissan.cname);
	 printf("Enter the model of nissan car");
	 scanf("%d",&nissan.cmodel);
	 printf("%d",nissan.cmodel);
	 printf("enter speed of  nissan");
	 scanf("%d",&nissan.cspeed);
	 printf("%d",nissan.cspeed);
	 printf("Enter price of nissan car");
	 scanf("%lu",&nissan.cprice);
	 printf("%lu",nissan.cprice);
	 printf("Enter the color of nissan car");
	 scanf("%s",nissan.ccolor);
	 printf("%s",nissan.ccolor);
	 printf("Enter Registration year of nissan car");
	 scanf("%d",&nissan.creg);
	 printf("%d",nissan.creg);
    */
	 printf("What car are you looking for :\n");
	 scanf("%s",t);
	 strcmp(search,t);
	 if(strcmp(search,t)==0)
	 printf("%s",toyota.cname);
	 printf("%d",toyota.creg);
getch();
}