//factorial of n......
#include<stdio.h>
int main()
{
    int fact=1,a,i;
    printf("enter the number :- ");
    scanf("%d",&a);
    for ( i = 1 ; i <= a ; ++i)
    {
        fact*=i;
    }
    printf("the factorial of the %d is = %d",a,fact);
    return 0;
    
}