
#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int k=0;k<t;k++)
    {
        int n,i,j,l=1;
        scanf("%d",&n);
        int a[n];
        char s[55],c,d;
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        scanf("%s",s);
        for(i=0;i<n-1;i++)
        {
            for(j=i+1;j<n;j++)
            {
                if(a[i]==a[j])
                {
                    c=s[i];
                    d=s[j];
                    if(c!=d)
                    {
                        printf("NO\n");
                        l=0;
                        break;
                    }
                }
            }
            if(l==0)
            {
                break;
            }
        }
        if(l)
        {
            printf("YES\n");
        }

    }
    return 0;

}
