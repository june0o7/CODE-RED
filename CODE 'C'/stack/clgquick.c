#include <stdio.h>
void quicksort(int number[10], int first, int last)
{
    int i, j, pivot, temp;
    if (first < last)
    {
        pivot = last;
        i = first;
        j = last;
        while (i < j)
        {
            while (number[i] <= number[pivot] && i < last)
                i++;
            while (number[j] > number[pivot])
                j--;
            if (i < j)
            {
                temp = number[i];
                number[i] = number[j];
                number[j] = temp;
            }
        }
        temp = number[pivot];
        number[pivot] = number[j];
        number[j] = temp;
        // for ( i = 0; i < j; i++)
        // {
        //     printf(" %d ",temp);
        // }
        
        quicksort(number, first, j - 1);
        quicksort(number, j + 1, last);
    }
}
int main()
{
    int i, n, number[10];
    printf("size of the array:- ");
    scanf("%d", &n);
    
    for (i = 0; i < n; i++)
    { 
    printf("Enter %d element: ", i);
    scanf("%d", &number[i]);
    }
    printf("\n");
     printf("the user given array is : ");
    for (i = 0; i < n; i++)
    { 
        printf(" %d", number[i]);
    }
    printf("\n");
    quicksort(number, 0, n - 1);
    printf("the sorted array is : ");
    for (i = 0; i < n; i++)
    { 
        printf(" %d ", number[i]);
    }
    return 0;
}