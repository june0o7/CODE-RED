#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n;
    printf("enter how meny number do you want to enter = " );
    scanf("%d",&n);
    int *ptr;
    ptr = (int*)malloc(sizeof (int));
    int *p = ptr;
    printf("\nenter the number");

    int i;
    for ( i = 1; i <= n; i++)
    {
        scanf("%d",ptr);
        ptr++;
            
    }
    int j;
    for ( j = 1; j <= n; j++)
    {
        printf("%d",*p);
        p++;
    }
}

    
    
    


