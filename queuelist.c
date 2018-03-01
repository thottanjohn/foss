#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *next;
}*rear=NULL,*front=NULL;
void enqueue(int x)
{
struct node *nptr;
nptr=(struct node *)malloc(sizeof(struct node));
nptr->data=x;
nptr->next=NULL;
if(front == NULL)
{
front=rear=nptr;
}
else
{
rear->next=nptr;
rear=nptr;
}
}
void dque()
{
if (front==NULL)
{
printf("Queue is empty\n");
}
else
{
printf("Deleted queue data = %d\n",front->data);
front=front->next;
}
}
void display()
{
struct node *temp;
temp=front;
if (temp==NULL)
{
printf("Queue is empty\n");
}
else
{
while(temp!=NULL)
{
printf("%d\t",temp->data);
temp=temp->next;
}
printf("\n");
}
}
void main()
{
int ch=0,y;
printf("1.Queue Insertion(enqueue)\n2.Queue deletion(dequeue)\n3.Display Queue\n4.exit\n");
while(1)
{
printf("Enter your choice:\n");
scanf("%d",&ch);
switch(ch)
{
case 1:
	printf("Enter the data\n");
	scanf("%d",&y);
	enqueue(y);
	break;
case 2:
	dque();
	break;
case 3:
	display();
	break;
case 4:	
	return;
default:
	printf("Invalid choice\n");
}
}
}



