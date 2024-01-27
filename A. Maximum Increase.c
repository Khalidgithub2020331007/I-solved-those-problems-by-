#include<stdio.h>
int main()
{
    int n,i,l,m;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);

    }
    l=0;
    m=0;
       for(i=0;i<n-1;i++)
    {
        if(a[i]<a[i+1])
        {
            l++;
        }
        else
        {
           if(m<l)
           {
               m=l;

           }
           l=0;

        }
    //printf("a[i]-%d  a[i+1]-%d   l-%d m-%d\n",a[i],a[i+1],l,m);


    }
     if(m<l)
           {
               m=l;

           }
    printf("%d\n",m+1);
    return 0;
}
