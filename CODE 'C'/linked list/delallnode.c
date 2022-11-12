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
    ptr->next=current;
    return current;
}
void deletelist(struct node *head)
{
            struct node *ptr=head;

    while (head!=NULL)
    {

        ptr=head;
        head=head->next;
        free(ptr);



    }
    
}

int main()
{
    struct node *head=NULL;
    int n,m,a,i;
    printf("enter the data no.(1) = ");
    scanf("%d",&n);
    head = fnode ( n );
    struct node *ptr=head;
    printf("add node numbers = ");
    scanf("%d",&m);
    for ( i = 2; i <= m; i++)
    {
        printf("enter the data no.(%d) = ",i);
        scanf("%d",&a);
        ptr=addnode(a,ptr);
    }
    
   // ptr = addnode(3,ptr);
    //ptr = addnode(4,ptr);
    struct node *ptr2 = head;
    while (ptr2 != NULL)
    {
        printf(" %d->",ptr2->data);
        ptr2=ptr2->next;
        
        
    }
            printf("NULL\n");
            int f;
            printf("do you want to delete all the nodes? (y-1/n-0)= ");
            
            scanf("%d",&f);
            if (f == 1)
            {
                /* code */
            
            

            printf(" deleting all the nodes.......\n");

            deletelist(head);
            printf("you have successfully deleted all the nodes.");
              
            }
            

    return 0;


}
