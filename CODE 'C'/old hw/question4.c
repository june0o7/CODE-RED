#include<stdio.h>
#include<stdlib.h>
int main()

{
    float *ptr,i,j=0;
    ptr=(float*)calloc(5,sizeof (float));
        printf("enter the 5 float numbers\n");

    for ( i = 1; i <= 5; i++)
    {
        scanf("%f",ptr);
        j+=*ptr;

    }
    
    
    printf("the sum is = %f",j);
}
   // for ( j = 0; j < =5; j++)
   // {
   //     printf()
   // }
    
    
//}