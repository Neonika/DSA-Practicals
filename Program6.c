#include<stdio.h>
#include<conio.h>
#define max 4
int front=-1, rear=-1;
int val, queue[max];
void enqueue(int);int dequeue();void display(); int peek(void);
int main()
{
    int ch;

  while(1)
   {
       printf("\n\n *****queue menu****");
       printf("\n 1.insert\n 2.delete \n 3.display\n 4.exit");
       printf("\n enter your choice \n" );
       scanf("%d",&ch);
switch(ch)
{
    case 1: printf("\n enter element: ");
            scanf("%d",&val);
            enqueue(val);
    break;
    case 2:val=dequeue();
           if (val!=0)
           printf("\n the value delated is %d :",val);
    break;
    case 3: display();
    break;
    case 4: exit(0);
    default: printf("\n wrong choice");
}
}
}

void enqueue(int val)
{
   if((rear+1)%max==front)
     {
         printf("\n overflow");
     }
   else
     {
         if(front==-1 && rear==-1)
           {
               front=rear=0;
           }
   else
    {
        rear=(rear+1)%max;
    }
        queue[rear]=val;
        printf("\n %d item is inserted",val);} }
int dequeue()
{ int val;

  if(front==-1&& rear==-1)
    {
        printf("\n queue is empty");
        return -1;
    }
  else
    {
        val=queue[front];
  if(rear==front)
    {
        rear=front=-1;
    }
  else
    {
        front=(front+1)%max;
    }
return val;
}
}
void display()
{ int i;
  if(front==-1 && rear==-1)
     printf("\n queue is empty");
  else
    {
        if(front<=rear)
    {
     for(i=front;i<=rear;i++)
         printf("\t queue[%d]=%d\n ",i,queue[i]);
    }
  else
    {
        for(i=front-1;i<max-1;i++)
            printf("\t queue[%d]=%d\n ",i,queue[i]);
        for(i=0;i<=rear;i++)
            printf("\t queue[%d]=%d\n ",i,queue[i]);
    }
    }
}


