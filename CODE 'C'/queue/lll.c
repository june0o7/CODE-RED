#include<stdio.h>
#include<stdlib.h>
#define MAX 5
int queue[MAX];
int front=-1;
int rear=-1;

int isfull(){
    if((rear+1)%MAX==front){
        return 1;   
    }else{return 0;}
}

int isempty(){
    if(rear==-1 && front==-1){
        return 1;
    }else{return 0;}
}

void enqueue(int n){
    if(isfull()){
        printf("\nQueue is overflow.");
        }else if(isempty()){
            front=rear=0;
            queue[rear]=n;
        }else{
            rear++;
            queue[rear]=n;
        }
}

void dequeue(){
    if(isempty()){
        printf("\nQueue is underflow.");
    }else if(front==rear){
        front=rear=-1;
    }else{front++;
    }
}

void Print(){
    int i;
    printf("\n");
    for(i=front;i<=rear;i++){
        printf(" %d ",queue[i]);
    }
}

int main(){
    while(1){
    int a,m;
    printf("\n********MENU********");
    printf("\n 1.add elements\n 2.del elements\n 3.print queue\n 4.Exit\n...=");
    scanf("%d",&a);
    switch(a){
        case 1: printf("Enter the number= ");
        scanf("%d",&m);
        enqueue(m);
        break;

        case 2: dequeue();
        break;

        case 3: Print();
        break;
        case 4 : exit(0);
        break;
        default : printf("Wrong input");
    }
    }
    return 0;
}