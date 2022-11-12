//1 +11 + 111 + 1111 + .. n terms

#include<stdio.h>
int main()
{
    int i,a,n,sum=0,t=1;
    printf("enter the terms =  ");
    scanf("%d",&n);
    for ( i = 1 ; i <=n ; i++)
    {
        
        sum+=t;
        t=(t*10)+1;
        
    }

        printf(" %d ",sum);

    return 0;
    
}