#include<stdio.h>
int main()
{
    int t, n,x,i,j,k,l,m;
    scanf("%d",&t);
    for(j=0;j<t;j++)

    {
        printf("%d-",j+1);
        l=m=0;
    scanf("%d %d",&n,&x);
    int a[n];

    for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
            if(a[i]%2==0)
            {
                m++;
            }
            if(a[i]%2!=0)
            {
                l++;
            }
        }
        if(x<l&&x%2!=0)
        {
            printf("YES\n");
        }
        else if(l==1)
        {
            printf("YES\n");
        }
        else if(l==2&&x>=2&&x>n)
        {
            printf("NO\n");
        }
        else if(l%2==0&&l>=x&&l==n)
        {
            printf("NO\n");
        }
        else if(x==n&&l%2==0)
             {
            printf("NO\n");
        }
        else if(l==0)
             {
            printf("NO\n");
        }
        else
        {
            printf("YES\n");
        }

    }
    return 0;
}
/*4
3 1
16 11 12
10 3
13 12 9 1 9 8 4 19 16 19
3 2
3 2 6
9 7
11 14 1 6 3 12 3 20 16
*
5
1 1
999
1 1
1000
2 1
51 50
2 2
51 50
3 3
101 102 103
*/
