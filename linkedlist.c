#include<stdio.h>
#include<stdlib.h>
struct lnode
{
    int data;
 struct lnode*next;
};
typedef struct lnode node;
node*head=NULL;

 void insertAtBeginning(int value)
 {
     node*newNode=(node*)malloc(sizeof(node));
     if(newNode ==NULL)
     {
        printf("the newnode is empty");
        return ;

     }
     newNode->data=value;
     if(head==NULL)
     {
         newNode->next=NULL;
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
         printf("the list is empty");
    return ;
     }
         node*temp=head;
         while(temp!=NULL)
         {
             
             printf("%d ",temp->data);
             temp=temp->next;
         }
     }
     
void insertAtPosition(int pos,int value)
{
    int i;
    node*newNode=(node*)malloc(sizeof(node));
    if(head==NULL)
    {
        printf("the head is NULL");
        return;
    }
    newNode->data=value;
    node*temp=head;
   for(i=1;i<pos-1;i++)
   {
       temp=temp->next;
   }
       newNode->next=temp->next;
       temp->next=newNode;
       printf("inserted value is %d  position at %d",value,pos);
}
void insertAtEnd(int value)
{
    node*newNode=(node*)malloc(sizeof(node));
    newNode->data=value;
    newNode->next=NULL;
    if(head==NULL)
    {
    printf("the head is null");
    return;
    }
    
    node*temp=head;
while(temp->next!=NULL)
    {
            temp=temp->next;
}
        temp->next=newNode;
        
}
void deleteAtPosition(int pos)
{
    int i;
    node*temp=head;
    node*prev;
    if(head==NULL)
    {
        printf("the list is empty");
        return ;
    }
    if(pos==0)
    {
        head=head->next;
        printf("deleted value at %d",temp->data);
        free(temp);
    }
    for(i=1;i<pos;i++)
    {
        prev=temp;
        temp=temp->next;
        printf("deleted value at %d",temp->data);
        return ;
    }
    
}
void reverse()
{
    node*prev=NULL;
    node*current=head;
    node*next=current->next;
    while(current!=NULL)
    {
        next=current->next;
        current->next=prev;
        prev=current;
        current = next;
       
    }
     head=prev;
}
 
 int main()
 {
     int choice,value,pos;
     while(1)
     {
     printf("---linked list are---\n");
     printf("1.inserted at beginning\n");
     printf("2.display\n");
     printf("3.insert At position\n");
     printf("4.insert At End\n");
     printf("5.deleted at position\n");
     printf("6.reverse linked list\n");
     printf("7.exit\n");
     printf("enter the choice:");
     scanf("%d",&choice);
     switch(choice)
     {
         case 1:
         printf("enter the value:");
         scanf("%d",&value);
         insertAtBeginning(value);
         break;
         case 2:
        display();
        break;
        case 3:
        printf("enter the position:");
        scanf("%d",&pos);
        printf("enter the value:");
        scanf("%d",&value);
        insertAtPosition(pos,value);
        break;
        case 4:
        printf(" enter the value to insert at end:");
        scanf("%d",&value);
        insertAtEnd(value);
        break;
        case 5:
        printf("enter the deleted position:");
        scanf("%d",&pos);
        if(pos<0)
        {
            printf("invalid position");
            break;
        }
        deleteAtPosition(value);
        break;
        case 6:
            reverse();
            display();
            break;
    
        case 7: exit(0);
        default:
        printf("invalid choice");
     }
     
 }
 return 0;
 }