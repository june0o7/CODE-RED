#include<stdio.h>
int main()
{
    int c,a[c],b[c],i;
    printf("enter the number of student:",c);
    scanf("%d",&c);
    for(i=0;i<c;i++)
    {
        
        printf("the roll no is [%d]",i+1);
        scanf("%d",&a[i]);
        printf("the marks is [%d]",i+1);
        scanf("%d",&b[i]);

    }
    for(i=0;i<=c;i++)
    {
        printf("\nroll no:%d , marks:%d",a[i],b[i]);
    }
    
}