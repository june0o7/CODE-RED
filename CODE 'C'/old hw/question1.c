// x^2!/y - x^3!/y + x^4!/y......upto 10 terms

#include<stdio.h>
#include<math.h>


int main()
{
    float x,y,i,j,fact=1,term=1,b=1;
    double s=0;
    printf("enter the x : ");
    scanf("%f",&x);
    printf("\nenter the y : ");
    scanf("%f",&y);

    for ( i = 1 ; i <= 10; i++ )
    {
        for ( j = 2; j <= i; j++)        
        { 
            fact*=j ;  
   //         printf("\nthe factorials are = %f\n",fact); 
        }
        term=pow(x,fact)/y;
   //     printf("\nthe terms are = %f\n",term);
        
        s+=term;
        b=term*-1;
        
    }
            printf("the result is = %f",s);

    
    
    

}