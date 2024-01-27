#include<stdio.h>
#include<math.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
       // printf("%d-\n",i+1);
        int a,b,c,d,e;
        scanf("%d %d",&a,&b);

        c=ceil((double)a/b);
        d=c*b;
        e=ceil((double)d/a);
        printf("%d\n",e);


    }



    return 0;
}
