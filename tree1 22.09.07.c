#include<stdio.h>
typedef struct node Node;
struct node
{
    int data ;
    Node *parent;
    Node *left;
    Node *right;

};
Node *create_node(int item)
{
    Node *new_node=(Node *)malloc(sizeof(Node));
    if(new_node==NULL)
    {
        printf("ERROR");
        exit(1);

    }
    new_node->data = item;
    new_node->parent = NULL;
    new_node->right = NULL;
    new_node->left = NULL;


    return new_node;
}
void add_left_child(Node *node,Node *child)
{
    node->left=child;

    if(child!=NULL)
    {
        child->parent=node;
    }

}
void add_right_child(Node *node,Node *child)
{
    node->right=child;
     if(child!=NULL)
    {
        child->parent=node;
    }

}
Node *create_tree()
{
    Node *two=create_node(2);
     Node *seven=create_node(7);
      Node *nine=create_node(9);
      add_left_child(two,seven);
       add_right_child(two,nine);




       Node *one=create_node(1);
       Node *six=create_node(6);
       add_left_child(seven,one);
       add_right_child(seven,six);

       Node *five=create_node(5);
       Node *ten=create_node(10);
       add_left_child(six,five);
       add_right_child(six,ten);


       Node *eight=create_node(8);


       add_right_child(nine,eight);

       Node *three=create_node(3);
       Node *four=create_node(4);
       add_left_child(eight,three);
       add_right_child(eight,four);

       return two;



}
Node *bst_insert(Node *root, Node *node)
{
    Node *parent_node, *current_node;
    if(root==NULL)
    {
        root=node;
        return root;
    }
    parent_node=NULL;
    current_node=root;
    while(current_node!=NULL)
    {
        parent_node=current_node;
        if(node->data<current_node->data)
        {
            current_node=current_node->left;
        }
        else
        {
            current_node=current_node->right;
        }

    }
    if(node->data<parent_node->data)
    {
        add_left_child(parent_node,node);


    }
    else
    {
        add_right_child(parent_node,node);

    }
    return root;
}
void pre_order(Node *node)
{

    if(node->left!=NULL)
    {
        pre_order(node->left);

    }
       printf("%d ",node->data);
    if(node->right!=NULL)
    {
        pre_order(node->right);

    }

}
Node *bst_minimum(Node *root)7
{
    Node *node=root;
    while(node->left!=NULL)
    {
        node=node->left;
    }
    return node;
}
Node *create_bst()
{
    Node *root,*node;
    int i;
    int ara[]={5,17,3,7,12,19,1,4};
    root=create_node(10);
    for(i=0;i<8;i++)
    {
        node=create_node(ara[i]);
        root=bst_insert(root,node);

    }
    return root;
}
Node *bst_search (Node *root, int item)
{
    Node *node=root;
    while (node!=NULL)
    {
        if(node->data==item)
        {
            return node;
        }
        if(item<node->data)
        {
            return node->left;
        }
        else
        {
            return node->right;
        }
    }
    return node;
}

int main()
{
    Node *root= create_bst;
    Node *node;
    node=bst_search(root,7);
    if(node!=NULL)
    {
        printf("%d\n",node->data);

    }
    else
    {
        printf("Node not find!\n");
    }
    node =bst_search(root,8);


     if(node!=NULL)
    {
        printf("%d\n",node->data);

    }
    else
    {
        printf("Node not find!\n");
    }
    return 0;
}
