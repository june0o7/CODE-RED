#include <stdio.h>

int main()
{
    int a [2][2];
    int i,j;
    printf("enter the data of the 1st matrix:-\n");
    for ( i = 0; i < 2; i++)
    {
        for ( j = 0; j < 2 ; j++)
        {
            scanf("%d",&a[i][j]);

        }
        
    }
    
    int b [2][2];
    
    printf("enter the data of the 2nd matrix:-\n");
    for ( i = 0; i < 2; i++)
    {
        for ( j = 0; j < 2 ; j++)
        {
            scanf("%d",&b[i][j]);

        }
        
    }
    int k,l;
     printf("the 1st matrix is :- \n");
    for ( k = 0; k < 2; k++)
    {
        for ( l = 0; l < 2; l++)
        {
            printf("%d\t",a[k][l]);
        }
        printf("\n");
    }
     //int k,l;
     printf("the 2nd matrix is :- \n");
    for ( k = 0; k < 2; k++)
    {
        for ( l = 0; l < 2; l++)
        {
            printf("%d\t",b[k][l]);
        }
        printf("\n");
    }
    printf("addition :- \n");
    int c[2][2];
    for ( k = 0; k < 2; k++)
    {
        for ( l = 0; l < 2; l++)
        {
            printf("%d\t",c[k][l]=a[k][l]+b[k][l]);
        }
        printf("\n");
    }
    
    printf("substraction :- \n");
    int d[2][2];
    for ( k = 0; k < 2; k++)
    {
        for ( l = 0; l < 2; l++)
        {
            printf("%d\t",d[k][l]=b[k][l]-a[k][l]);
        }
        printf("\n");
    }
    return 0;
}
