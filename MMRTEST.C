#include<stdio.h>
#include<conio.h>
void main()
	{
       int select;
       int iq,mathss,english;
       char ans='y';
       long sum;
       int exit;
       int a,b,c;
       clrscr();
		  printf("\t\t***Aptitude Test***\n");
		  printf("1.IQ\n2.English\n3.General knowledge\n4.Exit\n");
		  printf("Press Any number to skip :");
		  scanf("%d",&select);
       switch(select)
	{
	case 1:
	do{
		printf("what number does computer understand\n");
		printf("\t1.0 and 1\n\t2.1 and 2\n\t3.0 and 0\n\t 4.none of these\n");

		scanf("%d",&iq);
			if(iq==1)
		      sum+=10;

		printf("Press y for second question?\n");
		ans=getch();
		break;
		}while (ans=='y'|| ans=='Y');
	case 2:
	do{
		printf("What is the name of country which has a river in two shade :\n");
		printf("\t1.Pakistan\n\t2.India\n\t3.africa\n\t 4.none of these\n");
		scanf("%d",english);
		if(english==3)
	       sum+=10;

		printf("Press y for third question :\n");
		ans=getch();
		break;
		}while    (ans=='y'|| ans=='Y');
       case 3:
		printf("What will the answer of 0x0x2x0 :");
		printf("\t1.10\n\t2.20\n\t3.30\n\t 4.none of these\n");
		scanf("%d",&mathss);
		if(mathss==2)
	       sum+=10;
		break;




		}/*Switch*/

		printf("press 4 for exit");

		scanf("%d",exit);

		printf("sum is %d",sum);


















 getch();
	}

