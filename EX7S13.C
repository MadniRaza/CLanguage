#include<stdio.h>
#include<string.h>
void main(){
 char compname[20] ="microsoft";
 int len, ctr;
 clrscr();
 len=strlen(compname);
 for(ctr=0;ctr<len;ctr++)
 printf("%c * ", compname[ctr]);

 getch();


}
