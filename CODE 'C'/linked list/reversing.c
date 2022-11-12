#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *fnode(int data)
{
    struct node *current = (struct node *)malloc(sizeof(struct node));
    current->data = data;
    current->next = NULL;
    return current;
}

struct node *addnode(int data, struct node *ptr)
{
    struct node *current = (struct node *)malloc(sizeof(struct node));
    current->data = data;
    current->next = NULL;
    ptr->next = current;
    return current;
}
/*struct node * reverse(struct node *head)
{
    struct node *current=head;
    struct node *next=current->next;
    struct node *prev=NULL;
    current->next=NULL;
    while (next!=NULL)

    {
        prev=current;
        current=next;
        next=current->next;
        current->next=prev;
    }
    head=current;
    return head;
    
    

} 
*/
 struct node *reverse(struct node *head)
 {
     struct node *ptr = NULL;
     struct node *ptr2 = NULL;
     while (head != NULL)
     {
         ptr2 = head->next;
         head->next = ptr;
        ptr = head;
         head = ptr2;
     }
     head = ptr;
     return head;
 }
int main()
{
    struct node *head = NULL;
    int n, a, i;
    int m, x;
    printf("enter the data no.(1) = ");
    scanf("%d", &n);
    head = fnode(n);
    struct node *ptr = head;

    while (m)
    {
        printf("\ndo you want to add a node (y=1/n=0)? = ");
        scanf("%d", &m);
        if (m == 1)
        {
            printf("enter the data no = ");
            scanf("%d", &a);
            ptr = addnode(a, ptr);
            struct node *ptr3 = head;
            while (ptr3 != NULL)
            {
                printf(" %d->", ptr3->data);
                ptr3 = ptr3->next;
            }
            printf("NULL\n");
        }
        else if (m!=1)
        {
            
            printf("\nthe reverse linked list\n");
             head=reverse(head);
            struct node *ptr4 = head;
                        printf("NULL->");

            while (ptr4 != NULL)
            { 
                printf(" %d->", ptr4->data);
                ptr4 = ptr4->next;
            }

            break;
        }
    }

    // struct node *ptr2 = head;
    // while (ptr2 != NULL)
    // {
    //     printf(" %d->", ptr2->data);
    //     ptr2 = ptr2->next;
    // }
    // printf("NULL\n");

    return 0;
}