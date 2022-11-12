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

struct node *addatenypos(int data, struct node *ptr) 
{ 
    struct node *ptr1=ptr; 
    struct node *current=(struct node *)malloc(sizeof(struct node)); 
    current->data=data; 
    int i, p; 
    while (ptr->data<current->data-1) 
    { 
        ptr=ptr->next; 
    } 
     
     
    current->next=ptr->next; 
    ptr->next =current; 
    return ptr1; 
 
     
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
    struct node *head=NULL;  
    int n,m,a,i;  
    printf("the singly linked list is .........\n");  
    head= fnode(2); 
    struct node *ptr=addnode(5,head); 
    ptr=addnode(7,ptr); 
    ptr=addnode(10,ptr); 
     Print(head); 
     head=addatenypos(6,head); 
     Print(head); 
    
    
    return 0;  
  
  
}