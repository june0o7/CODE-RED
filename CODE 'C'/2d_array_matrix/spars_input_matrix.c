#include <stdio.h>
int main()
{
    // int i,j;
    // int sm[4][4] = 
    //         {
    //          {0,1,0,0},
    //          {0,0,4,3},
    //          {0,1,0,0},
    //          {0,0,0,0}
    //         };
    int sm[4][4];
    int i,j;
    printf("enter the data of a 4/4 matrix:-\n");
    for ( i = 0; i < 4; i++)
    {
        for ( j = 0; j < 4 ; j++)
        {
            scanf("%d",&sm[i][j]);

        }
        
    }
     int k,l;
     printf("the matrix is :- \n");
    for ( k = 0; k < 4; k++)
    {
        for ( l = 0; l < 4; l++)
        {
            printf("%d\t",sm[k][l]);
        }
        printf("\n");
    }
    int csize = 0;
    for ( i = 0; i < 4; i++)
    {
        for ( j = 0; j < 4; j++)
        {
            if (sm[i][j]!=0)
            {
                csize++;
            }
            
        }
        
    }
    printf("Row\tcolumn\tvalue\n");
    int cm[3][csize];
    int q=0;
    for ( i = 0; i < 4; i++)
    {
        for ( j = 0; j < 4; j++)
        {
            if (sm[i][j]!=0)
            {
                /* code */
            
            
            printf(" %d\t%d\t%d \n",cm[0][q]=i
            ,cm[1][q]=j
            ,cm[2][q]=sm[i][j]);
            q++;
            }

        }
        
    }
    
   return 0;
            
}