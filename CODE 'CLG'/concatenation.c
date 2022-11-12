#include<stdio.h>
#include<stdlib.h>
typedef struct stud

{
    int info;
    struct stud *link;
    
}node;
node *start=NULL;

void add_node1(int value)
{
    node *newptr , *ptr;
    newptr=(node*) malloc(sizeof (node)) ;
    newptr->info = value;
    newptr->link=NULL;
    if (start==NULL)
    {
        start=newptr;
    }
    else{
        ptr=start;
        while (ptr->link!=NULL)
        {
            ptr=ptr->link;
        }
        ptr->link=newptr;
        
    }
    
}
node *start2=NULL;

void add_node2(int value2)
{
    node *newptr , *ptr;
    newptr=(node*) malloc(sizeof (node)) ;
    newptr->info = value2;
    newptr->link=NULL;
    if (start2==NULL)
    {
        start2=newptr;
    }
    else{
        ptr=start2;
        while (ptr->link!=NULL)
        {
            ptr=ptr->link;
        }
        ptr->link=newptr;
        
    }
    
}
//void concat (int);


void disp1()
{
    node *ptr=start;
    while(ptr)
    {
        printf("%d->",ptr->info);
        ptr=ptr->link;
    }
    printf("NULL");

}
void disp2()
{
    node *ptr=start2;
    while(ptr)
    {
        printf("%d->",ptr->info);
        ptr=ptr->link;
    }
    printf("NULL");

}


int main()
{
    int value,count=0,value2,num;
    char choice1,choice2;
    //printf("1>eliment of the first node\n2>eliment of the second node\nenter the num : ");
    //scanf("%d",&num);
    
    {
     
    
    while (1)   
    {
         printf("do you want to insert(y/n/x)?");
        scanf("%c",&choice1);
        if (choice1=='y')
        {
            printf("\nenter the info of the first node : ");
            scanf("%d",&value);
            add_node1(value);
            fflush(stdin);

        }
        else if (choice1=='n')
        {
            break;
        
            
        }
        else if (choice1=='x')
        { 
         while (1)
    {
         printf("\ndo you want to insert the value of the second node (y/n/x)? ");
        scanf("%c",&choice2);
        if (choice2=='x')
        {
            printf("\nenter the info of the second node : ");
            scanf("%d",&value2);
            add_node2(value2);
            fflush(stdin);

        }
        else
        {
            break;
        }
    }
        }
         printf("\nthe second linked list is ");
         disp2();
    }
       
    }
         printf("\nthe first linked list is ");
         disp1();
    
        
        
   
    
             return 0;

        
            }

    
    
         
        
        
      
   
    

