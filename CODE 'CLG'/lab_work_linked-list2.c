#include <stdio.h>
#include <stdlib.h>
typedef struct stud

{
    int info;
    struct stud *link;

} node;
node *start = NULL;
void add_node(int value)
{
    node *newptr, *ptr;
    newptr = (node *)malloc(sizeof(node));
    newptr->info = value;
    newptr->link = NULL;
    if (start == NULL)
    {
        start = newptr;
    }
    else
    {
        ptr = start;
        while (ptr->link != NULL)
        {
            ptr = ptr->link;
        }
        ptr->link = newptr;
    }
}

void disp()
{
    node *ptr = start;
    while (ptr)
    {
        printf("%d->", ptr->info);
        ptr = ptr->link;
    }
    printf("NULL");
}

int main()
{
    int value, count = 0;
    char choice;
    while (1)
    {
        printf("do you want to insert(y/n)?");
        scanf("%c", &choice);
        if (choice == 'y')
        {
            printf("\nenter the info : ");
            scanf("%d", &value);
            add_node(value);
            fflush(stdin);
        }
        else
        {
            break;
        }
    }
    printf("\nthe linked list is ");
    disp();
    return 0;
}