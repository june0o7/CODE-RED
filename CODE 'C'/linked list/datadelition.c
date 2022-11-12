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


// struct node * datadel(struct node * head, int value)
// {
//     struct node *p = head;
//     struct node *q = head->next;
//     while(q->data!=value && q->next!= NULL)
//     {
//         p = p->next;
//         q = q->next;
//     }
    
//     if(q->data == value){
//         p->next = q->next;
//         free(q);
//     }
//     return head;
// }
struct node * datadel(struct node *ptr,int p)
{
     

     struct node *ptr1=ptr;
     struct node *ptr2=ptr->next;
     if (ptr->data==p)
     {
         struct node *del=ptr;
        ptr=ptr->next;
        free(del);
     }
     

     
    
    
    while (ptr2->data!=p && ptr2->next!=NULL)
    { 
            ptr1=ptr1->next;
            ptr2=ptr2->next;
    }

     if (ptr2->data==p)
    {
        
        ptr1->next=ptr2->next;
        
        free(ptr2);

        
    }
    return ptr;
 }








    

void disp(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf(" %d->", ptr->data);
        ptr = ptr->next;
    }
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
    printf("enter the data you want to delete the node which contains it= ");
    scanf("%d", &x);
   
        
        head=datadel(head,x);
        
        struct node *ptr3 = head;
        while (ptr3 != NULL)
        {
            printf(" %d->", ptr3->data);
            ptr3 = ptr3->next;
        }
        printf("NULL\n");
    
    

    return 0;
}