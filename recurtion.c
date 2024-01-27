#include<stdio.h>
int a;
static int b;

void recurse(int count)
{
      if(count==5)
      {
          return;
      }
      printf("I am learning recurtion\n");
      recurse(count+1);
      return;
}
int main()
{

     recurse (1);
    return 0;
}

