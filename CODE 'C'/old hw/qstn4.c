//0 1 1 2 3 5 8 13


#include<stdio.h>
int main()
{
    int i,a,b=0,c=1;
    for ( i = 1 ; i <=8 ; ++i)
    {
        a=b+c;

        printf(" %d ",b);//swaping
        
        b=c;
        c=a;
    }
    return 0;
    
}