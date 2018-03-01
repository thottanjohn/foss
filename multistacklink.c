#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *next;
}*top=NULL;
void push()
{
int val;
printf("Enter the value:\n");
scanf("%d",&val);
struct node * newnode;
newnode=(struct node *)malloc(sizeof(struct node));
newnode->data=val;
newnode->next=top;
top=newnode;
}
void pop()
{
if (top==NULL)
{
printf("Stack is empty");
}
else
{
struct node *temp=top;
printf("Deleted element=%d\n",temp->data);
top=temp->next;
free(temp);
}
}
void display()
{
if(top==NULL)
{
printf("Stack is empty\n");
}
else
{
printf("Stack:\n");
struct node *temp=top;
while(temp!=NULL)
{
printf("%d\n",temp->data);
temp=temp->next;
}
}
}
void main()
{
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



