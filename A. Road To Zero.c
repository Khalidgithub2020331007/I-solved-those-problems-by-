
#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        printf("%d-\n",i+1);
        int a,b,c,d,g;
        scanf("%d %d %d %d",&a,&b,&c,&d);
        long long int f=(long long int)(a+b)*c;
        g=a<=b?a:b;
        long long int e;
        e=(long long int)g*d+(long long int)(abs(a-b))*c;
        printf("%lld\n",e<f?e:f);

    }
        return 0;

}
