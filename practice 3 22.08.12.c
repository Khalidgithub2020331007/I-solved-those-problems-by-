#include<stdio.h>
int plus_ten1(int a)
{
    a=a+10;
    return a;

}
void plus_ten2(int *a)
{
    *a=(*a)+10;

}
int main()
{
    int a;
    a=5;

    printf("a=%d\n", plus_ten1(a));
    plus_ten2(&a);
    printf("a=%d\n",a);
    return 0;
}
