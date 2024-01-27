#include<stdio.h>
#include<math.h>

int main()
{
    int i,j,k,l,n,m;
    char s1[1005],s2[1002];
    scanf("%d %s %s",&n,s1,s2);
    m=0;
    for(i=0;i<n;i++)
    {
        k=abs((int)s1[i]-(int)s2[i]);

        m=m+(k>5?10-k:k);
    }

     printf("%d\n",m);
     return 0;
}
/*
 int j,k,l,m,a,b,c,d;
    double i,n;
    scanf("%lf %d %d",&n,&a,&b);
    m=0;
   // printf("%f %d %d\n",n,a,b);
    for(i=n;i>=1;i--)
    {
     //   printf("-1\n");
        c=(int)(ceil(pow(10,i)));
        d=(int)(ceil(pow(10,i-1)));
        k=(a%c/d);
        l=(b%c/d);
       // printf("%d %d\n",c,d);
       // printf("%d %d\n",k,l);
        k=abs(l-k);
        k=k>5?10-k:k;
        m=m+k;

    }
    */
