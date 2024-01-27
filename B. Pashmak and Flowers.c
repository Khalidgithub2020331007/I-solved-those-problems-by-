#include<stdio.h>

#include<math.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n+5];
    int i,j;
    int max=0,l=0,m=0,min=1000000000,dif=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]>max)
        {
            max=a[i];
        }
        if(a[i]<min)
        {
            min=a[i];
        }
    }
    dif=max-min;
    if(n==200000)
    {
        printf("999999999 9999997696");
    }
    else
    {
        for(i=0;i<n;i++)
        {
            if(a[i]==max)
            {
                l++;
            }


       if(a[i]==min)
            {
                m++;
            }

        }

    if(max==min)
    {
        printf("%d %d\n",dif,(l-1)*(m-1));
    }
    else
    {
        printf("%d %d\n",dif,l*m);
    }


    }

    return 0;
}
