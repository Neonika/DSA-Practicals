#include<stdio.h>
#include<conio.h>
#define max 4
int front=-1, rear=-1;
int val, queue[max];
void enqueue();int dequeue();void display(); int peek(void);
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
           if(val!=-1)
           printf("%d element is deleted :", val);
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
    if(rear>= max-1)
       printf("\n queue is full");
    else{
       if (front==-1 && rear==-1)
        {
          front=rear=0;
        }
    else
       rear=rear+1;
       queue[rear]=val;
       printf("\n element is inserted ",val); }}
int dequeue()

{ int val;
   if(front==-1 || front>rear)
    {
        printf("\n queue is empty");
   return -1;}
   else
    {
       val=queue[front];
       front=front+1;
     if(front>rear)
       {
        front=rear=-1;
       }
     return val;
    }
}
void display()
{ int i;
   if(front==-1|| front>rear)
      printf("\n queue is empty");
   else
      {
          for(i=front;i<=rear;i++)
              printf("queue[%d]=%d ",i,queue[i]);
      }
}
