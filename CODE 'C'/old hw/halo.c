#include<stdio.h>
#include<conio.h>
void main()
{
   int a,b,c;
   printf("enter the angle of a,b,c :\n");
   scanf("%d%d%d",&a,&b,&c);
   if (a+b+c==180)
   {
    printf(" not possible");
   }
   else
   {
    if ((a<=90)||(b<=90)||(c<=90))
    {
        printf("right angle");

    }
    else

    {
        printf("not right");
    }
    
   }
   getch(); 
   }

   
   
