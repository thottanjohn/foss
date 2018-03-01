#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
struct node{
int data;
struct node *next;
}*start1=NULL,*start2=NULL;
typedef struct node Node ;
void insert1()
{
Node *nptr;
char ch='y';
printf("Enter the elements:\n");
while (ch=='y' || ch=='Y')
{
nptr=(Node *)malloc(sizeof(Node));
scanf("%d",&nptr->data);
nptr->next==NULL;
nptr->next=start1;
start1=nptr;
printf("Do you want to continue:\n");
scanf(" %c",&ch);
}
}
void insert2()
{
Node *nptr2;
char ch='y';
printf("Enter the elements:\n");
while (ch=='y' || ch=='Y')
{
nptr2=(Node *)malloc(sizeof(Node));
scanf("%d",&nptr2->data);
nptr2->next==NULL;
nptr2->next=start2;
start2=nptr2;
printf("Do you want to continue:\n");
scanf(" %c",&ch);
}
}
void display()
{
Node *ptr1=start1;
while(ptr1!=NULL)
{
printf("%d\t",ptr1->data);
ptr1=ptr1->next;
}
}
void mergelist()
{
start1->next=start2;
Node *ptr1=start1;
while(ptr1!=NULL)
{
printf("%d\t",ptr1->data);
ptr1=ptr1->next;
}
printf("\n");
}
void Sort(Node *start1)
{
    int swapped, i;
    Node *ptr1;
    Node *lptr=NULL;
    /* Checking for empty list */
    if (ptr1 == NULL)
        return;
 
    do
    {
        swapped = 0;
        ptr1 = start1;
 
        while (ptr1->next != lptr)
        {
            if (ptr1->data > ptr1->next->data)
            { 
                swap(ptr1, ptr1->next);
                swapped = 1;
            }
            ptr1 = ptr1->next;
        }
        lptr = ptr1;
    }
    while (swapped);
}
void swap(Node *a,Node *b)
{
    int temp = a->data;
    a->data = b->data;
    b->data = temp;
}
void main()
{
printf("Insertion of elements in to list 1:\n");
insert1();
printf("Insertion of elements in to list 2:\n");
insert2();
display();
mergelist();
Sort(start1);
mergelist();
}
