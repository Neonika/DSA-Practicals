#include<stdio.h>
#include<conio.h>
#include<string.h>
int i,l,j,top;
char in[30],s[30],p[30];
void push(char item);
char pop();
void main()
{
    printf("Enter Expression::");
    gets(in);
// scanf("%s",in);
    l=strlen(in);
    in[l++]=')';
    printf("in[%d]\n",++l);
    in[l]='\0';
    printf("Length of expression=%d\n",l);
    s[0]='(';
  for(i=0;i<l;i++)
   {
    switch(in[i])
      {
       case '(':
                printf("%c------%s-----%s\n",in[i],s,p);
                push(in[i]);
       break;
       case '^':
                printf("%c------%s-----%s\n",in[i],s,p);
                if(s[top]=='^')
                p[j++]=pop();
                push(in[i]);
       break;
       case '*':
                printf("%c------%s-----%s\n",in[i],s,p);
                while(s[top]=='^'||s[top]=='*'||s[top]=='/')
                    p[j++]=pop();
                    push(in[i]);
       break;
       case '/':
                printf("%c------%s-----%s\n",in[i],s,p);
                while(s[top]=='^'||s[top]=='*'||s[top]=='/')
                    p[j++]=pop();
                    push(in[i]);
       break;
       case '+':
                printf("%c------%s-----%s\n",in[i],s,p);
                while(s[top]=='^'||s[top]=='*'||s[top]=='/'||s[top]=='+'||s[top]=='-')
                       p[j++]=pop();
                       push(in[i]);
       break;
       case '-':
                printf("%c------%s-----%s\n",in[i],s,p);
                while(s[top]=='^'||s[top]=='*'||s[top]=='/'||s[top]=='+'||s[top]=='-')
                p[j++]=pop();
                push(in[i]);
       break;
       case ')':
                printf("%c------%s-----%s\n",in[i],s,p);
// printf("%d---%c is executed",i+1,in[i]);
// printf("value is %s\n",s);
                while(s[top]!='\0 ')
                 {
                    // printf("POP=%c\n",pop());
                    p[j++]=pop();
                 }

       break;
       default:
              printf("%c------%s-----%s\n",in[i],s,p);
              p[j++]=in[i];
               }
}
   printf("Postfix=%s",p);
   getch();
}
char pop()
{
  char a;
  a=s[top];
  top--;
  return a;
}
void push(char item)
{
  top++;
  s[top]=item;
}
