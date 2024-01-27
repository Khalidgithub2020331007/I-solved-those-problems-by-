#include<stdio.h>

void f1(int u,int v);
void f2(int *pu, int *pv);
int main()
{
    int u=1;
    int v=3;
    printf("before calling f1::u=%d v=%d\n",u,v);
    f1(u,v);
    printf("after calling f1::u=%d v=%d\n",u,v);



    printf("before calling f2::u=%d v=%d\n",u,v);
       f2(&u,&v);
    printf("after calling f2::u=%d v=%d\n",u,v);


}
void f1(int u, int v)
{
    u=0;
    v=0;
    printf(" within f1 ::      u=%d   v=%d\n",u,v);

}
void f2(int *pu, int *pv)
{
    *pu=0;
    *pv=0;
    printf(" within f2  ::      *pu=%d   *pv=%d\n",*pu,*pv);

}
