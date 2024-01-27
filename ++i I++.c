#include<stdio.h>
void swap(char *x,char *y);
int main()
{
   char *x="NEW";
   char *y="Diconary";
   char *t;
   void swap(char *,char *);
   swap(x,y);

      printf("(%s,%s)",x,y);
      t=x;
      x=y;
      y=t;
      printf("-(%s,%s)",x,y);
      return 0;
}
void swap(char *x,char *y)
{
    char *t;
      y=x;
      x=y;
      y=t;
}
