//.1-2+3-4+5…..N...

#include<stdio.h>
int main()
{
    int i,a,b=1,n,s;
    
    printf("enter the upper limit = ");
    scanf("%d",&n);
    for ( i=1; i<=n; i++)
    {
        a=i*b;
        b=b*-1;
        s+=a;
        
    }
    printf("the result is = %d ",s);
    
}