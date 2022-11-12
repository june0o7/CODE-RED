# include<stdio.h>
#include<math.h>

int main()
{
    int term=0,i,j,sing=1,x,y;
    double s=0;
    printf("enter the value of x = ");
    scanf("%d",&x);
    printf("enter the value of y = ");
    scanf("%d",&y);



    for ( i = 2 , j=4; i <= 40; i+=2, j+=2)
    {
        term = sing*pow(pow(x,i),j)/pow(y,j);
        sing = sing*-1;
        s+=term;
        
    }
        printf(" the result is = %d",s);

    
}