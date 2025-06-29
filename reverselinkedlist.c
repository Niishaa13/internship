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
void reverse()
{
    node*prev=NULL;
    node*current=head;
    node*next=head->next;
    while(current!=NULL)
    {
        next=current->next;
        current->next=prev;
        prev=current;
        current=next;
        head=prev;
    }
}
   int main()
   {
       int value,choice;
       while(1)
       {
       printf("----linked list-----\n");
       printf("1.insert at beginning\n");
       printf("2.display\n");
       printf("3.reverse \n");
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
       case 3:reverse();
       display();
       case 4:exit(0);
      default:
      printf("you enter out of 3");
       }  
       }
       return 0;
   }