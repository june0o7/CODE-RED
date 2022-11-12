#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *r;
    struct node *l;

}NODE;


int main()

{  //memory allocation....
    struct node *root=NULL;
    struct node *root=(struct node *)malloc(sizeof(NODE));
    struct node *a1=(struct node *)malloc(sizeof(NODE));
    struct node *a2=(struct node *)malloc(sizeof(NODE));
    struct node *a3=(struct node *)malloc(sizeof(NODE));
    struct node *a4=(struct node *)malloc(sizeof(NODE));
    struct node *a5=(struct node *)malloc(sizeof(NODE));
    struct node *b1=(struct node *)malloc(sizeof(NODE));
    struct node *b2=(struct node *)malloc(sizeof(NODE));

    // pushing the data...
 
    root->data=5;
    a1->data= 7;
    a2->data= 8;
    a3->data= 1;
    a4->data= 7;
    a5->data= 2;
    b1->data= 10;
    b2->data= 3;

    //linking ....
    root->l=a1;
    root->r=b1;
    
    a1->l=a2;
    a1->r=a3;
    
    b1->l=NULL;
    b1->r=b2;
    

    a2->l=a4;
    a2->r=NULL;

    a3->l=a5;
    a3->r=NULL;
    
    b2->l=NULL;
    b2->r=NULL;

    a4->l=NULL;
    a4->r=NULL;

    a5->l=NULL;
    a5->r=NULL;

    


    return 0;
}