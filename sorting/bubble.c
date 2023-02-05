#include<stdio.h>
#include<stdlib.h>

void Print(int *arr,int a)
{
    int i;
    printf("\n");
   for ( i = 0; i < a; i++)
   {
        printf(" %d ",arr[i]);
   }
   
}
void bubble (int *arr,int a )
{
    int i,j,temp;
   for ( i = 0; i < a-1; i++)
   {
         
    for ( j = 0; j < a-i-1; j++)
    {
        /* code */
    
      if (arr[j]>arr[j+1]  )
      { 
        /* code */
      
        
        temp=arr[j];
        arr[j]=arr[j+1];
        arr[j+1]=temp;
        // j=i-1;

        // while (j>=0 && arr[j]>temp)
        // {
        //     arr[j+1]=arr[j];
        //     j--;
        // }
        // arr[j+1]=temp;
      }
    }
        
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
    bubble(arr,a);
    printf("\nafter sorting-->");
    Print(arr,a);


    return 0;
}