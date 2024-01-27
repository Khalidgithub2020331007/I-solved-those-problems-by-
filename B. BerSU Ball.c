#include<stdio.h>
#include<math.h>
int main()
{
    int n,m,i,j,l,temp,e;
    scanf("%d",&n);
    int a1[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a1[i]);
    }
     scanf("%d",&m);
    int a2[m];
    for(i=0;i<m;i++)
    {
        scanf("%d",&a2[i]);
    }
      for(i=0;i<n-1;i++)
    {
       for(j=i+1;j<n;j++)
      {
          if(a1[i]>a1[j])
          {
              temp=a1[i];
              a1[i]=a1[j];
              a1[j]=temp;
          }
      }
    }
     for(i=0;i<m-1;i++)
    {
       for(j=i+1;j<m;j++)
      {
          if(a2[i]>a2[j])
          {
              temp=a2[i];
              a2[i]=a2[j];
              a2[j]=temp;
          }
      }
    }
//         for(i=0;i<n;i++)
//    {
//        printf("%d ",a1[i]);
//    }
//    puts(" ");
//    for(i=0;i<m;i++)
//    {
//        printf("%d ",a2[i]);
//    }
//    puts(" ");
     e=0;
     l=0;
     for(i=0;i<n;i++)
    {
       for(j=e;j<m;j++)
      {
          if(abs(a1[i]-a2[j])==0||abs(a1[i]-a2[j])==1)
          {
              l++;
              e=j+1;
              break;
          }
      }
    }
    printf("%d",l);
    return 0;

}
