#include<stdio.h>
#include <conio.h>
void main()
{
    char input;
    printf("enter enything\n");
    scanf("%c",&input);
    if ((input>=65 && input<=90) || (input>=97 && input<=122))
    printf("this is an alphabate");
    else 
    printf("this is not an alphabate");
    getch();

}