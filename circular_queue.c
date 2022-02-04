#include<stdio.h>
#include<process.h>

int q[5];
int front=-1;
int rear=-1;

int isFull()
{
    if((front==0 && rear==4)||front==rear+1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isEmpty()
{
    if(front==-1)
    return 1;
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
        if(front==-1)
        {
            rear=0;
            front=0;
        }
        else
        {  
            if(rear==4)
            {
               rear=0;
            }
            else
            { 
               rear=rear+1;
            }
        }
         q[rear]=e;
    }
}

int deq()
{
    int e;
    if(isEmpty()==1)
    {
        printf("Queue is empty\n");
        exit(0);
    }
    else 
    { 
          e=q[front];
        if (front==rear)
        {
            front=-1;
             rear=-1;
        }
        else
        {
            if(front==4)
            {
                front=0;
            }
            else
            {
                front=front+1;
            }
        }
    }
     return e;  
}

 void display()
 {
     int i,j ;
       if(isEmpty()==1)
       {
           printf("Queue is emplty\n");
           exit (0);
       }
       else
       {
         if(front<=rear)
        {  
          for(i=front;i<=rear;i++)
          {
             printf("%d\n",i);
              printf("%d\n",q[i]);
          }
        }
        else
       {
         for(j=front;j<=4;j++)
         {
              printf("%d\n",j);
             printf("%d\n",q[j]);
         }
         for(j=0;j<=rear;j++)
         {
              printf("%d\n",j);
             printf("%d\n",q[j]);
         }
      }
  }
 }

 int main()
{
    int i, n,e;
    while(1)
    {
    printf("Circular queue operations\n");
    printf("Enter your choice\n");
    printf("1-Insertion\n");
    printf("2-for deletion\n");
    printf("3-for display\n");
    printf("4-exit\n");
    scanf("%d",&n);

    switch(n)
     {
        case 1:
               printf("Enter your element=\n");
               scanf("%d",&e);
               enq(e);
               break;
      
        case 2:
              e=deq();
              printf("Deleted value is=%d\n",e);
              break;
    
        case 3:
              display();
              break;
        
        case 4:
              exit(0);

        default :
               printf("Wrong choice\n");
              
     }
     
    }
}