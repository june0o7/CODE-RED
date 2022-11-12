#include<stdio.h>
void friedrice(){
  int a;
  printf("1.mixed fried rice\n");
  printf("2.plain fried rice\n");
  scanf("%d",&a);
  switch(a){
    case 1: printf("mixed fried rice with chili chicken\nYour total bill is 450\nThank you");
         break;
    case 2: printf("plain fried rice with mutton kosha\nYour total bill is 400\nThank you");
         break;
    default: printf("wrong input");  
  }
}
void pizza(){
  int b;
  printf("1.margharita\n");
  printf("2.chicken masala\n");
  scanf("%d",&b);
  switch(b){
    case 1: printf("Margherita with extra chees, regular size + coke\nYour total bill is 300\nThank you");
         break;
    case 2: printf("chicken masala chees pizza,regular size + coke\nYour total bill is 350\nThank you");
         break;
    default: printf("Wrong input");       
  }
}
int main(){
  printf(":::::::::::::-Menu-::::::::::::::\nEnter your choice\n\n");
  printf("1.fried rice\n");
  printf("2.pizza\n");
  int choice;
  scanf("%d",&choice);
  switch(choice){
    case 1: friedrice();
         break;
    case 2: pizza();
         break;
    default: printf("wrong input");        
  }
return 0;  
}

