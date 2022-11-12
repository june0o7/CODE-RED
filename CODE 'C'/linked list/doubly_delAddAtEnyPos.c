#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
    struct node *prev;

} NODE;
struct node *fnode(int data)
{
    struct node *head = (struct node *)malloc(sizeof(NODE));
    head->next = NULL;
    head->data = data;
    head->prev = NULL;
    return head;
}
struct node *addnode(int data, struct node *ptr)
{
    struct node *current = (struct node *)malloc(sizeof(NODE));
    current->data = data;
    current->next = NULL;
    current->prev = ptr;
    ptr->next = current;
    return current;
}
struct node *addAtEnyPos(int data, struct node *head, int p,int m)
{
    struct node *current = (struct node *)malloc(sizeof(NODE));
    current->data = data;
    struct node *ptr = head;
    struct node *ptr2 = ptr->next;
     if (p==1)
        {
            current->prev=NULL;
            current->next=ptr;
            ptr->prev=current;
            return current;
        }
    else if(p==m)
    { 
    
        while (ptr->next!=NULL)
        {
            ptr=ptr->next;
        }
        current->next=NULL;
        current->prev=ptr;
        ptr->next=current;
        return head;
    }    
        
    
    
        
    int i;
    for (i = 1; i < p - 1; i++)
    {
       
        
        ptr = ptr->next;
    }
    current->next = ptr->next;
    ptr2->prev = current;
    current->prev = ptr;
    ptr->next = current;
    return head;
}
/*struct node *deldata(int data,struct node *ptr)
{
   
    struct node *ptr2=ptr->next;
    struct node  *ptr1=ptr->prev;
    if (ptr->data==data)
    {
        struct node *del=ptr;
        ptr=ptr->next;
        free (del);
        return ptr;
    }
     struct node *dell=ptr;
    
    while (ptr->data!=data && ptr->next!=NULL)
    {

        ptr=ptr->next;
    }
    if (ptr->data==data)
    { 
    ptr1->next=ptr2;
        ptr2->prev=ptr1;
        free (ptr);
         return dell;
    }
    
    
}*/
struct node *deldata(int data,struct node *ptr)
{
   
    struct node *ptr1=ptr;
   
    if (ptr->data==data)
    {
        struct node *del=ptr;
        ptr=ptr->next;
        free (del);
        return ptr;
    }
     struct node *dell=NULL;
    
    while (ptr->data!=data && ptr->next!=NULL)
    {
    	dell=ptr;

        ptr=ptr->next;
    }
    if (ptr->data==data)
    { 
    dell->next=ptr->next;
       
        free (ptr);
         return ptr1;
    }
    
    
}
struct node *delAtEnyPos(int p, struct node *ptr)
{

    struct node *hptr = ptr;
    int i;
    for (i = 1; i < p; i++)
    {
        
        ptr = ptr->next;
    }
    struct node *ptr2 = ptr->prev;
    struct node *ptr3 = ptr->next;

    if (ptr->next == NULL)
    {
        ptr2->next = NULL;
        free(ptr);
        
    }
    else if (ptr->next != NULL)
    {
        ptr2->next = ptr3;
        ptr3->prev = ptr2;
        free(ptr);
    }
    return hptr;
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
    struct node *head = NULL;
    int n, m, a,ab, i,k,x,p;
    printf("how meny nodes do you want to enter  = ");
    scanf("%d", &m);
    printf("enter the data no.(1) = ");
    scanf("%d", &n);
    head = fnode(n);
    struct node *ptr = head;

    for (i = 2; i <= m; i++)
    {
        printf("enter the data no.(%d) = ", i);
        scanf("%d", &a);
        ptr = addnode(a, ptr);
    }

    struct node *ptr2 = head;
    struct node *ptr6 = head;
    printf("NULL\t");
    while (ptr2 != NULL)
    {
        printf(" %d\t", ptr2->data);
        ptr2 = ptr2->next;
    }
    printf("NULL");
    while (1)
    {
        printf("\n.......[menu]......\n1) add at eny pos :)\n2) del at eny pos :(\n3) del the data :/\nenter your choice -> ");
        scanf("%d", &a);
        switch (a)
        // {
        // case /* constant-expression */:
        //     /* code */
        //     break;
        
        // default:
        //     break;
        // }
        { 
        case  1 :
        
            
            printf("enter the pos - ");
            scanf("%d", &k);
            printf("enter the data - ");
            scanf("%d", &x);
            ptr6 = addAtEnyPos(x, head, k,m);
            printf("result.....\nNULL\t");

            while (ptr6 != NULL)
            {
                printf(" %d\t", ptr6->data);
                ptr6 = ptr6->next;
            }
            printf("NULL");
            break;
           
        
        case 2 :
        
            
            printf("enter the position you want to delete :- ");
            scanf("%d", &p);
            head = delAtEnyPos(p, head);
            struct node *ptr7 = head;
            printf("result.....\nNULL\t");
            while (ptr7 != NULL)
            {
                printf(" %d\t", ptr7->data);
                ptr7 = ptr7->next;
            }
            printf("NULL");
            break;

            
            
        
         case 3 :
        
             
             printf("enter the number you want to delete :- ");
             scanf("%d",&ab);
             head=deldata(ab,head);
             struct node *ptr8=head;
                         printf("NULL\t");

             while (ptr8 != NULL)
            {
                printf(" %d\t", ptr8->data);
                ptr8 = ptr8->next;
            }
            printf("NULL");
            break;





             default :
            break;
        
    }
     

    }
    return 0;
}