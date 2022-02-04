#include<stdio.h>
#include<process.h>
int q[5];
int front=-1,rear=-1;


int isFull()
{
    if(rear==4)
    {
        return 1;
    }
    else
        return 0;
}


int isEmpty()
{
    if(front==-1)
    {
       return 1;
    }
    else
       return 0;
}



void enq(int e)
{
   if(isFull()==1)
   {
       printf("Queue is full\n");
   }
   else
   {
       rear=rear+1;
       q[rear]=e;
       if(front==-1)
       {
           front=0;
       }
   }
}


int deq()
{
    int e;
    if(isEmpty()==1)
    {
        printf("Queue is empty\n");
        exit (0);
    }
    else
    {
        e=q[front];
        if(front==rear)
        {
            front=-1;
            rear=-1;
        }
        else
        {
            front=front+1;
        }
    }
    return e;
}
 


void display()
{
    int i;
    if(isEmpty()==1)
    {
       printf("No elements in queue\n");
       exit (0);
    }
    else
    {
        printf("Elements of queue are= ");
      for(i=front;i<=rear;i++)
      {
          printf("%d\n",q[i]);
      }
    }
}
int main()
{
    int i,e;
    while(1)
    {
       printf("Queue operations\n");
       printf("1-for insertion\n");
       printf("2-deletion\n");
       printf("3-for display\n");
        printf("4-for exit\n");
        scanf("%d",&i);
        switch(i)
        {
            case 1:
                  printf("Enter a number\n");
                  scanf("%d",&e);
                  enq(e);
                  break;

            case 2:
                  e=deq();
                  printf("Deleted value is %d\n",e);
                  break;

            case 3:
                 display();
                 break;

            case 4:
                 exit (0);
  
            default :
                
                  printf("Incorrect choice\n");
        }
    }
}
