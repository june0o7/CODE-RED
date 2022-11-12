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
void delend(struct node *ptr2)
{
    struct node *ptr = ptr2;
    while (ptr->next != NULL)
    {
        ptr2 = ptr;
        ptr = ptr->next;
    }
    ptr2->next = NULL;
    free(ptr);
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
    printf("\ndo you want to del the last node?(Y=1/N=0)= ");
    scanf("%d", &x);
    if (x == 1)
    {
        
        delend(head);
        struct node *ptr2 = head;
        while (ptr2 != NULL)
        {
            printf(" %d->", ptr2->data);
            ptr2 = ptr2->next;
        }
        printf("NULL\n");
    }
    

    return 0;
}