#include<stdio.h>
#include<conio.h>
void main()
{
    int a;
    printf("enter the number\n");
    scanf("%d",&a);
    if (a%2==0)
    printf("the number is even");
    else 
    printf("the number is odd");
    getch();
}