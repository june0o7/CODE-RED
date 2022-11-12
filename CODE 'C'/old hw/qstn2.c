//Write a program in C to display the n terms of square natural number and their sum

#include<stdio.h>
// #include<math.h>
int main()
{
    int num,i,t,x=0;
    printf("enter the number = ");
    scanf("%d",&num);
    
    for ( i = 0; i <= num ; i++)
    {
        t=i*i;
        x+=t;
        
        printf("%d^2 = %d\n",i,t);
    }
    
    printf("the sum is = %d",x);

    

    return 0;
}