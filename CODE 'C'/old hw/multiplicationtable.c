#include<stdio.h>
int main()
{
    int num,i;
    printf("enter the number you want the table of multiplication :- ");
    scanf("%d",&num);
    printf("the multiplication table of %d is\n",num);
    for ( i = 1; i <= 10 ; i++)

    {
        printf("%d x %d = %d\n",num,i,num*i);
    }
    
}