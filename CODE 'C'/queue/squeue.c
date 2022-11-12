#include<stdio.h>
#include<stdlib.h>

#define MAX 5
int front=-1;
int rear=-1;
int queue[MAX];
int IsFull()
{
    if (rear==MAX-1)
    {    
        return 1;
    }
    else
    { 
    return 0;
    }
}
 int IsEmpty()
{
   if(front==-1 && rear==-1)
   {
    return 1;
   }
   else
   { 
   return 0;
   }
}
void Enqueue(int x)
{
    if (IsFull())
    {
        printf(" the queue is full ");
    }
    else if (IsEmpty())
    {
        front++;
        rear++;
        queue[rear]=x;
    }
    else
    {
        rear++;
        queue[rear]=x;

    }
    
    
} 
void Dequeue()
{
    if (IsEmpty())
    {
        printf("the queue is empty");
    }
    else if (front==rear)
    {
        front=-1;
        rear=-1;
    }else
    {
        front++;

    }
    
    
}
void Print()
{
    int i;
     for ( i = front; i <= rear; i++)
    {
        printf("%d\t",queue[i]);
    }
}
int main()
{
    int i,a;
    while (1)
    {
        /* code */
    int b,d;
    printf("\n...menu...\n1.enq\t2.deq\t3.exit\nenter your choice:-");
    scanf("%d",&d);
    switch (d)
    {
    case 1/* constant-expression */:
        /* code */
       
    
    printf("enter how many numbers do you want to add :-  ");
    scanf("%d",&b);
    for ( i = 0; i < b; i++)
    {
        scanf("%d",&a);
        Enqueue(a);
    }
    Print();
     break;

    case 2:
    printf("deq......the first element:-");
    Dequeue();
    Print();
    break;
    case 3:
    exit(0);


    
    default:
    printf("error...");
    exit(0);
        break;
    }
    }
    
}