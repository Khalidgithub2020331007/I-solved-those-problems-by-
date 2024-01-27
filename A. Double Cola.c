#include<stdio.h>
#include<math.h>
int main()
{
    int x,t,i=0;

       scanf("%d",&x);
     if(x<=5)
     {
          if(x==1)
        {
            printf("Sheldon\n");
        }
    else  if(x==2)
    {

        printf("Leonard\n");
    }

    else  if(x==3)
    {
         printf("Penny\n");
    }
    else  if(x==4)
    {
         printf("Rajesh\n");
    }
    else  if(x==5)
    {
         printf("Howard");
    }

     }
     else
     {
           int a=x/5;
    int b=log2(a);
     //printf("b-%d\n",b);
    int c=5*pow(2,(double)b);
     //printf("c-%d\n",c);
    int d=x-c;
   //printf("%d\n",d);
    int e=pow(2,(double)(b));
  // printf("%d\n",e);
    int f=ceil((double)d/(double)e);

   //printf("%d\n",f);
    if(f==1)
    {
        printf("Sheldon\n");
    }
    else  if(f==2)
    {

        printf("Leonard\n");
    }
    else  if(f==3||f==0)
    {
         printf("Penny\n");
    }
    else  if(f==4)
    {
         printf("Rajesh\n");
    }
    else  if(f==5)
    {
         printf("Howard");
    }
     }


   return 0;
}

