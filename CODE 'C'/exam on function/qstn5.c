#include<stdio.h>

int Prime(int n)
{
    int i;
    for ( i = 2;  i<=n-1 ; i++)
    {
        if (n%2 == 0)
        {
            return 0 ;
        }
        else
        {
            return 1;
        }
        
         
    }
    
}

int main ()
{
    int a,b,i;
    printf("enter the upper limit = ");
    scanf("%d",&a);
    printf("enter the lower limit = ");
    scanf("%d",&b);
    for ( i = a; i <= b; i++)
    {
        if (Prime(i))
        {
            printf(" %d ",i);
        }
        
    }
    
   // Palindromes(a,b);
}