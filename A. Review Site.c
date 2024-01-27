#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        printf("%d-\n",i+1);

        int n;
         scanf("%d",&n);
         int a[n];
         int l=0,m=0;
         for(int j=0;j<n;j++)
         {
             scanf("%d",&a[j]);
             if(a[j]==1)
             {
                 l++;
             }
             else if(a[j]==2)
             {
                 m++;
             }
             else if (a[j]==3)
             {
                 if(l>=m)
                 {
                     l++;
                 }
                 else
                 {
                     m++;
                 }
             }
         }
         printf("%d\n",l);


    }
    return 0;
}
