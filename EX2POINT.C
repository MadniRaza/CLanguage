#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{char a,str[81],*ptr;
printf("\n Enter A sentence");
gets(str);
printf("Enter character to search for:");
a=getchar();
ptr= strchr(str,a);
printf("%d",ptr-str);
getch();
}