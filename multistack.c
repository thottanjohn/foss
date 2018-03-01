#include<stdio.h>
#define size 20
int stk[size],top1,top2;
void push()
{
int opt,data;
char ch='y';
while(ch=='Y' ||ch=='y')
{
printf("Push Menu:\n");
printf("1.Push into Stack1\n");
printf("2.Push into Stack2\n");
printf("Enter choice:\n");
scanf("%d",&opt);
if(top1==top2-1)
{
printf("Overflow");
return;
}
if(opt==1)
{printf("Enter the element to be pushed\n");
scanf("%d",&data);
top1+=1;
stk[top1]=data;
}
else if(opt==2)
{printf("Enter the element to be pushed\n");
scanf("%d",&data);
top2--;
stk[top2]=data;
}
else
{
printf("Wrong Choice;\n");
printf("Continue push?(y/n):");
scanf("%s",&ch);
}
}
}
void pop()
{
int opt,data;
char ch='y';
while(ch=='Y' ||ch=='y')
{
printf("Pop Menu:\n");
printf("1.Pop from Stack1\n");
printf("2.Pop from Stack2\n");
printf("Enter choice:\n");
scanf("%d",&opt);
if(opt==1)
{
if (top1==-1)
{
printf("Stack underflow\n");
return;
}
printf("Popped element =%d",stk[top1]);
top1-=1;
}
else if(opt==2)
{
if(top2==size)
{
printf("Stack underflow\n");
return;
}
printf("Popped element =%d",stk[top2]);
top2++;
}
else
{
printf("Wrong Choice;\n");
printf("Continue pop?(y/n):");
scanf("%s",&ch);
}
}
}
void display()
{
int opt,data,i;
char ch='y';
while(ch=='Y' ||ch=='y')
{
printf("Display Menu:\n");
printf("1.Display Stack1\n");
printf("2.Display Stack2\n");
printf("Enter choice:\n");
scanf("%d",&opt);
if(opt==1)
{
if (top1==-1)
{
printf("Empty Stack\n");
return;
}
else
{
printf("Stack 1\n");
for(i=top1;i>-1;i--)
{
printf("%d\n",stk[i]);
}
}
}
else if(opt==2)
{
if(top2==size)
{
printf("Empty Stack\n");
return;
}
else
printf("Stack 2\n");
{
for(i=top2;i<size;i++)
{
printf("%d\n",stk[i]);
}
}
}
else
{
printf("Wrong Choice;\n");
printf("Continue display?(y/n):");
scanf("%s",&ch);
}
}
}
void main()
{
top1=-1;
top2=size;
int ch;
while(1)
{
printf("1.push\n2.pop\n3.display\n4.exit\n");
scanf("%d",&ch);
switch(ch)
{
case 1:
push();
break;
case 2:
pop();
break;
case 3:
display();
break;
case 4: 
return;
break;
default:
printf("Invalid choice");
}
}
}
