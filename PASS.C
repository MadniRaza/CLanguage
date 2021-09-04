#include<stdio.h>
#include<conio.h>
#include<string.h>

void main(){

	char pass[]= "Aptech";
	char a[10];



       gets(a);
       strcmp(pass,a);
       if(strcmp(pass,a)==0)
       printf("right");
       else
       printf("Wrong");


	getch();
}