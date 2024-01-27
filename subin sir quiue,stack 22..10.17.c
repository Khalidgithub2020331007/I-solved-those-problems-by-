#include<stdio.h>
typedef struct
{
    int top;
    int data[1000];

}stack;
void push(stack *s, int item)
{
    if(s->top<1000)
    {
        s->data[s->top]=item;
        s->top++;

    }
    else
    {
        printf("stack is null\n");
    }
}
int pop(stack *s)
{
    int item;
    if(s->top==NULL)
    {
        printf("NOW Stack is null\n");

    }
    else
    {
        s->top--;
        item=s->data[s->top];

    }
    return item;
}
int main()
{
    stack my_stack;
    my_stack.top=0;
    printf("How much number you will store?--");
    int n,i,m;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("please input %d-th number:",i+1);
        scanf("%d",&m);
          push(&my_stack,m);
    }



    int item;
    for(i=0;i<n;i++)
    {
        item=pop(&my_stack);
        printf("%d\n",item);
    }
    item=pop(&my_stack);
    printf("%d\n",item);
     item=pop(&my_stack);
    printf("%d\n",item);
    item=pop(&my_stack);
    printf("%d\n",item);
     item=pop(&my_stack);
    printf("%d\n",item);
     item=pop(&my_stack);
    printf("%d\n",item);
    item=pop(&my_stack);
    printf("%d\n",item);
    item=pop(&my_stack);
    printf("%d\n",item);

    return 0;
}

