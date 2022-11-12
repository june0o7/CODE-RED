#include<stdio.h>
#include<conio.h>
void main()
{
    int year;
    printf("enter the year\n");
    scanf("%d",&year);
    if ((year%4==0)||(year%400==0))

    printf(" %d\n is leapyear",year);
    else if (year%100==0)
    printf("%d\n is not leap year",year);
    else
    printf("%d\n is not leapyear");
    getch();

}