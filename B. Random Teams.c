#include<stdio.h>
int main()
{
    int n1,m,i,j;
    double k,l,m1,l1,n;
    scanf("%d %d",&n1,&m);

    k=n1%m;
    l=n1/m;
    m1=m;
    l1=(((l)*(l-1))/2)*(m1-k);
    k=(((l+1)*l)/2)*k;
    n=n1;
    n=n-m1+1;
    printf("%.0f %.0f",k+l1,(((n)*(n-1))/2));
}
