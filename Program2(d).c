#include <stdio.h>
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
struct node *delete_beg(struct node *);
struct node *delete_end(struct node *);
int main()
{
int option;
do
{
printf("\n\n *****MAIN MENU *****");
printf("\n 1: Create a list");
printf("\n 2: Display the list");
printf("\n 3: Add a node at the beginning");
printf("\n 4: Add a node at the end");
printf("\n 5: Delete a node from the beginning");
printf("\n 6: Delete a node from the end");
printf("\n 7: EXIT");
printf("\n\n Enter your option : ");
scanf("%d", &option);
switch(option)
{
case 1: start = create(start);
printf("\n CIRCULAR LINKED LIST CREATED");
break;
case 2: start = display(start);
break;
case 3: start = insert_beg(start);
break;
case 4: start = insert_end(start);
break;
case 5: start = delete_beg(start);
break;
case 6: start = delete_end(start);
break;
}
}while(option !=7);
getch();
return 0;
}
struct node *create (struct node *start)
{
struct node *new_node, *temp;
int num;
printf("\n Enter value to end");
printf("\n Enter the data : ");
scanf("%d", &num);
do{
new_node = (struct node*)malloc(sizeof(struct node));
new_node -> data = num;
if(start == NULL)
{
new_node -> next = new_node;
start = new_node;
}
else
{ temp = start;
while(temp -> next != start)
temp = temp -> next;
temp -> next = new_node;
new_node -> next = start;
}
printf("\n Enter the data : ");
scanf("%d", &num);
} while(num!=-1);
return start;
}
struct node *display(struct node *start)
{
struct node *temp;
temp=start;
if (start == NULL) {
printf("\n List is empty");
return(start); }
else {
while(temp-> next != start)

{
printf(" %d -->", temp-> data);

temp = temp-> next;

}
printf(" %d-->", temp-> data);

return start; }}
struct node *insert_beg(struct node *start) {
struct node *new_node, *temp;
int num;
printf("\n Enter the data : ");
scanf("%d", &num);
new_node = (struct node *)malloc(sizeof(struct node));
new_node-> data = num;
if (start == NULL) {
printf("\n List is empty");
return(start); }
else
{
temp = start;
while(temp-> next != start)
temp = temp-> next;
temp-> next = new_node;
new_node-> next = start;
start = new_node;
printf("\n first node is %d",new_node->data);

return start;
} }
struct node *insert_end(struct node *start) {
struct node *temp, *new_node;
int num;
printf("\n Enter the data : ");
scanf("%d", &num);
new_node = (struct node *)malloc(sizeof(struct node));
new_node -> data = num;
if (start == NULL)
{
printf("\n List is empty");
return(start);
}
else
{
temp = start;
while(temp -> next != start)
temp = temp -> next;
temp -> next = new_node;
new_node -> next = start;
printf("\n last node is %d",new_node->data);
return start;
}}
struct node *delete_beg(struct node *start)
{
struct node *temp;
temp = start;
if (start == NULL)
{
printf("\n List is empty");
return(start);
}
if(start==start->next)
{
temp = start;
start=NULL;
free(temp);
return(start);
}
else
{
while(temp -> next != start)
temp = temp -> next;
temp -> next = start -> next;
free(start);
start = temp -> next;
return start;}}
struct node *delete_end(struct node *start)
{
struct node *temp, *pretemp;
temp = start;
if (start == NULL)
{
printf("\n List is empty");
return(start);
}
if(start==start->next)
{
temp = start;
start=NULL;
free(temp);
return(start); }
else
{
while(temp -> next != start)
{
pretemp = temp;
temp = temp -> next;
}
pretemp -> next = temp -> next;
free(temp);
return start;}

}
