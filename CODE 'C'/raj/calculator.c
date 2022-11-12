#include<stdio.h>
#include <conio.h>
int main()
{
    int a[5],b[5],i;
    for (i=0;i<5;i++)
    {
        printf ("enter the roll no:[%d]",(i+1));
         scanf("%d",&a[i]);
         printf("enter the marks:[%d]",i+1);
        scanf("%d",&b[i]);


    }

    for (i=0;i<5;i++)
    {
        printf("\nroll no :[%d] ;marks :[%d] ",a[i],b[i]);

    }
    getch();
    return 0 ;
}