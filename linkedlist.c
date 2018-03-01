#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *next;
}*start=NULL;
void insert()
{
struct node *temp,*ptr;
temp=(struct node *)malloc(sizeof(struct node));
int data,pos,i;
if (temp==NULL)
{
printf("Out of memory\n");
}
printf("Enter the element to be inserted:\n");
scanf("%d",&temp->data);
printf("enter the position:\n");
scanf("%d",&pos);
temp->next=NULL;
if (pos==0)
{
temp->next=start;
start=temp;
}
else
{
ptr=start;
for(i=0;i<pos-1;i++)
{
ptr=ptr->next;
if(ptr==NULL)
{
printf("Position not found\n");
}
}
temp->next=ptr->next;
ptr->next=temp;
}
}
void delete()
{
struct node *temp,*ptr;
int i,pos;
if (start==NULL){
printf("Stack is empty\n");
return;
}
else{
printf("Enter the position to be deleted:\n");
scanf("%d",&pos);
}
if (pos==0)
{
ptr=start;
start=start->next;
printf("The deleted element = %d\t",ptr->data);
free(ptr);
}
else
{
ptr=start;
for(i=0;i<pos;i++)
{
temp=ptr;
ptr=ptr->next;
if(ptr==NULL)
{
printf("Position not found\n");
return;
}
}
temp->next=ptr->next;
printf("The deleted element= %d",ptr->data);
free(ptr);
}
}
void display()
{
struct node *ptr;
if (start==NULL)
{
printf("The list is empty");
return;
}
else
{
ptr=start;
printf("The listed elements are :\n");
while(ptr!=NULL)
{
printf("%d \t",ptr->data);
ptr=ptr->next;
}
}
}
void main()
{
int ch;
while(1)
{
printf("\n1.Insertion\n2.Deletion\n3.Display\n4.Exit\n");
scanf("%d",&ch);
switch(ch)
{
case 1:
insert();
break;
case 2:
delete();
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

