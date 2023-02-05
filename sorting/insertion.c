#include<stdio.h>
#include<stdlib.h>

void Print(int* arr,int a)
{
    int i;
    printf("\n");
   for ( i = 0; i < a; i++)
   {
        printf(" %d ",arr[i]);
   }
   
}
void insertion (int *arr,int a )
{
    int i,j,temp;
   for ( i = 1; i <= a-1; i++)
   {
        temp=arr[i];
        j=i-1;

        while (j>=0 && arr[j]>temp)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=temp;
        
   }
   
}
int main()

{
    int i,n,a;
    printf("how many number do you want to add--> ");
    scanf("%d",&a);
    printf("enter  the array data :- \n");
    int arr[a];
    for ( i = 0; i < a; i++)
    {
        printf("%d indexces value:- ",i);
        scanf("%d",&arr[i]);
    }
    printf("before sorting-->");
    Print(arr,a);
    insertion(arr,a);
    printf("\nafter sorting-->");
    Print(arr,a);


    return 0;
}