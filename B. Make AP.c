#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        int a,b,c,d,e,f,g,l=0;
        scanf("%d %d %d",&a,&b,&c);
       if(a-b==b-c)
       {
           printf("YES\n");
           l=1;
       }
      if(l==0)
       {
           if((((a-c)/2)+a)%b==0&&a-c>1)
           {
                printf("YES\n");
                l=1;
           }
           else if((((2*b)-c)%a==0&&((2*b)-c)>0)||((2*b)+c)%a==0)
           {
                printf("YES\n");
                l=1;
           }
           else if ((((2*b)-a)%c==0||((2*b)+a)%c==0)&&((2*b)-a)>0)
           {
                printf("YES\n");
                l=1;
           }
       }
       if(l==0)
       {
           printf("NO\n");
       }
    }
    return 0;
}
