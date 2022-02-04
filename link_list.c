#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<process.h>
int q[5],e;
//structure declaration
struct data{
    int d;
    struct data *next;
};
int main()
{ 
    int n;
   struct data *p,*node,*start;      //structure defination i.eallocation of memory
   p=NULL;
   node=NULL;
   start=NULL;
   printf("Enter element\n");
   scanf("%d",&n);
   while(n!=0)
   {
       node=(struct data*)malloc(sizeof(struct data));
       node->d=n;
       node->next=NULL;
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
       printf("Enter element or enter 0 for stop \n");
       scanf("%d",&n);
   } 
   printf("Displaying link list \n");
   p=start;
   while(p!=NULL)
   {
       printf("%d  ",p->d);
       p=p->next;
   }
}

