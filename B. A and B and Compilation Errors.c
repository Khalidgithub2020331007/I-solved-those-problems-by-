#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[100010],b[100010],c[100010];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n-1;i++)
    {
        scanf("%d",&b[i]);
    }
    for(int i=0;i<n-2;i++)
    {
        scanf("%d",&c[i]);
    }
    int temp;
     for(int i=0;i<n-1;i++)
    {
         for(int j=i+1;j<n;j++)
        {
           if(a[i]<a[j])
           {
               temp=a[i];
               a[i]=a[j];
               a[j]=temp;
           }
        }
    }
    for(int i=0;i<n-2;i++)
    {
         for(int j=i+1;j<n-1;j++)
        {
           if(b[i]<b[j])
           {
               temp=b[i];
               b[i]=b[j];
               b[j]=temp;
           }
        }
    }
    for(int i=0;i<n-3;i++)
    {
         for(int j=i+1;j<n-2;j++)
        {
           if(c[i]<c[j])
           {
               temp=c[i];
               c[i]=c[j];
               c[j]=temp;
           }
        }
    }

        for(int i=0;i<n;i++)
    {
        if(a[i]!=b[i])
        {
            printf("%d\n",a[i]);
            break;
        }
    }
     for(int i=0;i<n-1;i++)
    {
        if(c[i]!=b[i])
        {
            printf("%d\n",b[i]);
            break;
        }
    }
    return 0;

}
