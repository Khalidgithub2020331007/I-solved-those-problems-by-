#include<stdio.h>
typedef struct node Node;
struct node
{
    int data;
    Node *next;
    Node *prev;
};
Node *create_node(int item, Node *next,Node *prev)
{
    Node *new_node=(Node *)malloc(sizeof(Node));
    new_node->data=item;
     new_node->next=next;
      new_node->prev=prev;
      return new_node;
}
Node *prepend(Node *head,int item)
{
    Node *new_node=create_node(item,head, NULL);
    new_node->next->prev=new_node;
    return new_node;
}
Node *append(Node *head,int item)
{
    Node *new_node=create_node(item,NULL,NULL)
    if(head==NULL)
    {
        return new_node;
    }

    Node *current_node=head;
    while (current_node->next!=NULL)
    {
        current_node=current_node->next;
    }
    current_node->next=new_code;
    new_prev->prev=current_node;
    return head;
}
Node *remove_node(Node *head, Node *node)
{
    if(node==head)
    {
        head=node->next;
        head->prev=NULL;
        free(node);
        return head;
    }
    Node *previous_node=node->prev;
    Node *next_node=node->next;


    previous_node->next=next_node;
    next_node->prev=previous_node;

      free(node);
      return head;
}
int main()
{

}
