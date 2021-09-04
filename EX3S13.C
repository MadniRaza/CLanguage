#include<stdio.h>
#include<conio.h>
#include<string.h>
void main(){
char a,str[10],*a1;
clrscr();
	printf("Enter a sentence");
	gets(str);
	printf("Enter a character");
	a=getchar();
	a1=strchr(str,a);
		printf("%d",a1-str);
		getch();}