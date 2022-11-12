# include<stdio.h>

void evennum( int x , int y)
{ 
int i;
for ( i=x ; i<=y ; i++ )
{
    
    if
    (i %2==0)
    printf(" %d",i);

}

}
int oddnum(int x , int y)
{
    int i;
    for ( i = x; i <= y ; i++)
    {
        if (i%2!=0)
        
        printf(" %d",i);
    }
    
}
int main()
{
    int a,b;
    printf("enter the first number : ");
    scanf("%d",&a);
    printf("enter the second number : ");
    scanf("%d",&b);
    printf("the even numbers are : ");
    evennum(a,b);
    printf("\nthe odd numbers are : ");
    oddnum(a,b);
    return 0;

}