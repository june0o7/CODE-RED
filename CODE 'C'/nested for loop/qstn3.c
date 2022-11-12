/*
1 2 3 4 5 6 7
2 3 4 5 6 7
3 4 5 6 7
4 5 6 7
5 6 7
6 7
7
*/
#include<stdio.h>
int main()
{
    int i,j;
    for ( i = 1 ; i <= 7 ; i++)
    {
        for ( j = i ; j <= 7 ; j++)
        {
            printf("%d ",j);
        }
        printf("\n");
        
    }
    
}
