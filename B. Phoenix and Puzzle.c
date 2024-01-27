#include <stdio.h>
#include <math.h>
int main()
{
    double x,result;
     int a,b,c,i,j,k,l,m,d,e,f,t,n;
     scanf("%d",&t);
      for(i=0;i<t;i++)
    {
         scanf("%lf",&x);
    result = log2(x);
    n=ceil(pow(2,result));
    if(n==(int)x)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    }

    return 0;
}
