//0 1 1 2 3 5 8 13


#include<stdio.h>
int main()
{
    int i,a=0,b=0,c=1,sum=0;
    for ( i = 1 ; i <8 ; ++i)
    {
        sum=a+b+c;
        printf(" %d  ",b);
        a=b;
        b=c;
        c=sum;

        
        
       
    }
    return 0;
    
}