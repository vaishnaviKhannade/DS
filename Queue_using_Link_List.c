#include<stdio.h>
#include<stdlib.h>
struct list{
    int d;
    struct list *next;
}*front=NULL,*rear=NULL,*p=NULL,*t=NULL,*node=NULL;


void display()
{
    p=front;
    printf("The queue elements are\n");
    while(p!=NULL)
    {
        printf("%d\n",p->d);
        p=p->next;
    }
}

void insertion()
    {
     if(front==NULL)
     {
     front=node;
     rear=node;
     }
     else
     {
         rear->next=node;
         rear=node;
     }
     }

void deletion()
{
    t=front;
    printf("Deleted element is=%d\n",front->d);
    front=front->next;
    free(t);
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
              printf("enter your element for queue\n");
              scanf("%d",&n);
              node->d=n;
              node->next=NULL;
              insertion();
              break;

        case 2:
              deletion();
              break;

        case 3:
              display();
              break;

        case 4:
              exit(0);
    }
    
 }
 }