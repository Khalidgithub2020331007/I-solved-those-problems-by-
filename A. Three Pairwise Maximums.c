#include<stdio.h>
int main()
{
    int t,i,j,k,l,a[3];
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d%d%d",&a[0],&a[1],&a[2]);

      //  printf("%d %d %d\n",a[0],a[1],a[2]);
        for(j=0;j<2;j++)
        {
            for(k=j+1;k<3;k++)
            {
                if(a[j]<a[k])
                {
                    l=a[j];
                a[j]=a[k];
                a[k]=l;
                }

            }
        }


        if(a[0]==a[1]&&a[1]==a[2]||a[2]==a[0])
        {
          printf("YES\n%d %d %d\n",a[0],a[1],a[2]);
        }

        else if(a[1]==a[2])
        {
             printf("NO\n");
        }
        else if(a[0]==a[1])
        {
            printf("YES\n%d %d %d\n",a[0],a[2],a[2]);
        }
          else if(a[1]!=a[2]&&a[0]!=a[1])
        {
             printf("NO\n");
        }
    }
    return 0;
}
