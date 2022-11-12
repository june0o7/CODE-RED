# include<stdio.h>
int main()
{
    int num , originalNum , reminder, result=0;
    printf("enter a three digit intiger:");
    scanf ("%d",& num);
    originalNum = num;
    while (originalNum!=0)
    {
        reminder = originalNum % 10 ;
        result+=reminder*reminder*reminder
        originalNum /=10;
    }
    if (result==num)
    printf("%d is an armstrong number. " num);
    else
    printf("%d is not an armstrong number." num );
    return 0;


}