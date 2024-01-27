#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    int t,l;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        double  n;
        scanf("%lf",&n);
        double a;
        a=pow(n,1.0/3);
        a=(int)a;
        //printf("%f\n",a);
         l=0;
         double j;
         printf("a-%f\n",a);
        for( j=a;a-j<=5000&&j>0;j--)
        {
            double b= n-(j*j*j);
           double c;

           c=pow(b,1.0/3);


          int d=(int)c;
          int e=(int)b;
            printf("1-\n");
           if(e%d==0 &&d>0&&a>0)
           {
               printf("e-%d  d-%d\n",e,d);
               printf("2-\n");
               l=1;
               printf("YES\n");
               break;
           }
        }

        printf("3-\n");
        if(l==0)
        {
            printf("NO\n");
        }

    }
    return 0;
}
