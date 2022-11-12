#include<stdio.h>
int s(int a , int b)
{
    int c = 0;
    c = a;
    a = b;
    b = c;

    return (b*b);
}
int main()
{
    int a,b;
    printf("enter tow number :\n" );
    scanf("%d%d",&a,&b);
    int c=s(a,b);
    printf("the final ans is : %d",c);
    return 0;
}
