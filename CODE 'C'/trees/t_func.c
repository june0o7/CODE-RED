#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* l;
    struct node* r;

}NODE;
struct node* creatnode(int data)
{
    struct node *n=(struct node*)malloc(sizeof(NODE));
    n->data=data;
    n->l=NULL;
    n->r=NULL;
    return n;
}


int main()

{   // node creation.....up to h1 :}
    struct node *root=creatnode(5);
    struct node *a=creatnode(7);
    struct node *b=creatnode(10);
    //linking....h0->h1 :)
     root->l=a;
     root->r=b;

     //node creation.......at h2 ;)
     struct node *a1=creatnode(8);
    struct node *a2=creatnode(1);
    struct node *b1=creatnode(3);
    //linking.....h1->h2
    a->l=a1;
    a->r=a2;
    b->r=b1;
    
    //node creation .......at h3
    struct node *a3=creatnode(7);
    struct node *a4=creatnode(2);
    //linking.........h2->h3
    a1->l=a3;
    a2->l=a4;



    return 0;
}