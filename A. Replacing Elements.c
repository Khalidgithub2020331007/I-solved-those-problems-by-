#include<stdio.h>
int  main()
{
    int t,n,d,i,j,k,l,m,p;
    scanf("%d",&t);
    for(l=0;l<t;l++)
    {
        scanf("%d %d",&n,&d);
        int a[n];
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        m=p=0;
        for(i=0;i<n-1;i++)
        {
            for(j=i+1;j<n;j++)
            {
                if(a[i]+a[j]<=d)
                {
                    printf("YES\n");
                    m=1;
                    break;
                }
            }
            if(m==1)
            {
                break;
            }
        }
        if(m!=1)
        {
            for(i=0;i<n;i++)
            {
                if(a[i]>d)
                {
                    printf("NO\n");
                    p=1;
                    break;
                }
            }
        }
        if(m!=1&&p!=1)
        {
            printf("YES\n");
        }
    }
    return 0;
}
