#include<stdio.h>
#include<stdlib.h>
struct list
{
    int d;
    struct list *next;
}*top=NULL,*node=NULL,*t=NULL,*p=NULL;

void display()
{
    printf("ELements in stack\n");
    t=top;
   while(t!=NULL) 
     {
       printf("%d\n",t->d);
       t=t->next;
   }
}


void push()
{
    if(top==NULL)
    {
        top=node;
        p=node;
    }
    else
    {
       node->next=top;
       top=node;
    }

}


void pop()
{
      p=top;
      top=p->next;
      printf("Deleted element is=%d\n",p->d);
      free(p);
}


int main()
{
    int n,c;
    while(1)
    {
    node=(struct list*)malloc(sizeof(struct list));
    printf("Enter your choice=");
    scanf("%d",&c);

    switch(c)
    {
          case 1:
                printf("Enter your element in stack=");
                scanf("%d",&n);
                node->d=n;
                node->next=NULL;
                push();
                break;

          case 2:
               pop();
               break;

          case 3:
               display();
               break;

          case 4:
                exit(0);
             
    }
    
}
}
 