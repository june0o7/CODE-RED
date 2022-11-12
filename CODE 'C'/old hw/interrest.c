#include <stdio.h>
#include <math.h>
#include <conio.h>


int calculate(int x, int y , int z)
{
    int i=x*y*z/100;
}
int main()
{
    int a,b,c,i;
    printf("enter the principal amount : ");
    scanf("%d",&a);
    printf("enter the time : ");
    scanf("%d",&b);
    i=calculate(a,b,c);
    printf("the simple interest is : %d",i);
    return 0;



}