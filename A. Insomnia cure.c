
#include<stdio.h>
int m;
int main()
{
    int i,j,a,b,c,d,e;
    scanf("%d %d %d %d %d",&a,&b,&c,&d,& e);
    for(i=1;i<=e;i++)
    {
        if(i%a!=0&&i%b!=0&&i%c!=0&&i%d!=0)
        {
              m++;
        }

    }
    printf("%d\n",e-m);
}
