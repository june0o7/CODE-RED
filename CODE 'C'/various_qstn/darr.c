#include<stdio.h>
/*The mathematical formula to calculate EMI is: EMI = P × r × (1 + r)n/((1 + r)n - 1) where 
P= Loan amount, r= interest rate, n=tenure in number of months.*/
int EMI(int loan,int month){
    int sum=0,interest=10;
    sum=loan*interest*(1+interest)*month/((1+interest)*month-1);
    return sum;
}
int main(){
    int a,c;
    printf("Enter your loan amount:");
    scanf("%d",&a);
    printf("Enter num of months:");
    scanf("%d",&c);
    int calculation=EMI(a,c);
    printf("YOUR EMI RATE :%d",calculation);
    return 0;
}

