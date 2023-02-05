#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *next;

} NODE;
 struct node * fnode (int data)
{
    struct node *head=((struct node *)malloc(sizeof(NODE)));
    head->data=data;
    head->next=NULL;
}

struct node * add(struct node *ptr,int data)
{
    struct node *a=((struct node *)malloc(sizeof(NODE)));
    a->data=data;
    while (ptr)
    {
        /* code */
    }
    
    a->next=NULL;
    a=ptr->next;

}
void Print(struct node * ptr )
{
    while (ptr!=NULL)
    {
        /* code */
    
    printf("%d -> ",ptr->data);
    ptr=ptr->next;
    }
}
int main()

{
    int a;
    struct node *head = NULL;
    struct node *ptr = head;
   // printf("enter the f node - ");
    //scanf("%d",&a);
    head=fnode(1);
    ptr=add(head,2);
    Print(head);
    return 0;
}