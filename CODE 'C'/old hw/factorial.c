#include<stdio.h>

int factorial (int num)
{
    
    if ((num==0)||(num==1))
    {
        return 1 ;
    }
    else
    {
        return  num*factorial(num-1);
    }
    
}
int main()
{
    int num,f;
    printf("enter the value :- ");
    scanf("%d",&num);
    f= factorial(num);
    printf("the factorial of the %d is :- %d ",num,f);
    return 0 ;

}