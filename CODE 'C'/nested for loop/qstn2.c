/*
***
**
*
**
***
*/
#include<stdio.h>
int main()
{
    int i,j;
    for ( i = 3 ; i >=1 ; --i)
    {
        for ( j = 1; j <= i ; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for ( i = 2; i <= 3; i++)
    {
        for ( j = 1 ; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    
    
}