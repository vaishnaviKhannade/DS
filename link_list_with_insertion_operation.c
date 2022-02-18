#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
struct list{                   //structure declaration 
    int d;
    struct list *next;
};
void display(struct list *p)           //function created for display
{
   
   while(p!=NULL)
   {
       printf("%d \n",p->d);
       p=p->next;
   }
}


int main()
{
    struct list *t=NULL, *start=NULL,*p=NULL, *node=NULL,*r=NULL;
    int n,position,i;
    printf("Enter element\n");
    scanf("%d",&n);
    while(n!=0)
    {
    node=(struct list*)malloc(sizeof(struct list));
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
     printf("Enter a element or for exit enter 0\n");
     scanf("%d",&n);
    }
    printf("for cheching before inserting element\n");
    display(start);
    while(1)
    {
        printf("Insertion operations\n");
        printf("1-for insertion at first position\n");
        printf("2-for insertion at last position\n");
        printf("3-for insertion in between the list\n");
        printf("4-for deletion at first position\n");
        printf("5-for deletion at last position\n");
        printf("6-for deletion any element in between\n");
        printf("Enter 7 for exit\n");
     
        
        printf("Enter your choice\n");                 //For using switch case
        scanf("%d",&n);

        for(i=3;i>=n;i--)
        {
        node=(struct list*)malloc(sizeof(struct list));    //These 4 lines r for creating a new node which we have to insert
        printf("Enter element \n");
        scanf("%d",&node->d);
        node->next=NULL;
        }


        switch(n)
        {
            case 1:
                  node->next=start;            //here this node is the node which u want to insert in first
                  start=node;
                  printf("After insertion\n");
                  display(start);
                  break;

            case 2:
                  r=start;
                  while(r->next!=NULL)
                  {
                      r=r->next;
                  }
                  r->next=node;
                  printf("After insertion\n");
                  display(start);
                  break;

            case 3:
                  printf("Enter the position where you want to insert your node\n");
                  scanf("%d",&position);
                  i=1;
                  r=start;
                  while(i<position-1 && r!=NULL)
                  {
                      i++;
                      r=r->next;
                  }
                  if(r==NULL)
                  {
                      printf("Position not found\n");
                  }
                  else
                  {
                     node->next=r->next;
                     r->next=node;
                  }
                  printf("After insertion\n");
                  display(start);
                  break;
             
            case 4:
                   p=start;
                   printf("Deleted element=%d\n\n\n",p->d);
                   start=p->next;
                   free(p);
                   display(start);
                   break;

            case 5:
                  t=NULL;
                  p=start;
                  while(p->next!=NULL)
                  {
                      t=p;
                      p=p->next;
                  }
                   printf("Deleted element=%d\n\n\n",p->d);
                  t->next=NULL;
                  free(p);
                  display(start);
                  break;

            case 6:
                 printf("Enter place which you have to delete=\n");
                 scanf("%d",&position);
                 i=1;
                 p=start;
                 while(i<=position-1 && p!=NULL)
                 {
                     t=p;                         //t is a pointer which is NULL in the begining & p have start address
                     p=p->next;
                     i++;
                 }
                 if(p==NULL)
                 {
                     printf("Position not found\n");
                 }
                 else
                 {
                  printf("Deleted elementss=%d\n\n\n",p->d);
                  t->next=p->next;
                  free(p);
                  display(start);
                 }
                  break;



            case 7:
                   exit(0);

            default :
                    printf("Wrong choice\n");
        }
    }
}
