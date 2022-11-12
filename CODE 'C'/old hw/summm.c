#include<stdio.h>
#include<conio.h>





struct node {
    int data;
    struct node *next;
    struct node *prev;
};
void PrintLinkedList(struct node *p)

{
    while (p!=NULL)
    {
        printf("%d",p->data);
        p=p->next;

    }
    

}
/* Initialize nodes */
struct node *head;
struct node *one = NULL;
struct node *two = NULL;
struct node *three = NULL;
int main()
{ 
/* Allocate memory */
one = (struct node *)malloc(sizeof(struct node));
two = malloc(sizeof(struct node));
three = malloc(sizeof(struct node));

/* Assign data values */
one->data = 1;
two->data = 2;
three->data = 3;

/* Connect nodes */
one->next = two;
one->prev = NULL;

two->next = three;
two->prev = one;

three->next = NULL;
three->prev = two;

struct node *ptr1;
ptr1=head;
PrintLinkedList (ptr1);
return 0;
}