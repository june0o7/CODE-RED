#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char st[100],ex[100];
int top=-1,k=0;
int prec(char);
void Push(char,int);
void Pop();
int main(){
    char read[100],ch;
    int i,ln;
    printf("Enter Infix expression : ");
    gets(read);
    ln=strlen(read);
    for(i=0;i<ln;i++)
    {
        ch=read[i];
        if((ch>=48 && ch<=57) || (ch>=97 && ch<=122) || (ch>=65 && ch<=90)){
        ex[k]=ch;
        k+=1;
        }
        else
        Push(ch,prec(ch));
    }
    while(top>=0){
        ex[k]=st[top];
        k+=1;
        top-=1;
    }
    printf("Postfix Expression : %s",ex);
    return 0;
}
int prec(char x){
    if(x=='(')
    return 1;
    else if(x=='*' || x=='/' || x=='%' || x=='^')
    return 3;
    else if(x=='+' || x=='-')
    return 2;
    else if(x==')')
    return -1;
}
void Push(char ch,int n){
    if(top==-1){
        top+=1;
        st[top]=ch;
    }
    else if(n==1){
        top+=1;
        st[top]=ch;
    }
    else if(n==-1){
        while(st[top]!='(')
        Pop();
        top-=1;
    }
    else if(prec(st[top])>=n){
        while(prec(st[top])>=n && top>=0)
        Pop();
        top+=1;
        st[top]=ch;
    }
    else{
        top+=1;
        st[top]=ch;
    }
}
void Pop(){
    ex[k]=st[top];
    k+=1;
    top-=1;
}