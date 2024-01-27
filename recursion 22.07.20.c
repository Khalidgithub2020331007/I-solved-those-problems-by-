#include<stdio.h>
int f_calls;
int fact(int n)
{
    f_calls++;
    if(n==02)
    {
        return 1;
    }
    return n*fact(n-1);

}
int main()
{
   int n;
   scanf("%d",&n);
   if(n<0)
   {
       printf("Undefined\n");
       return 0;
   }
   printf("factorial of %d is %d\n",n,fact(n));
   printf("number of f_calls=%d",f_calls);
   return 0;
}
