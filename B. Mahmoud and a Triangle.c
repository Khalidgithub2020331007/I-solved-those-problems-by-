#include<stdio.h>

int main()
{
     int t,j,k,i,l=0;
     scanf("%d",&t);
     int a[t];
     for(i=0;i<t;i++)
     {
         scanf("%d",&a[i]);
     }
//     for(i=0;i<t;i++)
//     {
//         printf("%d ",a[i]);
//     }
     for(i=t-1;i>1;i--)
     { //printf("1\n");
          for(j=i-1;j>0;j--)
        {
        // printf("2\n");
             for(k=j-1;k>=0;k--)
            {
              //  printf("3\n");

                if((a[k]>=a[j]&&a[k]>=a[i]&&a[k]<a[j]+a[i]))
                {
                    printf("YES\n");
                    l=1;
                    break;
                }
                else if(a[i]>=a[j]&&a[i]>=a[k]&&a[i]<a[j]+a[k])
                {
                    printf("YES\n");
                    l=1;
                    break;
                }
                else if(a[j]>=a[i]&&a[j]>=a[k]&&a[j]<a[i]+a[k])
                {
                     printf("YES\n");
                    l=1;
                    break;
                }
            }
            if(l==1)
            {
                break;
            }
        }

        if(l==1)
            {
                break;
            }
     }
     if(l==0)
     {
         printf("NO\n");
     }
     return 0;
}
