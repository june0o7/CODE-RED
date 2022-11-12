#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,c;
    printf("enter the number\n");
    scanf("%d %d %d",&a,&b,&c);
    
    if((a>b)&&(a>c))
    printf(" the largest number is : %d",a);
    else if (b>c)
    printf("the largest number is : %d",b);
    else
    printf("the largest number is : %d",c);


    getch();
}