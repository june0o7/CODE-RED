#include<stdio.h>
#include<stdlib.h>
/*
 char c;

    printf("enter the ch = ");
    scanf("%c",&c);
    printf("%c=%d",c,c);
    */

void storing()
{
    char *ptr;
    ptr=(char*)malloc(sizeof(char));


}   
int main()
{
    
    char c ;
    printf("A to Z the ascii codes are = ");
    for ( c = 65; c <= 90; c++)
    {
        storing(c);
        printf("%c=%d\n",c,c);
    }
    
    
}
   


