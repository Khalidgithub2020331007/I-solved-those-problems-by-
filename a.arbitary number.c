#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    int i,k,m,n,v,a,b;
    double l,j,c;

    scanf("%d",&n);
    char s[12];
    for(i=0;i<n;i++)
    {
        scanf("%s",s);
        l=strlen(s);
        c=l;
//        printf("l-%f\n",l);
        v=atoi(s);
        m=v;
//        printf("m-%d\n",m);
        l=ceil(pow(10,l-1));
        v=v/l;
        k=0;
//         printf("k-0-%d\n",k);
        for(j=c;j>0;j--)
        {
            b=ceil(pow(10,j-1));
//            printf("b-%d\n",b);
            k=k+v*b;
//             printf("k-%d\n",k);
        }
//        printf("kf-%d\n",k);

        if(m>=k)
        {
            a=9*(c-1)+v;
            printf("%d\n",a);
        }
        if(m<k)
        {
            a=9*(c-1)+v-1;
            printf("%d\n",a);
        }

    }
    return 0;

}
