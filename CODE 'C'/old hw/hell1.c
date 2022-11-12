#include <stdio.h>
#include <math.h>
#include <conio.h>


float calculate(float x, float y , float z)
{ 
float i=(float)x*y*z/100.0;

return i;
}



int main()
{
    float a,b,c,i;
    printf("enter the principal amount : ");
    scanf("%f",&a);
    printf("enter the time : ");
    scanf("%f",&b);
    printf("enter the return rate : ");
    scanf("%f",&c);
    i=(float)calculate(a,b,c);
    printf("the simple interest is : %0.02f",i);


    return 0;



}