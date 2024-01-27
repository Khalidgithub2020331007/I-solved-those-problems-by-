#include<stdio.h>
int main()
{
    int i,j,n,right,left,a[20],mid,n1,flag,count=0;
    printf("lenth=");
    scanf("%d",&n);
    printf("\nnumber=");
    scanf("%d",&n1);

    for(i=0;i<n;i++)
    {
        printf("\narray[%d]=",i+1);
        scanf("%d",&a[i]);
    }
    right =0;
    left =n-1;

  for(i=0;i<n;i++)
  {
      count+=1;
      mid=(right+left)/2;
      if(a[mid]==  n1)
      {
          printf("position-%d",mid+1);
          flag=1;
          break;
      }
      else if(a[mid]>n1)
      {
          left=mid;
      }
       else if(a[mid]<n1)
      {
         right=mid;
      }
  }
  if(flag!=1)
  {
      printf("-1");
  }
  printf("\n count-%d",count);


    return 0;
}
