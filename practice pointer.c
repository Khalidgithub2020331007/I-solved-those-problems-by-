#include<stdio.h>
int add(int n,int m)
{
    return n+m;
}
int sub(int n,int m)
{
    return n-m;
}
int operate(int (*op)(int ,int),int a,int b)
{
    return op(a,b);
}
int main()
{
   int (*fnc)(int,int);
   int n=10,m=5;

   printf("Result:%d\n",operate(add,n,m));
   printf("Result:%d\n",operate(sub,n,m));
     return 0;
}
