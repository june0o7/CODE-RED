#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 100 
char stack [MAX];
char infix [MAX];
int top =-1;
int isfull()
{
    if (top == MAX - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int isempty()
{
    if (top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void push(int x)
{
    if(isfull())
    {
        printf("the stack is full");

    } 
    else
    {
      // top++;
       stack[++top]=x;
    }
}
int pop()
{
    if (isempty())
    {
        printf("the stack is empty");
    }
    else
    {
        top--;
        return stack[top+1];
    }
    
}
int pr(char x);
void intopo();
int main()
{
    printf("enter the infix expression:- ");
    gets(infix);
    intopo();
    return 0;
}
void intopo()
{
    int i;
    char symbol,next;
    for ( i = 0; i < strlen(infix); i++)
    {
        symbol=infix[i];
        switch (symbol)
        {
        case  '('  :
            push(symbol);

            break;
        case ')' :
            while ((next=pop())!='(')
            {
                printf("%c",next);
            }
            break;

        case '+':    
        case '-':
        case '*':       
        case '/':
        case '^':
        while (!isempty()&& pr(stack[top])>=pr(symbol))
        {
            printf("%c",pop());
        }
        push (symbol);
        break;
        default :
        printf("%c",symbol);
        }
    }
         while (!isempty())
    {
        printf("%c", pop());
    }
}
    
        int pr(char x)
        { 
            if (x=='(')
            
                return 0;
            
            if (x=='+'||x=='-')
            
                return 1;
            
            if (x=='/'||x=='*')
            
                return 2;
            
            if (x=='^')
            
                return 3;
            
            return 0;
            
        }

    
    
