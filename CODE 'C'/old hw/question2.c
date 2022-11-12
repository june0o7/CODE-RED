//......1/1 + 1+2/1*2 + 1+2+3/1*2*3 + 1+2+3+4/1*2*3*4........upto 10 terms

#include<stdio.h>
#include<math.h>
int main()
{
    float k,i,j,terms=0;
    double s=0;
    for ( i = 1; i <= 10; i++)
    {
     for ( j = 1; j <i; j++)
     {
        k=j*(j+1)/2;
        terms=k/1*i;
     }
             s+=terms;

     
     
     /*   for ( k = 0 ,j = 1; j <10 ; k+=2,j++)        
        {
            terms=1+k/1*j;
            s+=terms;
        }
       */ 
    }
    printf("%f",s);
    
}
