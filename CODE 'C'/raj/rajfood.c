#include <stdio.h>

int main()
{
    int choice, b, f, p, s,B,v, Burger, French, Pizza, Sandwiches,briyani;
    printf("welcome to programming resturant\n");
    printf("the menu is \n1.Burger (200)\n2.French Fries (50)\n3.Pizza (500)\n4.Sandwiches (150)\n5.briyani (250)\n");
    printf("Please select the item number you want to eat 1,2,3,4,5\n");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        printf("You selected Burger.\n");
        printf("please select\n 1.veg 2.non-veg : ");
        scanf("%d",&v);
        printf("Please select quantity : ");
        scanf("%d", &b);
        Burger = 200 * b;
        printf("Your total bill is : %d", Burger);
        break;
    case 2:
        printf("You selected French Fries. \n");
        printf("Please select quantity : ");
        scanf("%d", &f);
        French = 50 * f;
        printf("Your total bill is %d", French);
        break;
    case 3:
        printf("You selected Pizza.\n");
        printf("Please select quantity : ");
        scanf("%d", &p);
        Pizza = 500 * p;
        printf("Your total bill is %d", Pizza);
        break;
    case 4:
        printf("You selected Sandwiches.\n");
        printf("Please select quantity : ");
        scanf("%d", &s);
        Sandwiches = 150 * s;
        printf("Your total bill is %d", Sandwiches);
        break;
    case 5:
        printf("You selected biryani.\n");
        printf("Please select quantity per plate : ");
        scanf("%d", &B);
        briyani = 250 * B;
        printf("Your total bill is %d", briyani);
        break;    
             
    default:
        printf("Invalid choice");
        break;
    }
}
