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

/// void disp()
//{

/*  struct node *ptr2 = head;
  while (ptr2!=NULL)
  {
      printf("%d->",ptr2->next);
      ptr2=ptr2->next;

  }*/

//}
int main()
{
    int b, c;
    int choice;
    struct node *head = NULL;
    printf("enter the first node= ");
    scanf("%d", &c);
    head = fnode(c);
    struct node *ptr = head;
    while (1)
    {
        printf("do you want to add a node (y/n)=");
        scanf("%c", &choice);
        if (choice == 'y')
        {
            printf("\nenter the data= ");
            scanf("%d", &b);
            addnode(b, ptr);
        fflush(stdin);
        }
        else
        {
            break;
        }
    }
    struct node *ptr2 = head;
    while (ptr2 != NULL)
    {
        printf("%d\n", ptr2->data);
        ptr2 = ptr2->next;
    }
    return 0;
}
