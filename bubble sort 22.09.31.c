
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
        for(j=0;j<n-i-1;j++)
      {
          if(a[j]>a[j+1])
          {
              temp=a[j+1];
              a[j+1]=a[j];
              a[j]=temp;
          }
          count++;
      }
//10 9 8 4 6 78 34 22 77 444
   }
   for(i=0;i<n;i++)
   {
       printf("%d ",a[i]);
   }
   printf("\ncount-%d",count);
}

