#include<stdio.h>
#include<stdlib.h>

void Print(int*arr,int a)
{
    int i;
    for ( i = 0; i < a; i++)
    {
        printf(" %d ",arr[i]);
    }
    
}
void selection (int*arr,int a)
{
    int j,i,m;
    for ( i = 0; i < a-1; i++)
    {
        m=i;
        for ( j = i+1; j < a; j++)
        {
            if (arr[j]<arr[m])
            {
                m=j;
            }
            
        }
        int temp = arr[i];
            arr[i]=arr[m];
            arr[m]=temp;
        
    }
    
}
int main()

{
    int a,b,c,i;
    printf("enter the size of the array --> ");
    scanf("%d",&a);
    int arr[a];
    printf("enter the values-|\n");
    for ( i = 0; i < a; i++)
    {
        printf("%d----->",i);
        scanf("%d",&arr[i]);
    }
    printf("\nbefore the sorting.------>");
    Print(arr,a);
    selection(arr,a); 
    printf("\nafter the sorting.-------->");
    Print(arr,a); 


    return 0;
}