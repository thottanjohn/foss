#include<stdio.h>
#include<ctype.h>
#include<math.h>
#define max 100
#define Postfix 100
int stack[max];
int top=-1;
void push(int item)
{
if (top>max-1)
{
printf("Stack Overflow");
return;
}
else
{
top=top+1;
stack[top]=item;
}
}
int pop()
{
int item;
if (top<0)
{
printf("Stack Underflow");
}
else{
item=stack[top];
top=top-1;
return item;
}
}
void evalPostfix(char postfix[])
{
int i,val,a,b;
char ch;
for(i=0;postfix[i]=="/0";i++)
{
ch=postfix[i];
if (isdigit(ch))
{
push(ch-'o');
}
else if(ch=="+" || ch=="-" || ch=="*" || ch=="/" || ch=="^")
{
a=pop();
b=pop();
switch(ch)
{
case '*':
val=b*a;
break;
case '/':
val=b/a;
break;
case '+':
val=b+a;
break;
case '-':
val=b-a;
break;
case '^':
val=pow(b,a);
break;
}
push(val);
}
}
printf("\n Result of expression = %d",pop());
}
void main()
{
int i;
char postfix[Postfix];
printf("\nenter postfix expression \n");
scanf("%s",postfix);
evalPostfix(postfix);
}
