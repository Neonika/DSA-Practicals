#include<stdio.h>
#include<conio.h>
#include<malloc.h>
struct node
{
int data;
struct node *next;
};
struct node *start=NULL;
void main()
{
char ch;
struct node *new_node, *current;
do
{
new_node=(struct node *)malloc(sizeof(struct node));
printf("\nEnter data: ");
scanf("%d",&new_node->data);
new_node->next=NULL;
if(start==NULL)
{
start=new_node;
current=new_node;
}
else
{
current->next=new_node;
current=new_node;
}
printf("\nWant to insert more? ");
ch=getche();
}while (ch!='n');
printf("\n Link List is :");
while(start!=NULL)
{ printf("%d -->",start->data);
start=start->next;
}
printf("NULL");
getch();
}
