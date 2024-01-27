#include<stdio.h>
#include<stdlib.h>
struct node{

    int data;
    struct node *link;
};
void count_of_nodes(struct node *head)
{
    int count=0;
    if(head==NULL)
    {
        printf("\nhead is null\n");
    }
    struct node *ptr=NULL;
    ptr=head;
    while(ptr!=NULL)
    {
        count++;
        ptr=ptr->link;
    }
    printf("count_of_nodes-%d\n",count);
}
void print_node(struct node *head)
{

    if(head==NULL)
    {
        printf("\nhead is null\n");
    }
    struct node *ptr=NULL;
    ptr=head;
    while(ptr!=NULL)
    {
        printf("%d ",ptr->data);
        ptr=ptr->link;
    }

}
int main()
{
    struct node *head=malloc(sizeof(struct node));

     head->data=5453;
    head->link=NULL;
   struct node *current=malloc(sizeof(struct node));

    current->data=4;
    current->link=NULL;
       head->link=current;
       struct node  *current2 =malloc(sizeof(struct node));
       current2->data=3;
       current2->link=NULL;

    current->link=current2;

     count_of_nodes(head);
     print_node(head);
    return 0;

}
