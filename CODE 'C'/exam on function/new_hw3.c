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
struct node *addAtAnyPos(struct node *tail,int data ,int p) 
{ 
    struct node *ptr=tail->next; 
    struct node *ptr2=ptr; 
    struct node *ptr3=ptr2->next; 
    struct node *current = (struct node *)malloc(sizeof(struct node )); 
    current ->data =data; 
    int i; 
    if (p==1) 
    { 
        current->next=tail->next; 
        tail->next=current; 
        return tail; 
    }  
     
    for ( i = 1; i < p-1; i++) 
    { 
        ptr2=ptr2->next; 
    } 
    current->next=ptr2->next; 
    ptr2->next=current; 
    return tail; 
} 

// struct node *addatenypos(int data, struct node *ptr) 
// { 
//     struct node *ptr1=ptr; 
//     struct node *current=(struct node *)malloc(sizeof(struct node)); 
//     current->data=data; 
//     int i, p; 
//     while (ptr->data<current->data) 
//     { 
//         ptr=ptr->next; 
//     } 
     
     
//     current->next=ptr->next; 
//     ptr->next =current; 
//     return ptr1; 
 
     
// } 
struct node *abeg(int data, struct node *head)
{
    struct node *current = (struct node *)malloc(sizeof(struct node));
    current->data = data;
    current->next = head;
    head = current;
    return head;
}
void Print (struct node *head) 
{ 
     while (head != NULL)  
    {  
        printf(" %d->",head->data);  
        head=head->next;  
          

          
    }  
            printf("NULL\n");  
}  
  
int main()  
{  
   // struct node *head=NULL; 
    int k=1,m,a,i,x,n;  
    // printf("the singly linked list is .........\n");  
    // head= fnode(2); 
    // struct node *ptr=addnode(13,head); 
    // ptr=addnode(25,ptr); 
    // ptr=addnode(30,ptr); 
     struct node *head=NULL;
   
    printf("add node numbers = ");
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
     Print(head); 
     printf("enter the data you want to add at its right position = ");
     scanf("%d",&x);
         struct node *ptr2=head; 

     while(x>ptr->data)
     {
        ptr=ptr->next;
        k++;
     }
     if (x)

     {
        head=abeg(x,head);
        Print(head);
     }
     else{ 
     
     head=addatenypos(x,head); 
     Print(head); 
     }
    
    return 0;  
  
  
}