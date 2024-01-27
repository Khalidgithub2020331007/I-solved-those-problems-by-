#include<stdio.h>
int main()
{
    int n,i,j,l,a,b,c,d;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d %d %d %d",&a,&b,&c,&d);
        l=(a+b+c+d)/3;
        if((a+b+c+d)%3!=0||l<a||l<b||l<c)
        {
            printf("NO\n");
        }
        else
        {
            printf("YES\n");
        }
    }
}

















