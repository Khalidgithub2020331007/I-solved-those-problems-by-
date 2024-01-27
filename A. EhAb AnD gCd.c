#include<stdio.h>
//int gcd(int n,int m)
//{
//     int a;
//     for(a=n;a<0;a--)
//     {
//         if(n%a==0&&m%a==0)
//         {
//             return a;
//             break;
//         }
//     }
//}
//int lcd(int n,int m)
//{
//    int b;
//     for(b=n;b<=n*m;b++)
//     {
//         if(b%n==0&&b%m==0)
//         {
//             return b;
//             break;
//         }
//     }
//}
int main()
{
    int t,g,i,j,k,l;
    scanf("%d",&t);
    for(k=0;k<t;k++)
    {

        scanf("%d",&g);
//        for(i=1;i<=g/2;i++)
//        {
//            for(j=1;j<=g/2;j++)
//           {
//                if((gcd(i,j)+lcd(i,j))==g)
//                {
//                    printf("%d %d\n",i,j);
//                    l=1;
//                    break;
//                }
//           }
//           if(l==1)
//           {
//               break;
//           }
//        }
           printf("%d 1\n",g/2);

    }
    return 0;
}
