#include<stdio.h>
#include<string.h>
void main()
{
	char name1[15] = "ali";
	char name2[15] = "raza";
	char name3[15] = "sana";
	char name4[15] = "maham";
	int i;
	clrscr();
	i=strcmp(name1,name2);
	printf("%s compared with %s returned %d\n", name1,name2,i);
	i=strcmp(name1,name3);
	printf("%s compared with %s returned %d\n", name1,name3,i);
	i=strcmp(name1,name2);
	printf("%s compared with %s returned %d\n", name1,name4,i);

      getch();
      }