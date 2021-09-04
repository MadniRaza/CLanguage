#include<stdio.h>
void main(){

int i;

for(i=1;i<6;i++)
	printf("Square of %d is %d\n",i,square(i));
	getch();
}
int square(int x){
int j;
j=x*x;
return(j);

}