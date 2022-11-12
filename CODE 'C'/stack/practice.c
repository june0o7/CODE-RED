#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 100
char stack[MAX];
char infix[MAX];
int top = -1;
int isFull()
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
int isEmpty()
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
void push(char x)
{
    stack[++top] = x;
}
char pop()
{
    if (top == -1)
        return -1;
    else
        return stack[top--];
}

int pr(char x);
void intopo();
int main()
{
    printf("Enter infix expression : ");
    gets(infix);
    intopo();
    return 0;
}
void intopo()
{
    int i;
    char symbol, next;
    for (i = 0; i < strlen(infix); i++)
    {
        symbol = infix[i];
        switch (symbol)
        {
        case '(':
            push(symbol);
            break;

        case ')':
            while ((next = pop()) != '(')
            {
                printf("%c", next);
            }
            break;
        case '+':
        case '-':
        case '/':
        case '*':
        case '^':
            while (!isEmpty() && pr(stack[top]) >= pr(symbol))
            {
                printf("%c", pop());
            }
            push(symbol);
            break;
        default:
            printf("%c", symbol);
        }
    }
    while (!isEmpty())
    {
        printf("%c", pop());
    }
}
int pr(char x)

{
    if (x == '(')
        return 0;
    if (x == '+' || x == '-')
        return 1;
    if (x == '*' || x == '/')
        return 2;
    if (x == '^')
        return 3;

    return 0;
}