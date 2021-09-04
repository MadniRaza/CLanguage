
/*
#include<stdio.h>
#include<conio.h>
int total();
void main()
	{ while(1){
	int iq,eng,math,gk;
	int iqs=0,engs=0,maths=0,gks=0,exit;
	int bp,totalscore;
	char checkans[4];
	char ans[]="y";
	clrscr();
		printf("\t\t***Aptitude Test for MBA***\n" );
		printf("Q.1 What is the correct answer ? '5+5-5x0=x'\n\t1.x=5\t2.x=10\n\t3.x=0\t4.x=1\n");
		scanf("%d",&iq);
			if(iq==3)
			iqs=10;
		printf("Q.2 How do we pronounce 'MAYONNAISE'? \n\t1.Mayo-naise\t2.may-o-naise\n\t3.mayon-naise\t4.none of these\n");
		scanf("%d",&eng);
			if(eng==2)
			engs=10;
		printf("Q.3 What will be the answer of '10 / 2 x 0 x 2 x 10'= ?\n\t1.10\t2.2\n\t3.5\t4.0\n");
		scanf("%d",&math);
			if(math==4)
			maths=10;
		printf("Q.4 Which is the national bird of pakistan  ?\n\t1.peacock\t2.eagle\n\t3.chakor\t4.crow\n");
		scanf("%d",&gk);
			if(gk==3)
			gks=10;
		printf("Press 'y' for exit");
		strcmp(ans,checkans);
		scanf("%s",checkans);

		 if(strcmp(ans,checkans)==0)
			{
		exit =total(iqs,maths,engs,gks);
		printf("\ttotal score without bonus :%d\n",exit);
		      if(exit==10)
		      bp=0;
		      else if(exit==20)
		      bp=2;
		      else if(exit==30)
		      bp=5;
		      else if(exit==40)
		      bp=10;
		      else
		      bp=0;
		printf("\tbonus points earned: %d\n",bp);
		totalscore = exit+bp;
		printf("\ttotal score out of 50 is : %d\n",totalscore);

			if(totalscore==10)
		printf("\tMessage on IQ level:'Your IQ level is below average'");
		else if(totalscore==22)
		printf("\tMessage on IQ level: Your IQ level is average\n");
		else if(totalscore==35)
		printf("\tMessage on IQ level: You are intelligent\n");
		else if(totalscore==50)
		printf("\tMessage on IQ level: You are a genius\n");
		else if(totalscore==0)
		printf("\tMessage on IQ level: You need to re-appear the test\n");
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
	}    */

#include<stdio.h>
#include<conio.h>
	void iq();
	void english();
	void maths();
	void gk();
	void exit();
void main()

	{

	 int att,ch;
	 clrscr();
		printf("Welcome");
		printf("No of attempts\n");
		scanf("%d",&att);
		if(att!=0)
		printf("not elligble");
	else
		{

	while(ch!=5)
		{

	printf("\n1.IQ\n2.English\n3.maths\n4.Gk\n5.exit\n");
	scanf("%d",&ch);
	switch(ch){
	case 1:
	iq();
	break;
	case 2:
	english();
	break;
	case 3:
	maths();
	break;
	case 4:
	gk();
	break;
	case 5:
	exit(iq,maths,english,gk);
	break;
	}

	}
	}
	getch();
	}
 void iq()
	{
	int score=0;
	int ans;
	printf("Q1 what will be the answer of '5+5-5x0'=x\n1.x=1\n2.x=0\n3.x=4\n4.x=5\n");
	scanf("%d",&ans);
	if(ans==2)
	{
	printf("ans is right");
	 score+=10;

		}
    else
	{
     printf("wrong");
	}
	}
void english()
	{
	int score=0;
	int ans;
	printf("Q.what's the correct prounounciation of 'mayonnaise ?\n1.mayo-naise\n2.may-o-naise\n3.'mayo-nnaise\n4.ma-yonaise\n");
	scanf("%d",&ans);
	if(ans==2)
	{
	printf("ans is right");
	score+=10;

	}
    else
	{
	printf("wrong");
	}
	}
   void maths()
	{
	int score=10;
	int ans;
	printf("Q1what will be the output of 10x0x5/5x5?\n1.0\n2.5\n3.8\n4.6\n");
	scanf("%d",&ans);
	if(ans==1)
	{
	printf("ans is right");
	score+=10;
		}
	else
	{
	printf("wrong");
	}
	}

void gk()
	{
	int score=0;
	int ans;
	printf("Q.which is the national bird of pakistan ?\n1.peacoack\n2.crow\n3.eagle\n4.chakor\n");
	scanf("%d",&ans);
	if(ans==4)
	{
	printf("ans is right");
	score+=10;

	}
    else
	{
     printf("wrong");
	}
	}


     void exit()
      {





      }

	   /*
      int sum,score=0;
      sum=0;
      sum = score;
      printf("%d",sum);
	*/






/*
	printf("\ttotal score without bonus :%d\n",exit);
		      if(exit==10)
		      bp=0;
		      else if(exit==20)
		      bp=2;
		      else if(exit==30)
		      bp=5;
		      else if(exit==40)
		      bp=10;
		      else
		      bp=0;
		printf("\tbonus points earned: %d\n",bp);
		totalscore = exit+bp;
		printf("\ttotal score out of 50 is : %d\n",totalscore);

			if(totalscore==10)
		printf("\tMessage on IQ level:'Your IQ level is below average'");
		else if(totalscore==22)
		printf("\tMessage on IQ level: Your IQ level is average\n");
		else if(totalscore==35)
		printf("\tMessage on IQ level: You are intelligent\n");
		else if(totalscore==50)
		printf("\tMessage on IQ level: You are a genius\n");
		else if(totalscore==0)
		printf("\tMessage on IQ level: You need to re-appear the test\n");
		else
		printf("ERROR");





		*/