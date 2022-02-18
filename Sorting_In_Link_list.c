#include<stdio.h>
#include<stdlib.h>
struct list
{
    int d;
    struct list *next;
}*node=NULL,*start=NULL,*p=NULL,*q=NULL,*t=NULL;


void sort()
{
    int temp;
  t=start;
  while(t!=NULL)
  {
      q=t->next;
      while(q!=NULL)
      {
          if(t->d>q->d)
          {
              temp=t->d;
              t->d=q->d;
              q->d=temp;
          }
          q=q->next;
      }
     t=t->next;
  }
  display();
}

void insert()
{
    if(start==NULL)
    {
        start=node;
        p=node;
    }
    else
    {
        p->next=node;
        p=node;
    }
}

void  display()
{
     t=start;
     printf("Element in link list are\n");
     while(t!=NULL)
     {
       printf("%d\n",t->d);
       t=t->next;
     }
}

int main()
{
    int n,c;
    while(1)
    {
    node=(struct list*)malloc(sizeof(struct list));

    printf("Enter 1-for insertion\n");
    printf("Enter 2-for displaying\n");
    printf("Enter 3-for sorting\n");
    printf("Enter 4 fro exit\n");
    printf("Enter your choice=\n");
    scanf("%d",&c);
    switch(c)
     {
         case 1:
               printf("Enter element\n");
               scanf("%d",&n);
               node->d=n;
               node->next=NULL;
               insert();
               break;

        case 2:
              display();
              break;
    
        case 3:
              sort();
              break;

        case 4: 
              exit(0);
     }
    }
}


