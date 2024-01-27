#include<stdio.h>
#include<math.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int j=0;j<t;j++)
    {
        printf("%d-\n",j+1);
        int n;
        scanf("%d",&n);
        int a[n];
        for(int i=0;i<n;i++)
        {
             scanf("%d",&a[i]);
        }
        for( int i=0;i<n-1;i++)
        {

               for(int k=i+1;k<n;k++)
              {
                if(a[i]>a[k])
                {
                    int temp=a[i];
                  a[i]=a[k];
                    a[k]=temp;
                }
              }


        }
        for( int i=0;i<n-1;i++)
        {
            if(a[i]!=0)
            {
               for(int k=i+1;k<n;k++)
              {
                if((abs(a[i]-a[k])==1||abs(a[i]-a[k])%2==0)&&(a[i]!=a[k]))
                {
                    a[i]=0;
                    a[k]=0;
                    break;
                }
              }
            }

        }
        int l=0;
//                 for( int i=0;i<n;i++)
//        {
//            printf("%d",a[i]);
//
//        }

         for( int i=0;i<n;i++)
        {
            //printf("%d",a[i]);
            if(a[i]!=0)
            {
                printf("NO\n");
                l=1;
                break;
            }
        }
        if(l!=1)
        {
            printf("YES\n");
        }



    }
    return 0;
}
