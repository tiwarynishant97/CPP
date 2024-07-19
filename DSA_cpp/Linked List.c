/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* link;
};
struct node* head=NULL;

void insertfront()
{
    struct node *temp;
    temp=(struct node *)malloc(sizeof(struct node));
    printf("enter the data ");
    scanf("%d",&temp->data);
    temp->link=NULL;
    if(head==NULL)
    {
        head=temp;
    }
    else
    {
        temp->link=head;
        head=temp;
    }
}
void deletefront()
{
    struct node *temp;
    if(head==NULL)
    {
        printf("Linked list is empty");
    }
    else
    {
        temp=head;
        head=temp->link;
        printf(" \n item delted is %d \n ",temp->data);
        free(temp);
        temp=NULL;
    }
}
void deletend()
{
    struct node *temp,*prev;
    if(head==NULL)
    {
        printf("linked list is empty");
    }
    else if(head->link==NULL)
    {
        printf("%d is delted ",head->data);
        free(head);
        head=NULL;
        
    }
    else
    {
        prev=NULL;
        temp=head;
        while(temp->link!=NULL)
        {
            prev=temp;
            temp=temp->link;
        }
        prev->link=NULL;
        printf("\n deleted element is %d \n ",temp->data);
        free(temp);
        temp=NULL;
    }
}
void insertend()
{
    struct node *temp,*curr;
    temp=(struct node *)malloc(sizeof(struct node));
    printf("enter the data ");
    scanf("%d",&temp->data);
    temp->link=NULL;
    if(head==NULL)
    {
        head=temp;
    }
    else
    {
        curr=head;
        while(curr->link!=NULL)
        {
            curr=curr->link;
        }
            curr->link=temp;
    }
    
}
void display()
{
    struct node *temp;
    //temp=(struct node *)malloc(sizeof(struct node));
    if(head==NULL)
    {
        printf("List is empty");
    }
    else
    {
        temp=head;
        while(temp!=NULL)
        {
            printf(" data is %d  ",temp->data);
            temp=temp->link;
        }
    }
}
void linearsearch()
{
    struct node * temp;
    int key,loc;
    printf("\n Enter the key to be found \n");
    scanf(" %d",&key);
    if(head ==NULL)
    {
        printf(" list is empty");
    }
    else
    {
        temp=head;
        loc=1;
        while(temp!=NULL)
        {
            if(temp->data==key)
            {
                printf("\n %d key found at %d ",temp->data,loc);
                break;
            }
            else
            {
                temp=temp->link;
                loc++;
            }
            
        }
    }
}

int main()
{
    
    insertfront();
    insertfront();
    insertfront();
    insertend();
    insertend();
    display();
    deletefront();
    display();
    deletend();
    display();
    linearsearch();
    

    return 0;
}

