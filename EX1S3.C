#include<stdio.h>
#include<conio.h>

void main(){
int principal,period;
float rate,si;
clrscr();
principal =1000;
period = 3;
rate = 8.5;
si = principal * period * rate / 100;
printf("%f",si);

getchar();
}