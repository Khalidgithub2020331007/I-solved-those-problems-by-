#include<stdio.h>
int main()
{
    int t, m,i,j,k,l,n;
    scanf("%d",&t);
    for(k=0;k<t;k++)
    {
        l=0;
        scanf("%d",&m);
        int a[m];
        for(i=0;i<m;i++)
        {
            scanf("%d",&a[i]);
            if(a[i]%2==1)
            {
                l++;
            }
        }
        if(l%2==1)
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
