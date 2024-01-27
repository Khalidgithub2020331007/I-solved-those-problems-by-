#include<stdio.h>
int main()
{
    char s[1000000];
    scanf("%s",s);
    int l,i,j,p,q,t,d,h,max;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
       scanf("%d%d",&p,&q);


       d=0;
       h=0;
       for(j=p-1;j<q-1;j++)
       {
           if(s[j]==s[j+1])
           {
               d++;
           }

       }

       printf("%d\n",d);
    }
    return 0;
}
/*......
4
3 4
2 3
1 6
2 6
*/
