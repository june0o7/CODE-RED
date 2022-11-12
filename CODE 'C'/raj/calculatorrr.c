#include <stdio.h>
#include <conio.h>
 void main()

{
    char op;
    double  first , second ;
     printf("choose an operator(+,-,*,/):");
     scanf("%c",&op);
    printf("\nenter two numbers\n");
    scanf("%lf %lf", &  first , & second);

    switch (op)
    {
    case '+':

        printf("%.1lf+%.1lf=%.1lf",first+second);         
    break;

    case '-' :
    printf("%.1lf-%.1lf=%.1lf",first ,second,first-second);
    break;
    
    case'*':

    printf("%.1lf*%.1lf=%.1lf",first ,second,first*second);
    break;

    case '/':

    printf("%.11f/%.11f=%.11f",first ,second,first/second);
    break;
    
   // case'%':

    //printf("%.1lf % %.1lf=%.1lf",first ,second,first % second);
    //break;






   // printf("%.1lf-%.1lf=%.1lf",first ,second,first-second);


    
      default:
       printf("ERROR");
        break;
    }
getch();


}