#include <stdio.h>
void FR(){
    int a;
    printf("1. EGG FRIED RICE\n");
    printf("2. CHICKEN FRIED RICE\n");
    printf("3. MIXED FRIED RICE\n");
    printf("PLS ENTER YOUR CHOICE:\n");
    scanf("%d",&a);
    switch(a){
        case 1:printf("For Egg fried rice please pay 150 rupee only\n");
               printf("...................THANK YOU.................\n");
               break;
        case 2:printf("For Chicken fried rice please pay 190 rupee only\n");
               printf("...................THANK YOU.................\n");
               break;
        case 3:printf("For Mix fried rice please pay 230 rupee only\n");
               printf("...................THANK YOU.................\n");
               break;
        default:printf("WRONG INPUT !!!\n");
    }
}
void CC(){
    int b;
    printf("1. EXTRA SPICY\n");
    printf("2. EXTRA CHICKEN\n");
    printf("3. NORMAL\n");
    printf("PLS ENTER YOUR CHOICE:\n");
    scanf("%d",&b);
    switch(b){
        case 1:printf("For extra spicy please pay 100 rupee only\n");
               printf("..................THANK YOU................\n");
               break;
        case 2:printf("For extra chicken please pay 150 rupee only\n");
               printf("..................THANK YOU................\n");
               break;
        case 3:printf(" please pay 80 rupee only\n");
               printf("........THANK YOU........\n");
               break;
        default:printf("WRONG INPUT !!!\n");
    }
}
void p(){
    int c,d,e,f;
    printf("1. VEG PIZZA\n");
    printf("2. MARGHERITA PIZZA\n");
    printf("3. CHICKEN PIZZA\n");
    printf("PLS ENTER YOUR CHOICE:\n");
    scanf("%d",&c);
    switch(c){
        case 1:printf("1. EXTRA VAGGIES\n");
               printf("2. NORMAL\n");
               printf("PLS ENTER YOUR CHOICE:\n");
               scanf("%d",&d);
               switch(d){
                case 1:printf("For veg pizza with extra vaggies your payment 350 rupee only\n");
                       printf("...........................THANK YOU.........................\n");
                       break;
                case 2:printf("For veg pizza your payment 290 rupee only\n");
                       printf("...........................THANK YOU.........................\n");
                       break;
                default:printf("WRONG INPUT !!!");
               }
               break;
        case 2:printf("1. EXTRA CHEESE\n");
               printf("2. NORMAL\n");
               printf("PLS ENTER YOUR CHOICE:\n");
               scanf("%d",&e);
               switch(e){
                case 1:printf("For margherita pizza with extra cheese your payment 450 rupee only\n");
                       printf("...........................THANK YOU.........................\n");
                       break;
                case 2:printf("For margherita pizza your payment 390 rupee only\n");
                       printf("...........................THANK YOU.........................\n");
                       break;
                default:printf("WRONG INPUT !!!");
               }
               break;
        case 3:printf("1. EXTRA CHICKEN\n");
               printf("2. NORMAL\n");
               printf("PLS ENTER YOUR CHOICE:\n");
               scanf("%d",&f);
               switch(f){
                case 1:printf("For chicken pizza with extra chicken your payment 550 rupee only\n");
                       printf("...........................THANK YOU.........................\n");
                       break;
                case 2:printf("For chicken pizza your payment 500 rupee only\n");
                       printf("...........................THANK YOU.........................\n");
                       break;
                default:printf("WRONG INPUT !!!");
               }
               break;
        default:printf("WRONG INPUT !!!");
    }
}
void B(){
    int g;
    printf("1. EGG BIRIYANI\n");
    printf("2. CHICKEN BIRIYANI\n");
    printf("3. MUTTON BIRIYANI\n");
    printf("PLS ENTER YOUR CHOICE:\n");
    scanf("%d",&g);
    switch(g){
        case 1:printf("For Egg biriyani please pay 200 rupee only\n");
               printf("...................THANK YOU.................\n");
               break;
        case 2:printf("For Chicken biriyani please pay 190 rupee only\n");
               printf("...................THANK YOU.................\n");
               break;
        case 3:printf("For Mix fried rice please pay 230 rupee only\n");
               printf("...................THANK YOU.................\n");
               break;
        default:printf("WRONG INPUT !!!\n");
    }
}
void M(){
     int c,d,e=0,f,g=0,h,i=0;
    printf("1. VEG MOMO\n");
    printf("2. CHEESE MOMO\n");
    printf("3. CHICKEN MOMO\n");
    printf("PLS ENTER YOUR CHOICE:\n");
    scanf("%d",&c);
    switch(c){
        case 1:printf("PLS ENTER QUANTITY:\n");
               scanf("%d",&d);
               e=10*d;
               printf("Your total bill:%d\n",e);
               break;
        case 2:printf("PLS ENTER QUANTITY:\n");
               scanf("%d",&f);
               g=20*f;
               printf("Your total bill:%d\n",g);
               break;
        case 3:printf("PLS ENTER QUANTITY:\n");
               scanf("%d",&h);
               i=30*h;
               printf("Your total bill:%d\n",i);
               break;
        default:printf("WRONG INPUT !!!");
    }
}
int main(){
    int j;
    printf("------------------MENU------------------\n");
    printf("1.  FRIED RICE \n");
    printf("2.  CHILLI CHICKEN\n");
    printf("3.  PIZZA\n");
    printf("4.  BIRIYANI\n");
    printf("5.  MOMO\n");
    printf("Enter your choice:\n");
    scanf("%d",&j);
    switch(j){
        case 1:FR();
        break;
        case 2:CC();
        break;
        case 3:p();
        break;
        case 4:B();
        break;
        case 5:M();
        break;
        default:printf("WRONG INPUT");
    }
    return 0;
}