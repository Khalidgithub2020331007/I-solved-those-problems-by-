#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
      //  printf("%d-\n",i+1);
        int n,a,b,c,d;
        scanf("%d %d %d %d %d",&n,&a,&b,&c,&d);
//
//        printf("%d %d %d %d %d\n",n,a,b,c,d);
//        printf("c-d-%d c+d-%d a-b-%d a+b-%d (a-b)*n-%d  (a+b)*n-%d \n",c-d,c+d,a-b,a+b,(a-b)*n,(a+b)*n);

        if(((a-b)*n>=(c-d))||((a-b)*n<=(c+d)))
        {
              printf("YES\n");

        }
        else if(((a+b)*n<=(c+d) ||(a+b)*n>=(c-d) ))
        {
            printf("YES\n");
        }

        else
        {
             printf("NO\n");
        }


    }
    return 0;
}
