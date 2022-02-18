#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int q[5],e;
int front=-1;
int rear=-1;
int isFull()   //fuction to check if queue is full
{
    if (front==0 && rear==4)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isEmpty()          // function for checking whether queue is empty or not
{
    if(front==-1 && rear ==-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void neq(int e)    //function for inserting element in queue
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

int deq()      //function for deleting element from queue
{
    int n;
    if(isEmpty()==1)
    {
        printf("queue is empty\n");
        return ;
    }
    else
    {
        if(front==rear)
        {
            e=q[front];
            front=-1;
            rear=-1;
        }
        else
        { 
            printf(" Enter 1 for deleting from front or enter 2 deleting from last\n");
            scanf("%d",&n);
            if(n==2)
            {
            e=q[rear];
            rear=rear-1;
            }
            else
            {
             e=q[front];
             front=front+1;
            }
        }
    }
    return e;
}

void display()                //function for diplaying queue
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
                  neq(e);
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