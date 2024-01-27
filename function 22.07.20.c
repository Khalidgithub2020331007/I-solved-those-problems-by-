#include<stdio.h>
 maximum(int n,int m)
{
    int m1;
    m1=(n>=m)?n:m;
    return m1;

}
int main()
{

    int a,b,c,d;
    scanf("%d %d %d",&a,&b,&c);
    d=maximum(a,b);
    printf("Maximum:%d",maximum(d,c));
    return 0;
}
