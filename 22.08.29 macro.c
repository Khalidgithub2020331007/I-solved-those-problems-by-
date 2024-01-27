#include<stdio.h>
#define debug 1
int  add ( int a, int b)
{
    return a*b;

}
int main()

{
    int l,i,sum =0,t;
    printf("lenth-");
    scanf("%d",&l);
    if(debug)
    {
        printf("----\ndebug\n number of lenth %d\n -----\n",l);
    }
    for(i=0;i<l;i++)
    {
        printf(" number - %d=",i+1);
        scanf("%d",&t);
        if(debug) printf("----\ndebug\n t=%d\n",t);
        sum=add(sum,t);
      if(debug) printf("----\ndebug\n sum=%d\n",sum);


    }
    printf("average %lf",(double)sum/l);
}

