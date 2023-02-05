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

struct node *abeg(int data, struct node *head)
{
    struct node *current = (struct node *)malloc(sizeof(NODE));
    current->data = data;
    current->next = head;
    head = current;
    return head;
}
void *adend(int data, struct node *ptr)
{
    struct node *current = (struct node *)malloc(sizeof(NODE));
    current->data = data;
    current->next = NULL;
    while (ptr->next != NULL)
    {
        ptr = ptr->next;
    }
    ptr->next = current;
}
void adAtenypos(int data, int p, struct node *ptr)
{
    struct node *current = (struct node *)malloc(sizeof(NODE));
    current->data = data;
    int i;
    for (i = 1; i < p - 1; i++)
    {
        ptr = ptr->next;
    }
    current->next = ptr->next;
    ptr->next = current;
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

    while (1)
    {
        char con;
        int choice, ab, bc, cd;

        printf("do you wish to continue ? (y/n)=");
        scanf("%c", &con);

        if (con == 'y')
        {
            printf("........MENU..........\n1)add node at the beggining\n2)add node at the end\n3)add node at eny position\n4) deleting the head node\n5) deleting the last node\n6) deleting node of a perticular position\n7) delete the number you entered");
            printf("\nenter your choice = ");
            scanf("%d", &choice);
            if (choice == 1)
            {
                printf("enter the data = ");
                scanf("%d", &ab);
                head = abeg(ab, head);
                struct node *newptr = head;
                while (newptr != NULL)
                {
                    printf("%d->", newptr->data);
                    newptr = newptr->next;
                }
                printf("NULL\n");
            }
            else if (choice == 2)
            {
                printf("enter the data = ");
                scanf("%d", &bc);
                adend(bc, head);
                struct node *newptr = head;
                while (newptr != NULL)
                {
                    printf("%d->", newptr->data);
                    newptr = newptr->next;
                }
                printf("NULL\n");
            }
            else if (choice == 3)
            {
                int p;
                printf("enter the position = ");
                scanf("%d", &p);
                printf("enter the data = ");
                scanf("%d", &cd);
                //  void adAtenypos(int data, int p, struct node *ptr)
                adAtenypos(cd, p, head);
                struct node *newptr = head;
                while (newptr->next != NULL)
                {
                    printf("%d->", newptr->data);
                    newptr = newptr->next;
                }
                printf("NULL\n");
            }
            else if (choice == 4)
            {
                printf("do you want to del the first node?(Y=1/N=0)= ");
                scanf("%d", &x);
                if (x == 1)
                {
                    struct node *del = head;
                    head = head->next;
                    free(del);
                    struct node *ptr2 = head;
                    while (ptr2 != NULL)
                    {
                        printf(" %d->", ptr2->data);
                        ptr2 = ptr2->next;
                    }
                }
            }
                else if (choice == 5)
                {
                }
                else if (choice == 6)
                {
                }
                else if (con == n)
                {
                    break;
                }
            }
        }

        return 0;
    }