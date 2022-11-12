#include<stdio.h>
int main()
{
    int i,a,b=0;
    printf("the lower number is :- 1\n");
    printf("enter max number :- ");
    scanf("%d",&a);
    for ( i = 1 ; i <= a; i+=2)
    {
        printf("%d\n",i);
        b+=i; 

    }
    printf("\nthe sum of all odd num between 1 and %d is :- %d",a,b);

    return 0;

    
}