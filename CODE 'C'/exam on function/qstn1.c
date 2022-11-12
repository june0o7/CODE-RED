#include<stdio.h>
#include<math.h>

int checkArmstrong (int num, int n)
{
    int rem,sum=0,temp;
    temp=num;
    while(temp>0)
    {
        rem=temp%10;
        sum+=pow(rem,n);
        temp/=10;
    }
    if (sum==num)
    {
        return 1;
    }
    else 
    { 
    return 0;
    }
    
}


int main()
{
    int a,b,c;
    printf("enter the number = ");
    scanf("%d",&a);
    printf("how many numbers are there = ");
    scanf("%d",&c);
    b=checkArmstrong(a,c);
    if (b==1)
    {
        printf("%d is an armstrong number",a);
        
    }
    else 
    {
        printf("%d is not an armstrong number",a);

        
    }
    return 0;
    

}