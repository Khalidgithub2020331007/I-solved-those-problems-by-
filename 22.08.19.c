#include<stdio.h>
int main()
{
    int a=5;
    int c=10,*pa=&a;
    printf("%d %d %d %X",a,c,*pa,pa);

    return 0;
}
