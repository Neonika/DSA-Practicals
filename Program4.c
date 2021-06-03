#include<stdio.h>
#include<ctype.h>
#define MAX 100
int stack[MAX];
int top = -1 ;
void push(int item)
{ if(top >= MAX -1)
     { printf("stack over flow");
       return;
     }
else
   {  top = top + 1 ;
      stack[top]= item;
   }
}

int pop()
{
int item;
if(top <0)
  {
      printf("stack under flow");
  }
else
  { item = stack[top];
    top = top - 1;
return item; } }
void EvalPostfix(char postfix[])
{
int i ;
char ch;
int val;
int op1,op2;
for (i = 0 ; postfix[i] != ')'; i++)
  {
    ch = postfix[i];
if (isdigit(ch))
  {
      /* we saw an operand,push the digit onto stack
      ch - '0' is used for getting digit rather than ASCII code of digit */
      push(ch -'0');
  }
else if (ch == '+' || ch == '-' || ch == '*' || ch == '/')
{
  op2= pop();
  op1= pop();
switch (ch) /* ch for operator */
{
  case '*':
          val = op1 * op2;
  break;
  case '/':
          val = op1/op2;
  break;
  case '+':
          val = op1+op2;
  break;
  case '-':
          val = op1-op2;
  break;
}
/* push the value obtained above onto the stack */
push(val);
}
}
printf( " \n Result of expression evaluation : %d \n", pop()) ;
}
void main()
{
int i ;
char postfix[MAX];
   printf(" Thes operators(*, /, +, -) operand is single digit allowed.\n");
   printf( " \n Enter expression,\n press right parenthesis ')' for end expression : ");
for (i = 0 ; i <= MAX - 1 ; i++)
{
  scanf("%c", &postfix[i]);
  if ( postfix[i] == ')' ) /* is there any way to eliminate this if */
   {
      break;
   }
}
EvalPostfix(postfix);

getch();
}
