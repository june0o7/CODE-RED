#include<stdio.h>


int primeCheck (int num)
{
    int i;
    for ( i = 2; i <= num-1; i++)
    {
        if (num % i == 0)
        {
            return 0;
        }
        else
        { 
        return 1;
        }
    }
}
int main()
{
    int n,b;
    printf("enter the number = ");
    scanf("%d",&n);
    b=primeCheck(n);
    
    if (b==1)
    {
        printf("%d is a prime number.\n",n);
    }
    else
    {
        printf("%d is not a prime number.\n",n);
    }
    return 0;
       
}