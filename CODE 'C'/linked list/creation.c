#include<stdio.h>
#include<stdlib.h>

struct node 
{ 
    int data ;
    struct node *next;
}NODE;
struct node *abeg(int data, struct node *head)
{
    struct node *current = (struct node *)malloc(sizeof(NODE));
    current->data = data;
    current->next = head;
    return head;
}

int main()
{
    int a;
    struct node *head;
    struct node *s;
    struct node *t;
    struct node *f;

    head = (struct node *)malloc(sizeof(struct node));
    s=(struct node *)malloc(sizeof(struct node));

    t=(struct node *)malloc(sizeof(struct node));

    f=(struct node *)malloc(sizeof(struct node));
    
    struct node *ptr=head;
    
    
    head -> data = 1;
    head -> next = s;

    s->data = 2;
    s->next = t;

    t->data=3;
    t->next=f;

    f->data=4;
    f->next=NULL;

    while (ptr!=NULL)
    {
        printf("%d->",ptr->data);
        ptr=ptr->next;
    }
    printf("enter the data = ");
    scanf("%d",&a);
    head=abeg(a,head);
    while (ptr!=NULL)
    {
        printf("%d->",ptr->data);
        ptr=ptr->next;
    }

    
}