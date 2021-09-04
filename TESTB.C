#include<stdio.h>
#include<conio.h>
int total(int,int,int,int);   /*Function prototype*/
void main()
	{  while(1){
	int iq,eng,math,gk;
	int iqs=0,engs=0,maths=0,gks=0,exit;
	int bp,totalscore;
	char checkans[4];
	char ans[]="y";

	clrscr();
		printf("\t\tAptitude Test for MBA\n" );

		printf("\tIQ\n.1\n is sense big or buffallo ?>\n 1.Buffalo\n 2.sense\n 3.camel\n 4 .dinasor\n");
		scanf("%d",&iq);
			if(iq==1)
			iqs=10;



		printf("Q.2How many alphabets in english ?\n 1.22\n2.24\n3.26\n4.28\n");
		scanf("%d",&eng);
			if(eng==3)
			engs=10;
		printf("Q.3 What will the answer of 0x4x0x2x5x0 ?\n1.0\n2.1\n3.4\n4.10\n");
		scanf("%d",&math);
			if(math==1)
			maths=10;
		printf("Q.4 What will the answer of 0x4x0x2x5x0 ?\n1.0\n2.1\n3.4\n4.10\n");
		scanf("%d",&gk);
			if(gk==1)
			gks=10;
		printf("Press 4 for exit");
		strcmp(ans,checkans);
		scanf("%s",checkans);

		 if(strcmp(ans,checkans)==0)
			{
		exit =total(iqs,maths,engs,gks);
		printf("total score without bonus :%d\n",exit);
		      if(exit==10)
		      bp=0;
		      else if(exit==20)
		      bp=2;
		      else if(exit==30)
		      bp=5;
		      else if(exit==40)
		      bp=10;
		printf("bonus points earned: %d\n",bp);
		totalscore = exit+bp;
		printf("total score out of 50 is : %d",totalscore);

			if(totalscore==10)
		printf("Message on IQ level: Your IQ level is below average");
		else if(totalscore==22)
		printf("Message on IQ level: Your IQ level is average");
		else if(totalscore==35)
		printf("Message on IQ level: You are intelligent");
		else if(totalscore==50)
		printf("Message on IQ level: You are a genius");
		else if(totalscore==0)
		printf("Message on IQ level: You need to re-appear the test");
		else
		printf("ERROR");
				printf("Thankyou\n");
		  break;
		}
	 else
		{
	 printf("ERROR");
		}
}
getch();
	}

int total(int v,int x,int y,int z)
	{
 int sum;
 sum = v+x+y+z;
 return(sum);
	}


	/*Thanks GOD*/