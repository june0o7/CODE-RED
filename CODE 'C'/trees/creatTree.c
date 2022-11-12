#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* left;
    struct node* right;

}NODE;
struct node* creatree()
{
    struct node *current=(struct node*)malloc(sizeof(NODE));
    int a,n;
    printf("enter the data : ");
    scanf("%d",&a);
    if (a==-1)
    {
        return 0;
    }
    else{
        current->data=a;
        printf(" parent %d data's left child node-->",a);
       // scanf("%d",&a);
        current->left=creatree();
        printf(" parent %d data's right child node-->",a);
       // scanf("%d",&a);
        current->right=creatree();
    }
    
    return current;
}
void preorder(struct node *current)
{
    if (current==NULL)
    {
        return ;
    }
    else
    printf(" %d ",current->data);
    preorder(current->left);
    preorder(current->right);

    
}

void inorder(struct node *current)
{
    if (current==NULL)
    {
        return ;
    }
    else
    inorder(current->left);
    printf(" %d ",current->data);
    inorder(current->right);

    
}

void postorder(struct node *current)
{
    if (current==NULL)
    {
        return ;
    }
    else
    postorder(current->left);
    postorder(current->right);
    printf(" %d ",current->data);

    
}


int main()

{   
    // node creation.....up to h1 :}
    // struct node *root=creatnode(5);
    // struct node *a=creatnode(7);
    // struct node *b=creatnode(10);
    // //linking....h0->h1 :)
    //  root->l=a;
    //  root->r=b;
//  //node creation.......at h2 ;)
    //  struct node *a1=creatnode(8);
    // struct node *a2=creatnode(1);
    // struct node *b1=creatnode(3);
    // //linking.....h1->h2
    // a->l=a1;
    // a->r=a2;
    // b->r=b1;
     // //node creation .......at h3
    // struct node *a3=creatnode(7);
    // struct node *a4=creatnode(2);
    // //linking.........h2->h3
    // a1->l=a3;
    // a2->l=a4;
  
    struct node *root=NULL;
    root = creatree();
    printf("preorder ---> ");
     preorder(root);
    printf("\ninorder ---> ");
    inorder(root);
     printf("\npostorder ---> ");
     postorder(root);
    return 0;
}