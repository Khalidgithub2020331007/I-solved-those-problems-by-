#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int a[n],l=0,m=0,o,fg=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);

    }
    for(i=0;i<n;i++)
    {

        if(a[i]==25)
        {
            l++;
        }
        if(a[i]==50)
        {
          l--;
        }
        if(a[i]==100)
        {
            if(m>0)
            {
                m--;
                l--;
            }
            else
            {
                l=l-3;
            }
        }
      //  printf("%d %d\n",l,m);
       //  o=l-m;
          if(l<0)
        {
            printf("NO\n");
            fg=1;
            break;
        }
        if(a[i]==50)
        {
            m++;
        }
    }

    if(fg==0)
    {
        printf("YES\n");
    }

    return 0;
}
