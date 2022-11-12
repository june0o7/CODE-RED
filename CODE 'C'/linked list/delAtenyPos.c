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
void delatenypos(struct node *ptr,int p)
{
    int i;
    struct node *ptr2 = ptr;
    for ( i = 0; i < p-1; i++)
    {
        ptr2=ptr;
        ptr=ptr->next;
    }    
        
    
    if(ptr->next==NULL)
    {
        ptr2->next=NULL;
        free(ptr);

    }
    else if(ptr->next!=NULL)
    {
        ptr2->next=ptr->next;
        free(ptr);
    }
    
    // while (ptr->next != NULL)
    // {
    //     ptr2 = ptr;
    //     ptr = ptr->next;
    // }
    // ptr2->next = NULL;
    // free(ptr);
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
            struct node *ptr2 = head;
            while (ptr2 != NULL)
            {
                printf(" %d->", ptr2->data);
                ptr2 = ptr2->next;
            }
            printf("NULL\n");
        }
        else
            break;
    }

    struct node *ptr2 = head;
    while (ptr2 != NULL)
    {
        printf(" %d->", ptr2->data);
        ptr2 = ptr2->next;
    }
    printf("NULL\n");
    printf("enter the position you want to delete= ");
    scanf("%d", &x);
   
        
        delatenypos(head,x);
        struct node *ptr3 = head;
        while (ptr3 != NULL)
        {
            printf(" %d->", ptr3->data);
            ptr3 = ptr3->next;
        }
        printf("NULL\n");
    
    

    return 0;
}