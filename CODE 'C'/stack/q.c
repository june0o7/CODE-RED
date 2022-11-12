#include <stdio.h>
#include <stdlib.h>
void sort(int n, int A[n])
{
    int j;
    for (j = 0; j < n - 1;)
    {
        if (A[j] < A[j + 1]) 
        {
            j = j + 1;
        }

        else
        {
           
            A[j] = A[j] + A[j + 1];
            A[j + 1] = A[j] - A[j + 1];
            A[j] = A[j] - A[j + 1];
            
            j = j + 1;
        }
    }
}
int main()
{
    int n;
    printf("enter the number of elements:\n");
    scanf("%d", &n);
    int a[n];
    // input
    for (int i = 0; i < n; i++)
    {
        printf("enter element[%d]: ", i);
        scanf("%d", &a[i]);
    }
    // displaying unsorted
    for (int i = 0; i < n; i++)
    {
        printf("[%d]", a[i]);
    }
    // all iteration
    for (int i = 0; i < n - 1; i++)
    {
        sort(n, a);
    }
    printf("\n");
    // displaying sorted 
    for (int i = 0; i < n; i++)
    {
        printf("[%d]", a[i]);
    }
    return 0;
}