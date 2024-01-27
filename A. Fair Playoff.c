
#include<stdio.h>
int main()
{
    int n,m,i,j,k,l,c,d,e,f,g,h,temp;
    scanf("%d",&n);
    int a[5],b[5];
    for(i=0;i<n;i++)
    {
        for(j=0;j<4;j++)
        {
            scanf("%d",&a[j]);
            b[j]=a[j];

        }
        for(j=0;j<3;j++)
        {
             for(k=j+1;k<4;k++)
            {

             if(a[j]<a[k])
             {
                  temp=a[j];
                   a[j]=a[k];
                   a[k]=temp;
             }
            }

        }
         for(j=0;j<1;j++)
        {

             for(k=1;k<2;k++)
            {

             if(b[j]<b[k])
             {
                  temp=b[j];
                   b[j]=b[k];
                   b[k]=temp;
             }
            }

        }

         for(j=2;j<3;j++)
        {

             for(k=3;k<4;k++)
            {

             if(b[j]<b[k])
             {
                  temp=b[j];
                   b[j]=b[k];
                   b[k]=temp;
             }
            }

        }
//        for(j=0;j<4;j++)
//        {
//            printf("%d ",a[j]);
//
//
//        }
        puts("");
//         for(j=0;j<4;j++)
//        {
//            printf("%d ",b[j]);
//
//
//        }
//         puts("");
         if(b[0]<b[2])
         {
               temp=b[0];
                   b[0]=b[2];
                   b[2]=temp;
         }
//         for(j=0;j<4;j++)
//        {
//            printf("%d ",b[j]);
//
//
//        }
         puts("");
          puts("");
          if(a[0]==b[0]&&a[1]==b[2])
          {
              printf("YES");
          }
          else
          {
              printf("NO");
          }
          puts("");



    }
    return 0;

}
