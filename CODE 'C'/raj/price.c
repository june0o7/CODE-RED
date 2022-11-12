#include<stdio.h>
int dis=0, p=0, tp= 0 , gst=0 ;

void calculate (int x,int y)
{
    dis=x*y/100;
    p=x-dis;
    gst=p*18/100;
    tp=gst+p;

}
void display()
{ 
printf("the total price of the product is : %d",tp);
}
int main()
{
    float a,b,c; 
    printf("enter the price of the product : ");
    scanf("%f",&a);
    printf("enter the discount : ");
    scanf("%f",&b);
    calculate(a,b);
    display();
    return 0;



}