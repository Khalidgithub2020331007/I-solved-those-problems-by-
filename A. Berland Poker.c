#include<stdio.h>
int main()
{
    int t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        int a,b,c;
        scanf("%d %d %d",&a,&b,&c);
        int d,g,e,f;
        d=a/c;
        g=d<=b?d:b;
        e=d<=b?b-d:0;
        f=ceil((double)e/(c-1));
        printf("%d\n",g-f);
    }
    return 0;
}
