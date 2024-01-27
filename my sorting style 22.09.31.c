#include<stdio.h>
int main()

{
   int i,j,n,a[100],count =0,temp;
   printf("l-");
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
       printf("\nn%d-",i+1);
       scanf("%d",&a[i]);
   }
    for(i=0;i<n-1;i++)
   {
        for(j=i+1;j<n;j++)
      {
          if(a[i]>a[j])
          {
              temp=a[i];
              a[i]=a[j];
              a[j]=temp;
          }
          count++;
      }

   }
   for(i=0;i<n;i++)
   {
       printf("%d ",a[i]);
   }
   printf("count-%d",count);
}
