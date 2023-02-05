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
void disp(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf(" %d->",ptr->data);
        ptr = ptr->next;
    }
}
void sum(struct node *ptr1,struct node *ptr2)
{
    struct node *head3=NULL;
    int s;
    while (ptr1 != NULL && ptr2 != NULL)
    {
        s=(ptr1->data+ptr2->data);
        //printf(" %d->",s);
        head3= fnode(s);
        struct node *ptr=head3;
        ptr=addnode(s,ptr);
        ptr1 = ptr1->next;
        ptr2 = ptr2->next;
    // struct node *current = (struct node *)malloc(sizeof(struct node));
    // current->data = s;
    // current->next = NULL;
    // return current;
    
    }
    disp(head3);
    
     
}

int main()
{
    struct node *head=NULL;
    int n,m,a,i;
    printf("how many nodes do you want in both linked list: ");
    scanf("%d",&m);
    printf("for the 1st linked list >>enter the data no.(1) = ");
    scanf("%d",&n);
    head = fnode ( n );
    struct node *ptr=head;
    
    for ( i = 2; i <= m; i++)
    {
        printf("enter the data no.(%d) = ",i);
        scanf("%d",&a);
        ptr=addnode(a,ptr);
    }
    struct node *head2=NULL;
    int n2,m2,a2,i2;
    // printf("add node numbers to the second list = ");
    // scanf("%d",&m2);
    printf("for the 2nd linked list >>enter the data no.(1) = ");
    scanf("%d",&n2);
    head2 = fnode ( n2 );
    struct node *ptr2=head2;
    
    for ( i2 = 2; i2 <= m; i2++)
    {
        printf("enter the data no.(%d) = ",i2);
        scanf("%d",&a2);
        ptr2=addnode(a2,ptr2);
    }
    printf("linked list 1: ");
    disp(head);
    printf("\nlinked list 2: ");
    disp(head2);
    int r,i3;
     struct node *head3=NULL;
     struct node *ptr3=head3;
    printf("so the sum is : ");
    sum(head,head2);
    // for ( i3 = 2; i3 <= m; i2++)
    // {
        
        
    //     ptr3=addnode(r,ptr3);
    // }
    
    // printf("\nlinked list 3: ");
    // disp(head3);
  


    return 0;


}
