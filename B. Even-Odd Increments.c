#include<stdio.h>
int main()
{
        int t,i,j,k,l;
        scanf("%d",&t);
        for(k=0;k<t;k++)
        {
            int n,m,b,c;
            long long int  o=0;
            scanf("%d %d",&n,&m);
            long long int sum=0;
            int a[n];
            for(i=0;i<n;i++)
            {
                scanf("%d",&a[i]);
            }
            for(i=0;i<m;i++)
            {+
                scanf("%d %d",&b,&c);
                if(b==0)
                {
                    for(j=0;j<n;j++)
                    {
                        if(a[j]%2==0)
                        {
                            a[j]=a[j]+c;
                        }
                    }
                }
                if(b==1)
                {
                    for(j=0;j<n;j++)
                    {
                        if(a[j]%2==1)
                        {
                            a[j]=a[j]+c;
                        }
                    }
                }
                for(l=0;l<n;l++)
                {
                    sum=sum+(long long int)a[l];
                }
                printf("%lld\n",sum-o);
                o=sum;

            }




        }
        return 0;

}
