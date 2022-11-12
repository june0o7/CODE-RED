#include<stdio.h>
#include<stdlib.h>

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
// {
//     int i,n;
//    printf(   " how meny nodes do you want to creat");
//    scanf("%d",&n);
//    for(i=1;i<=n;i++)
//    {
//     printf("enter the data no.(%d) = ",i);
//    }
// }
{
    struct node *head=NULL;
    int n,m,a,i;
    printf("how meny noes do you want to enter  = ");
    scanf("%d",&m);
    printf("enter the data no.(1) = ");
    scanf("%d",&n);
    head = fnode ( n );
    struct node *ptr=head;
    
    for ( i = 2; i <= m; i++)
    {
        printf("enter the data no.(%d) = ",i);
        scanf("%d",&a);
        ptr=addnode(a,ptr);
    }
    
   
    struct node *ptr2 = head;
    printf("NULL\t");
    while (ptr2 != NULL)
    {
        printf(" %d\t",ptr2->data);
        ptr2=ptr2->next;
        
        
    }
            printf("NULL");


    return 0;


}