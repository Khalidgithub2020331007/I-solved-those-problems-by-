#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *link;
};
void print_data(struct node *head)
{
    if(head==NULL)
    {
        printf("Empty\n");
    }
    struct node *ptr=NULL;
    ptr=head;
    while(ptr!=NULL)
    {
        printf("%d ",ptr->data);
        ptr=ptr->link;
    }
    puts("");
}
void add_at_end(struct node *head,int data)
{
    struct node *ptr, *temp;
    ptr=head;
    temp=(struct node *) malloc(sizeof(struct node));
    temp->data=data;
    temp->link=NULL;
    while(ptr->link!=NULL)
    {
        ptr=ptr->link;

    }
    ptr->link=temp;
};
 void add_at_pos(struct node *head,int data, int pos )
 {
     struct node *ptr=head;
     struct node *ptr2=malloc(sizeof(struct node));
     ptr2->data=data;
     ptr2->link=NULL;

     pos--;
     while(pos!=1)
     {
         ptr=ptr->link;
         pos--;
     }
     ptr2->link=ptr->link;
     ptr->link=ptr2;

 }
void add_beg(struct node **head,int d)
{
    struct node *ptr= malloc(sizeof(struct node));
    ptr->data=d;
    ptr->link=NULL;

    ptr->link=*head;
    *head=ptr;

    return head;
};
struct node *del_head(struct node *head)
{
    if(head==NULL)
    {
        printf("List is already empty");

    }
    else
    {
        struct node *temp=head;
        head=head->link;
        free(temp);
        temp=NULL;
    }
    return head;
};
void del_position( struct node **head,int position)
{
 struct node *current=*head;
 struct node *previous=*head;
    if(head==NULL)
    {
        printf("NuLL\n");
    }
    else if(position==1)
    {
        *head=current->link;
        free(current);
        current=NULL;
    }
    else
    {
        while(position!=1)
        {
            previous=current;
            current=current->link;
            position--;
        }
        previous->link=current->link;
        free(current);
        current=NULL;
    }
};
struct node *del_list(struct node *head)
{
    struct node *temp=malloc(sizeof(struct node));
    temp=head;
    while(temp !=NULL)
    {
        temp=temp->link;
        free(head);
        head=temp;
    }
    return head;
};
void *del_last(struct node *head)
{
    if(head==NULL)
    {
        printf("NULL\n");

    }
    else if(head->link==NULL)
    {
        free(head);
        head=NULL;
    }
    else
    {
        struct node *temp=head;

        while(temp->link->link!=NULL)
        {

            temp=temp->link;
        }

        free(temp->link);
        temp->link=NULL;

    }

};
int main()
{
    struct node *head=malloc(sizeof(struct node));
    head->data=45;
    head->link=NULL;

    struct node *current=malloc(sizeof(struct node));
    current->data=60;
    current->link=NULL;
    head->link=current;


     struct node *current2=malloc(sizeof(struct node));
    current2->data=65;
    current2->link=NULL;
    current->link=current2;

      print_data(head);
     add_beg(&head,3);
     int data=61,pos=3;
     add_at_pos(head,data,pos);
    print_data(head);

    head = del_head(head);
 print_data(head);
     del_last(head);
      print_data(head);
      int position =2;
      del_position(&head,position);
      print_data(head);

    add_at_end(head,777);
    print_data(head);
    head=del_list(head);
     print_data(head);
}
