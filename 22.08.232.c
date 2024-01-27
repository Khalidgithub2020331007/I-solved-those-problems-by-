#include<stdio.h>
int main()
{
    int t,n,k,i,j;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d %d",&n,&k);

       if((n%2==0&&k%2==0)||(n%2==1&&k%2==1))printf("YES");


       else  printf("NO");

        puts("");

    }
}

