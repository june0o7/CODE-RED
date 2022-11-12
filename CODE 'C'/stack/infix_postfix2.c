#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <ctype.h>
#include <math.h>
#define MAX 100
int top=-1;
int evaluation ();
char postfix[MAX];


int stack [MAX];
char infix [MAX];
//int top =-1;
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
        printf("\nnow the stack is empty");
    }
    else
    {
        top--;
        return stack[top+1];
    }
    
}
int pr(char x);
void intopo();
// int main()
// {
//     printf("enter the infix expression:- ");
//     gets(infix);
//     printf("\n postfix expression :-  ");
//     intopo();
//     int result=evaluation();
//     printf("\nthe result is = %d",result);
//     return 0;
// }
int main(){
	
	printf("Enter the infix expression:- ");
	gets(infix);
	int k;
	for(k=0;k<strlen(infix);k++){
		printf("%c",infix[k]);
	}
	
	printf("\npostfix expression :- ");
	
	intopo(); 

	for(k=0;k<strlen(postfix);k++){
		printf("%c",postfix[k]);
	}
	printf("\n");
	int result=evaluation();
	
	printf("Result: %d",result);
	
	return 0;

}






void intopo()
{
    int i,j=0;
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
               // printf("%c",next);
                postfix[j++]=next;
            }
            break;

        case '+':    
        case '-':
        case '*':       
        case '/':
        case '^':
        while (!isempty()&& pr(stack[top])>=pr(symbol))
        {
            //printf("%c",pop());
            postfix[j++]=pop();
        }
        push (symbol);
        break;
        default :
        postfix[j++]=symbol;
        //printf("%c",symbol);
        }
    }
         while (!isempty())
    {
        //printf("%c", pop());
        postfix[j++]=pop();
    }
    postfix[j]='\0';
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
        int evaluation()
        {
            int i,x,y;
            char symbol;
            for ( i = 0; i < strlen(postfix); i++)
            {
                symbol=postfix[i];
                if (symbol>='0'&&symbol<='9')
                {
                    push(symbol-'0');

                }
                else
                {
                    x=pop();
                    y=pop();
                    switch (symbol)
                    {
                    case '+':
                        push(y+x);
                        break;
                    case '-':
                        push(y-x);
                        break;
                    case '*':
                        push(y*x);
                        break;
                    case '/' :
                        push(y/x);
                        break;
                    case '^':
                    push(pow(y,x));
                         break;           
                    
                        
                    }
                }
                
            }
            return pop();
            


        }

    
    


