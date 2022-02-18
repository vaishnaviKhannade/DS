#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct list{
    int d;
    struct list *next;
    struct list *previous;
}*start=NULL,*p=NULL,*node=NULL,*end=NULL;
int count=0;
void insertion(int pos)
{
    p=start;
    while(p->next!=count)
    {
        p=p->next;
        count=count+1;
     }
      node->previous=p->next;
      p=p->next;
      node->next=p->previous;
      count=count+2;
}


void deletion()
{


}


void ForwardDisplay()
{
    p=start;
    while(p!=NULL)
    {
        printf("%d\t",p->d);
        p=p->next;
    }
    
}

void BackwardDisplay()
{
    while(end!=NULL)
    {
        printf("%d\t",end->d);
        end=end->previous;
    }
}


int main()
{
    int n,i,position;
    printf("Enter a element \n");
    scanf("%d",&n);
    while(n!=0)
    {
        node=(struct list*)malloc(sizeof(struct list));
        node->d=n;
        count=count+1;
        node->next=NULL;
        node->previous=NULL;
        if(start==NULL)
        {
            start=node;
            p=node;
        }
        else
        {
            p->next=node;
            node->previous=p;
            p=node;
            end=p;
        }
        
        printf("1-for insertion\n");
        printf("2-for deletion\n");
        printf("3-for forward display\n");
        printf("4-for backward display\n");
        printf("5-for exit\n");
        scanf("%d",&n);


        switch(n)
        {
            case 1:
                   
                   printf("Enter a position where u want to insert\n");
                   scanf("%d",&position);








                   insertion(position);
                   display();
                   break;

            case 2: 
                   deletion();
                   break;

            case 3:
                  ForwardDisplay(start);
                  break;

            case 4:
                  BackwardDisplay(end);
                  break;
                
            case 5:exit(0);

            default :
                     printf("Sorry! Wrong choice..");
                     exit(0);
        }
    }
}