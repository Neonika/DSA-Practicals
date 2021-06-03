#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <malloc.h>

struct node
{
int data;
struct node *next;
};
struct node *start = NULL;
struct node *create(struct node *);
struct node *display(struct node *);
struct node *insert_beg(struct node *);
struct node *insert_end(struct node *);
struct node *insert_after(struct node *);
struct node *delete_beg(struct node *);
struct node *delete_end(struct node *);
struct node *delete_node(struct node *);

void main()
{
int option;
do
{
printf("\n *****MAIN MENU *****");
printf("\n 1: Create a list");
printf("\n 2: Display the list");
printf("\n 3: Add a node at the beginning");
printf("\n 4: Add a node at the end");
printf("\n 5: Add a node after a given node");
printf("\n 6: Delete a node from the beginning");
printf("\n 7: Delete a node from the end");
printf("\n 8: Delete a given node");
printf("\n Enter your option : ");
scanf("%d", &option);
switch(option)
{
case 1: start = create(start);
printf("\n LINKED LIST CREATED ");
break;
case 2: start = display(start);
break;
case 3: start = insert_beg(start);
break;
case 4: start = insert_end(start);
break;
case 5: start = insert_after(start);
break;
case 6: start = delete_beg(start);
break;
case 7: start = delete_end(start);
break;
case 8: start = delete_node(start);
break;
}
}while(option !=9);
getch();
}
struct node *create(struct node *start)
{
struct node *new_node, *temp;

int num;
printf("\n Enter the data : ");
scanf("%d", &num);
new_node = (struct node*)malloc(sizeof(struct node));
new_node -> data=num;
new_node->next=NULL;
if(start==NULL)
{
start = new_node;
}
else
{
temp=start;
while(temp->next!=NULL)
temp=temp->next;
temp->next = new_node;
new_node->next=NULL;
}
return start;
}
struct node *display(struct node *start)
{
struct node *temp;
temp = start;
while(temp != NULL)
{
printf("\t -> %d", temp -> data);
temp = temp -> next;
}

return start;
}
struct node *insert_beg(struct node *start)
{
struct node *new_node;
int num;
printf("\n Enter the data : ");
scanf("%d", &num);
new_node = (struct node *)malloc(sizeof(struct node));
new_node -> data = num;
new_node -> next = start;
start = new_node;
return start;
}
struct node *insert_end(struct node *start)
{
struct node *temp, *new_node;
int num;
printf("\n Enter the data : ");
scanf("%d", &num);
new_node = (struct node *)malloc(sizeof(struct node));
new_node -> data = num;
new_node -> next = NULL;
temp = start;
while(temp -> next != NULL)
temp = temp -> next;
temp -> next = new_node;
return start;
}

struct node *insert_after(struct node *start)
{
struct node *new_node, *temp, *pretemp;
int num, val;
printf("\n Enter the data : ");
scanf("%d", &num);
printf("\n Enter the value after which the data has to be inserted : ");
scanf("%d", &val);
new_node = (struct node *)malloc(sizeof(struct node));
new_node -> data = num;
temp = start;
pretemp = temp;
while(pretemp -> data != val)
{
pretemp = temp;
temp = temp -> next;
}
pretemp -> next=new_node;
new_node -> next = temp;
return start;
}
struct node *delete_beg(struct node *start)
{
struct node *temp;
temp = start;
start = start -> next;
free(temp);
return start;
}

struct node *delete_end(struct node *start)
{
struct node *temp, *pretemp;
temp = start;
while(temp -> next != NULL)
{
pretemp = temp;
temp = temp -> next;
}
pretemp -> next = NULL;
free(temp);
return start;
}
struct node *delete_node(struct node *start)
{
struct node *temp, *pretemp;
int val;
printf("\n Enter the value of the node which has to be deleted : ");
scanf("%d", &val);
temp = start;
if(temp -> data == val)
{
start = delete_beg(start);
return start;
}
else
while(temp -> data != val)
{
pretemp = temp;
temp = temp -> next;
}
pretemp -> next = temp -> next;
free(temp);
return start;

}
