#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct tree
{
    int key;
    struct tree* left;
    struct tree* right;
};
 
 void PreorderDisplay(struct tree*p)
 {
    if(p!=NULL)
    {
        printf("%d ",p->key);
        PreorderDisplay(p->left);
        PreorderDisplay(p->right);
    }
 }

 void inorderDisplay(struct tree *p)
 {
   if(p!=NULL)
   {
       inorderDisplay(p->left);
       printf("%d ",p->key);
       inorderDisplay(p->right);
   }
 }

 void postorderDisplay(struct tree *p)
 {
    if(p!=NULL)
    {
        postorderDisplay(p->left);
        postorderDisplay(p->right);
        printf("%d ",p->key);
    }
 }

 int main()
 {
     int n;
     struct tree *node=NULL,*root=NULL,*p=NULL;
     printf("Enter a element\n");
     scanf("%d",&n);
     while(n!=0)
     {
     node=(struct tree *)malloc(sizeof(struct tree));
     node->key=n;
     node->left=NULL;
     node->right=NULL;
     if(root==NULL)
     {
         root=node;
     }
     else
     {
       p=root;
       while(p!=NULL)
       {
               if(p->key>node->key)
               {
                  if(p->left!=NULL)
                 {
                      p=p->left;
                 }
              else
                 {
                   p->left=node;
                   break;
                 }
               }  
               else
               {
                  if(p->right!=NULL)
                  {
                     p=p->right;
                  }
                  else
                      {
                         p->right=node;
                         break;
                      }
                  }
                 
               }
           }
            printf("enter element or enter 0 for exit\n");
               scanf("%d",&n);
       }

       printf("\nDisplay tree in preorder\n");
       PreorderDisplay(root);
       printf("\nDisplay tree in inorder\n");
       inorderDisplay(root);
       printf("\nDisplay tree in postorder\n");
       postorderDisplay(root);
     }
     
 