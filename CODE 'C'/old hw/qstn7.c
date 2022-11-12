//. Find sum of sum and product of first n numbers

#include<stdio.h>
int main()
{
    int t=1,n,i,j,k;
    
    printf("enter the upper limit =");
    scanf("%d",&n);
    for ( i = 1 ; i <= n ; ++i)
    {
        t*=i;
    }
    printf("the product of the first %d numbers is = %d\n ",n,t);
    

    
    for ( k = 0; k <= n; ++k)
    {
        j+=k;
        
    }
    printf("the sum of the first %d numbers is = %d \n",n,j);
    printf("\nthe sum of the product and sum is (%d+%d) = %d",t,j,j+t);
    return 0;
    
}