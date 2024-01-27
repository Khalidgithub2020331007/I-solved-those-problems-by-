#include<stdio.h>
int main()
{
    int t,m,k,i,j,l,n;
    scanf("%d",&t);
    for(k=0;k<t;k++)
    {
        l=0;
        n=0;

        scanf("%d",&m);
        int a[2*m];
        for(i=0;i<2* `m;i++)
        {
            scanf("%d",&a[i]);
            if(a[i]%2==0) n++;
                 if(a[i]%2!=0) l++;
        }
        if(l==n) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}

