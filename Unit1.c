#include<stdio.h>
#include<conio.h>

void main()
{
        char ch1,ch2,*ptr1,*ptr2;
        ptr1 = &ch1;
        ptr2 = &ch2;

        while(1)
        {

                clrscr();
                printf("Enter 1st Letter : ");
                scanf(" %c", ptr1);
                printf("Enter 2nd Letter : ");
                scanf(" %c", ptr2);

                if(ch1>ch2)
                {
                        printf("Letter is : %c ", ch1);
                        break;
                }
                else
                {
                        printf("try again. Press any key.");
                        getch();
                }

         }
        

        getch();
}
