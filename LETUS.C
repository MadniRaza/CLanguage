

/*
#include<stdio.h>
/*
void main(){
*
int r,c,sum;
clrscr();
for(r=1;r<=3;r++)
{
 for(c=1;c<=2;c++)
 {
 sum=r+c;
 printf("r=%d c=%d s=%d\n",r,c,sum);
 }
}
   */
/*
   int i,j;
   clrscr();
   for(i=1;i<=2;i++)
   {for(j=1;j<=2;j++)
   {/*if(i==j)
   continue;
   printf("%d%d\n",i,j);}
   }
  */
/*
#include<stdio.h>
void display();
int main(){
	printf("only stupids use c?\n");
	display();
	return 0;
}
void display()
{
printf("Fools too use c!\n");
main();

}
  */
  /*
  #include<stdio.h>
  int check(int);
  int main()
  {
  int i=45,c;
  c=check(i);
   printf("%d\n",c);
   return 0;


  }
  int check(int d)
  {
  if(d>=45)
  return (100);
  else
  return(10 * 10);

  }
    */            /*

    #include<stdio.h>
    int check(int);
    int main(){
	int i=45,c;
	c=multiply(i*1000);
	printf("%d",c);
	return 0;

    }
 int check(int ch)
 {
	if(ch>=4000)
	return (ch/10);
	else return(10);


 }
 */

 #include<stdio.h>
 int addmult(int,int);
 int main()
 {
	int i=3,j=4,k,l;
	k=addmult(i,j);
	l=addmult(i,j);
	printf("%d%d\n",k,l);
	return ;

 }      int addmult(int ii,int jj)
 int kk,ll;
 kk=ii++jj;
 ll=ii+jj;
 return(kk,ll);
 }