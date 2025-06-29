#include<stdio.h>
#include<stdlib.h>
struct lnode
{
    int data;
    struct lnode*next;
};
typedef struct lnode node;
node*head=NULL;
void insertAtBeginning(int val)
{
    node*newNode=(node*)malloc(sizeof(node));
    if(newNode==NULL)
    {
        printf("the newnode is NULL");
        return;
    }
newNode-> data=val;
if(head==NULL)
{
    newNode-> next=NULL;
    head=newNode;
}
else
{
    newNode->next=head;
    head=newNode;
}
}
void display()
{
    if(head==NULL)
    {
        printf("there is no data");
        return;
    }
    node* temp=head;
    printf("elements are :");
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
}

void insertAtPos(int pos,int value)
{
    int i;
    node*newNode=(node*)malloc(sizeof(node));
    if(head==NULL)
    {
        printf("there is no node");
        return;
    }
    newNode->data=value;
    node*temp=head;
    for(i=0;i<pos-1;i++)
    {
        temp=temp->next;
    }
        newNode->next=temp->next;
        temp->next=newNode;

    printf("inserted a value %d at position %d ",value,pos);
}
   int main()
   {
       int value,choice,pos;
       while(1)
       {
       printf("----linked list-----\n");
       printf("1.insert at beginning\n");
       printf("2.display\n");
       printf("3.insert at position\n");
       printf("4.Exit\n");
       printf("Enter your choice:");
       scanf("%d",&choice);
       switch(choice)
       {
       case 1:printf("Enter the value:");
              scanf("%d",&value);
                insertAtBeginning(value);
                break;
       case 2:display();
       break;
       case 3:printf("enter the insert at position(start at 0):");
       scanf("%d",&pos);
       if(pos<0)
       {
           printf("invalid position");
           break;
       }
       printf("enter the value:");
       scanf("%d",&value);
       insertAtPos(pos,value);
       break;
       case 4:exit(0);
      default:
      printf("you enter out of 3");
       }  
       }
       return 0;
   }