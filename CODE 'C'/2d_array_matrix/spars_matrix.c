#include <stdio.h>
int main()
{
    int i, j;
    int sm[4][4] =
        {
            {0, 1, 0, 0},
            {0, 0, 4, 3},
            {0, 1, 0, 0},
            {0, 0, 0, 0}};
    int csize = 0;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            if (sm[i][j] != 0)
            {
                csize++;
            }
        }
    }
    printf("Row\tcolumn\tvalue\n");
    int cm[3][csize];
    int k = 0;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            if (sm[i][j] != 0)
            {
                /* code */

                printf(" %d\t%d\t%d \n", cm[0][k] = i, cm[1][k] = j, cm[2][k] = sm[i][j]);
                k++;
            }
        }
    }

    return 0;
}