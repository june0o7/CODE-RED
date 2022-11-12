#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

#define MAX 100

int stack[MAX];
char infix[MAX];
char postfix[MAX];

int top=-1;

int isFull(){
	if(top==MAX-1){
		return 1;
	}else{
		return 0;
	}
}
int isEmpty(){
	if(top==-1){
		return 1;
	}else{
		return 0;
	}
}
void push(char x)
{
    stack[++top] = x;
}
char pop()
{
    if(top == -1)
        return -1;
    else
        return stack[top--];
}

int pr(char x)
	
{
    if(x == '(')
        return 0;
    if(x == '+' || x == '-')
        return 1;
    if(x == '*' || x == '/')
        return 2;
    if(x=='^')
	 return 3;
	 
    return 0;
}

void inToPost(){
	char symbol, next;
	int i,j=0;
	for(i=0; i<strlen(infix);i++){
	symbol=infix[i]; 
	
	switch(symbol){
		
		case '(': 
			push(symbol);
		break;
		
		case ')':
				
				while((next=pop())!='('){
					postfix[j++]=next;
				}
				break;
				
		case '+':
		case '-':
		case '*':
		case '/':
		case '^':
			    while(!isEmpty() && pr(stack[top])>=pr(symbol)){
			    	postfix[j++]=pop();
			    
				}
				push(symbol);
				break;
		
		default: postfix[j++]=symbol; 
			
			
		
	}
	
	}
	
	while(!isEmpty()){
		postfix[j++]=pop();
		
	}
	postfix[j]='\0';
}


int post_evaluation(){
	int i,a,b;
	char symbol;
	for(i=0; i<strlen(postfix); i++){
	
	symbol=postfix[i];
	
	if(isdigit(symbol)){
		
		push(symbol-'0');
	}else{
		 a=pop();
		 b=pop();
		 
		 switch(symbol){
		 	case '+': push(b+a);
		 		break;
		 	case '-': push(b-a);
		 		break;
		 	case '*': push(b*a);
		 		break;	
			case '/': push(b/a);
		 		break;	
			case '^': push(pow(b,a));
		 		break;
		 	
		 	
		 }
	}
	
	
	
	}
	
	return pop();
	
}



int main(){
	
	printf("Enter the prefix expression");
	gets(infix);
	int k;
	for(k=0;k<strlen(infix);k++){
		printf("%c",infix[k]);
	}
	
	printf("\n");
	
	inToPost(); 

	for(k=0;k<strlen(postfix);k++){
		printf("%c",postfix[k]);
	}
	printf("\n");
	int result=post_evaluation();
	
	printf("Result: %d",result);
	
	return 0;

}