#include<stdio.h>
 #include<conio.h>

void main()

{

char op;

double first, second;

printf("Enter an operator (+, -,*,/):");

scanf("%c", &op);

printf("\nEnter two operands: \n"); 
scanf("%lf %lf",&first, &second);

switch (op)

{

case'+':

printf("%.1lf + %.1lf = %.11f", first, second, first + second);

break;

case'-':

printf("%.1lf - %.11f = %.11f", first, second, first-second);

break;

case'*':

printf("%.11f* %.11f = %.11f", first, second, first * second);

break;

case'/':

printf("%.11f/%.11f = %.11f", first, second, first/second);

break;

default:

printf("Error! operator is not correct");
 }

getch();

}
