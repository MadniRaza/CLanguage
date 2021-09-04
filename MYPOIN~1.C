#include<stdio.h>
#include<conio.h>
void main(){

char cha,chb,*cha1,*chb2;
cha1 = &cha;
chb2 = &chb;


		 while(1)
		 {
		clrscr();
		printf("Enter First letter");
		scanf(" %c", cha1);
		printf("Enter second letter");
		scanf(" %c", chb2);
		if(cha>chb)
		{
			printf(" %c", cha);
		     break;
		 }
		  else if(cha<chb)
		   {
		   printf(" %c", chb);
		   break;
		   }
		   else{
		   printf("ss");
		   getch();     }



		  }








getch();
}