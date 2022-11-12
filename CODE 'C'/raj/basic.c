#include<stdio.h>
#include<conio.h>
void main()
{
  int a;
  printf("enter the number\n");
  scanf("%d",&a);
  if (a>=10 && a<=200)
  printf("the number is in the range");
  else 
  printf("the number is out of range");
  getch();
}
