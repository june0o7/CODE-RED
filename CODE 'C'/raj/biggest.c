#include<stdio.h>

int num(int x, int y, int z)
{ 
    int m=0;

    if ((x>y)&&(x>z))
    {
        (m=x);
    }
    else if ((y>x)&&(y>z))
    {
        (m=y);

    }
    else
    (m=z);    
}
int main()
{
    int a,b,c,d;
    printf("enter three num \n");
    scanf("%d%d%d",&a,&b,&c);
    d=num(a,b,c);
    
    printf("the biggest number is : %d",d);

return 0;

}