#include<stdio.h>

int main()
{
    int a[5],b[5],i;
    for ( i = 1; i <= 5; i++)
    {
        printf("the roll number of the student :- ");
        scanf("%d",&a[i]);
        printf("enter the marks of the student  :- ");
        scanf("%d",&b[i]);
    }
    for ( i = 1 ; i <=5 ; i++)
    {
        printf("roll no = %d\tmarks = %d\n",a[i],b[i]);
        
    }
    return 0;
    
    
}
