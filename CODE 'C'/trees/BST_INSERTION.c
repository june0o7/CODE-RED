#include<stdio.h>
#include<stdlib.h>
struct node 
{
    int data;
    struct node * left;
    struct node *right;
}NODE;
struct node* creatnode(int data)
{
    struct node *n=(struct node*)malloc(sizeof(NODE));
    n->data=data;
    n->left=NULL;
    n->right=NULL;
    return n;
}
/*  
struct node *insert(struct node *node, int data) {
  // Return a new node if the tree is empty
  if (node == NULL) 
  return creatnode(data);

  // Traverse to the right place and insert the node
  if (data < node->data)
    node->left = insert(node->left, data);
  else
    node->right = insert(node->right, data);

  return node;
}

*/
int getmin(struct node *root)
{
    while (root->left!=NULL)
    {
        root=root->left;
    }
    return root->data;
    
}
struct node* delete(int val, struct node *root)
{
    struct node *parent=NULL;
    struct node *current=root;//(struct node*)malloc(sizeof(NODE));

    //root=createnode(val)
    //struct node *child=creatnode(val);
     while (current!=NULL&& current->data!=val )
     {
        parent=current;//for indentify the parent node 

        if (val<current->data)
        {
            current=current->left;
        }
         else if (val>current->data)
         {
            
        current=current->right;
         }
         
       
     }
     //when the value dose not existed in the tree.....
     if (current==NULL)
     {
        printf("the value is not existed in the tree.......\n");
        return root;
     }

     else if (current->left==NULL&&current->right==NULL)//when the deleting valu's node is a leaf node.....
     {
        if (parent->left!=NULL)
        {
            parent->left=NULL;
        }
       else if (parent->right!=NULL)
        {
            parent->right=NULL;
        }
        
        
     }
     else if (current->left!=NULL&&current->right!=NULL)//when the deleting valus node have 2 child node.
     {
        int is=getmin(current->right);
        delete(is,root);
       //delete(root,is);
        current->data=is;
        
     }
     else
     {
        struct node *child=(current->left!=NULL)?current->left:current->right;
        if (current!=root)
        {
            if (parent->left=current)
            {
                parent->left =child;
            }
            else if(parent->right=current)
            {
                parent->right=child;
            }
            else
            {
                root=child;
            }
            return root;
        }
        

     }

     

     
     
}    


struct node* insert(int val, struct node *root)
{
    if (root==NULL)
    { 
    root=creatnode(val);
     return root;   
    }
     if (val<root->data)
    {
        if (root->left==NULL)
        {
            root->left=creatnode(val);
            
        return root->left; 
        }
        insert(val,root->left);
    }
    if (val>root->data)
    {
        if (root->right==NULL)
        {
            root->right=creatnode(val);
            return root->right;
        }
            insert(val,root->right);
        
    }
    
    
    
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

    //int a,i,b,c,r,val,root;
    //struct node *head=NULL;
    //struct node *root=NULL;
    // printf("enter how many nodes do you want to enter :- ");
    // scanf("%d",&a);
    //     printf("enter the root node :-");
    //     scanf("%d",&c);
    //    // head=creatnode(c);
    //     root=creatnode(c);
    // for ( i = 0; i < a; i++)
    // {
    //     printf("enter the  values :- ");
    //     scanf("%d",&b);
    //     val=creatnode(b);
    //     head=insert(val,root);
    //    // root =insert(b,head);
        // }
//      struct node *root = NULL;
//   root = insert( 8,root);
//   root = insert( 3,root);
//   root = insert( 1,root);
//   root = insert( 6,root);
//   root = insert( 7,root);
//   root = insert( 14,root);
//   root = insert( 10,root);
//   root = insert( 4,root);
    
 
int main()

{
    struct node *root=NULL;//
    struct node *head=(struct node*)malloc(sizeof(NODE));
    int a,b,c,d,e,i;
    printf("how many nodes do you want:- ");
    scanf("%d",&a);
    printf("enter the root node value:-");
    scanf("%d",&b);
    root=insert(b,root);
        printf("enter the other values:-->\n");
    for ( i = 1; i < a; i++)
    {
        scanf("%d",&c);
        head=insert(c,root);
    }
    printf("\npreorder-->");
    preorder(root);
    printf("\npostorder-->");
    postorder(root);
    printf("\ninorder-->");
    inorder(root);
    printf("enter the value you want to delete:- ");
    scanf("%d",&d);

    printf("\ndilition in process................\n");
    head=delete(d,root);    
   

    printf("\npreorder-->");
    preorder(root);
    printf("\npostorder-->");
    postorder(root);
    printf("\ninorder-->");
    inorder(root);
    return 0;
}