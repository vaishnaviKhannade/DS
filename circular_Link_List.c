#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct list{
    int d;
    struct list *next;
}*node=NULL,*start=NULL,*p=NULL,*q=NULL;
void display()
{
    p=start;
    while(p->next!=start)
    {
    printf("%d\n",p->d);
    p=p->next;
    }
}

int main()
{
   int n;
   printf("Enter element=\n");
   scanf("%d",&n);
   while(n!=0)
   {
       node=(struct list*)malloc(sizeof(struct list));
       node->d=n;
       node->next=start;
       if(start==NULL)
       {
           start=node;
           p=node;
       }
       else
       {    q=p->next; 
           p->next=node;
           p=node;
       }
       printf("Enter 0 for exit or enter value of n\n");
       scanf("%d",&n);

   }
   display(start);
}