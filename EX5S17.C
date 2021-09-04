#include<stdio.h>
#include<string.h>
#include<conio.h>
void main()
{
	char str1[15] = "Naw York";
	char str2[15] = "Washington";
	char chr = 'a';
	char *loc;
	 clrscr();
     loc=strchr(str1,chr);
	if(loc!=NULL)
		printf("%c occurs in %s\n", chr, str1);
		else
		printf("%c does not occur in %s\n",chr, str1);
		loc=strchr(str2, chr);
		if(loc!=NULL)
			printf("%c occurs in %s\n", chr, str2);
			else
			printf("%c does not occur in %s\n", chr, str2);
			getch();

			     }