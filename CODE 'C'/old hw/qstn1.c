//1 + 1/2 + 1/3 + 1/4 + 1/5 ... 1/n terms

#include<stdio.h>
int main()
{
    float num,i,term=1;
    double s;
    printf("the term is 1/num\nenter the num = ");
    scanf("%f",&num);
    for ( i = 1; i <= num; i++)
    {
        term=1/i;
        s+=term;
    }
    printf("the sum is = %f",s);
    
    
}