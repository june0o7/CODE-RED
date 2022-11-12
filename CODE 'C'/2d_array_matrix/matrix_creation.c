#include <stdio.h>

int main()
{
    int a [2][2];
    int i,j;
    printf("enter the data :-\n");
    for ( i = 0; i < 2; i++)
    {
        for ( j = 0; j < 2 ; j++)
        {
            scanf("%d",&a[i][j]);

        }
        
    }
     int k,l;
     printf("the matrix is :- \n");
    for ( k = 0; k < 2; k++)
    {
        for ( l = 0; l < 2; l++)
        {
            printf("%d\t",a[k][l]);
        }
        printf("\n");
    }
    
    return 0;
}