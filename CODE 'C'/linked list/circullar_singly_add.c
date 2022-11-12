#include <stdio.h> 
#include <stdlib.h> 
 
struct node  
{ 
    int data; 
    struct node *next; 
}NODE; 
struct node *fnoad(int data) 
{ 
    struct node *current=(struct node *)malloc(sizeof(NODE)); 
    current->data=data; 
    current->next=current; 
    return current; 
} 
struct node *addnode(struct node *tail,int data) 
{ 
    struct node *current=(struct node *)malloc(sizeof(NODE)); 
    current->data=data; 
    current->next=tail->next; 
    tail->next=current; 
    tail=current; 
    return tail; 
 
} 
struct node *addbeg(struct node *tail,int data) 
{ 
    struct node *current=(struct node *)malloc(sizeof(NODE)); 
    current->data=data; 
    current->next=tail->next; 
    tail->next=current; 
    return tail; 
     
} 
struct node *addAtAnyPos(struct node *tail,int data ,int p) 
{ 
    struct node *ptr=tail->next; 
    struct node *ptr2=ptr; 
    struct node *ptr3=ptr2->next; 
    struct node *current = (struct node *)malloc(sizeof(NODE)); 
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
// struct node *delfnode(struct node *tail) 
// { 
//     struct node *ptr=tail->next; 
//     free(ptr); 
//     return tail; 
// } 
// struct node *DelAtEnyPos(struct node *tail,int p) 
// { 
//     struct node *ptr=tail->next; 
//     struct node *ptr2=ptr->next; 
//     struct node *ptr3=ptr2->next; 
//     int i; 
//     while (ptr2->data!=p ) 
//     { 
//         ptr=ptr->next; 
//     } 
     
//     ptr->next=ptr2->next; 
//     free(ptr2); 
//     return tail; 
     
// } 
void Print(struct node *tail) 
{ 
    struct node *ptr=tail->next; 
 
    do 
    { 
        printf("%d\t",ptr->data); 
        ptr=ptr->next; 
             
    } while (ptr!=tail->next); 
     
} 
 
int  main() 
{ 
    int a,c,b,d,i,j,k,l; 
    printf("enter how meny nodes do you want to add = "); 
    scanf("%d",&a); 
    printf("data no 1 = "); 
    scanf("%d",&b); 
    struct node *tail=fnoad(b); 
    for ( i = 2; i <= a; i++) 
    { 
        printf(" data no %d = ",i); 
        scanf("%d",&c); 
        tail=addnode(tail,c); 
    } 
    Print(tail); 
 
    
    printf("\nenter the data of a biggining node = "); 
    scanf("%d",&d); 
    tail=addbeg(tail,d); 
    Print(tail); 
 
 
 
    printf("\nenter the pos= "); 
    scanf("%d",&j); 
    printf("\nenter the data= "); 
    scanf("%d",&k); 
    tail=addAtAnyPos(tail,k,j); 
    Print(tail); 
 
     
 
    // printf(" \n.......del at eny position - " ); 
    // scanf("%d",&l); 
    // tail=DelAtEnyPos(tail,l); 
    // Print(tail); 
 
 
    return 0; 
 
 
     
 
}