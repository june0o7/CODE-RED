#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
} NODE;
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
void disp(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("%d", ptr->data);
        ptr = ptr->next;
    }
}
int main()
{
    // struct node *head = NULL;
    // int n, m, a, i;
    // printf("enter the data no.(1) = ");
    // scanf("%d", &n);
    // head = fnode(n);
    // struct node *ptr = head;
    // printf("add node numbers = ");
    // scanf("%d", &m);
    // for (i = 2; i <= m; i++)
    // {
    //     printf("enter the data no.(%d) = ", i);
    //     scanf("%d", &a);
    //     ptr = addnode(a, ptr);
    // }

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
}
