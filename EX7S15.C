#include<stdio.h>
void main(){
	int a,b;
	int *pa,*pb;
	pa =&a;
	pb =&b;
	clrscr();
	a=10;
	b=20;
		printf("a= %d,b= %d\n",a,b);
		swap(pa,pb);
		printf("after interchanging a= %d,b= %d\n",a,b);
		 getch();
		}
swap(int *c, int *d){
 int temp;
 temp = *c;
 *c = *d;
 *d = temp;
 return;
 }