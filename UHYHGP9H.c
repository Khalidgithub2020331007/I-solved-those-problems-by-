#include<stdio.h>
int main()
{
    char u,v='A';
    char *pu,*pv=&v;
    *pv=v+1;
    u=*pv+1;
    pu=&u;
    printf("&v=%d\n",&v);
    printf("pv=%d\n",pv);
      printf("*pv=%c\n",*pv);
        printf("u=%c\n",u);
          printf("pu=%d\n",pu);
            printf("*pu=%c\n",*pu);
            return 0;



}
