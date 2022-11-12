#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
    struct node *prev;

}NODE;
struct node *fnode(int data)
{
    struct node *head=(struct node *)malloc(sizeof(NODE));
    head->next=NULL;
    head->data=data;
    head->prev=NULL;
    return head;
}
struct node *addnode(int data , struct node *ptr)
{
    struct node *current=(struct node *)malloc(sizeof(NODE));
    current->data=data;
    current->next=NULL;
    current->prev=ptr;
    ptr->next=current;
    return current;

}


int main()
{
    int a,i;
    printf("enter the size of array = ");
    scanf("%d", & a);
        int arr[a];

    
    for ( i = 1; i <= a; i++)
    {
        printf("enter the data no %d = ",i);
        scanf("%d",&arr[i]);
    }
    //struct node *ptr=arr[1];
    struct node *head=NULL;
        head=fnode(arr[0]);
        struct node *ptr=head;
    printf("the array is -> ");
    for ( i = 1; i < a; i++)
    {
        printf("%d\t",arr[i]);
      
        ptr=addnode(arr[i],ptr);
        
    }

    struct node *p=head;

    while(p!=NULL){

        printf("%d", p->data);
        p=p->next;
    }
    
    
    
    
    
    return 0;
}