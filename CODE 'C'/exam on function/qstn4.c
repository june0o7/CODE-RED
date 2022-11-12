#include<stdio.h>
#include<math.h>
#define pi 3.14

int overloading (int r)
area= pi*r*r;
area= side*side;

int main()
{
    int area,c;
    printf("1)find the area of the circle\n2)find the area of the square\n3)find the area of the rectangel\nenter the number= ");
    scanf("%d",&c);
    switch (c)
    {
    case 1 :
    { 
    int r;
    printf("enter the radius of the circle = ");
    scanf("%d",&r);
    
    printf("the area of the circle is %d",area);
        
        break;
    }
    case 2 :
    { 
    int side;
    printf("enter the length of the side = ");
    scanf("%d",&side);
    
    printf("the area of the circle is %d",area);
        
        break;
    }
    default:
        break;
    }
    
}