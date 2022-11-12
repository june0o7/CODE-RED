#include<stdio.h>
int dis=0,adis=0,gst=0,tp=0;

void calculate(int x, int y)//x= price before discount //y=discount percentage
{
    dis = x*y/100;//discount//
    adis = x-dis;//after discount//
     gst = adis*18/100;
     tp=gst+adis;
}
void disp()
{
    printf("the total price is : %d",tp);
}
int main()
{
    int a,b;
    printf ("enter the price : ");
    scanf("%d",&a);
    printf("enter the discount : ");
    scanf("%d",&b);
    calculate(a,b);
    disp();
    return 0;
}

    
    
