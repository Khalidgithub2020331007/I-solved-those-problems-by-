#include<stdio.h>
int gcd2(int a, int b)
{

}int gcd(int a, int b)
{
   int c=a,d=b,n;
   c=c>d?c:d;
   d=d<=c?d:c;
   if(c%d==0)
   {
      return d;
   }
   else
   {
       return gcd(d,c%d);
   }
}
int main()
{
    int t,n,i,j,k,l;
    scanf("%d",&t);
    for(j=0;j<t;j++)
    {
        scanf("%d",&n);
        int a[n];
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        l=0;
        for(i=0;i<n-1;i++)
        {
            for(k=i+1;k<n;k++)
            {
               if(gcd(a[i],a[j])!=1)
               {
                   l++;
               }
            }
        }
        printf("%d\n",l-1);

    }
    return 0;
}
