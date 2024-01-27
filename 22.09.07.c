#include<stdio.h>
int main()
{
   struct node{
   int data ;
   struct node *test;

   };
   printf("%d",sizeof(struct node));
}
