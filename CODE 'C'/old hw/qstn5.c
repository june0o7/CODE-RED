/*
 Write a c program to find out the sum of an A.P. series
Test Data :
Input the starting number of the A.P. series: 1
Input the number of items for the A.P. series: 10
Input the common difference of A.P. series: 4
*/


#include<stdio.h>
int main()
{
    int i,sum=0;

    for ( i = 1; i <= 40; i+=4)
    {
        sum+=i;
        printf("%d\n",i);
    }
        printf("the sum of the ap series = %d\n",sum);


    return 0;
}