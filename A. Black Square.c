#include<stdio.h>
#include<math.h>
#include<string.h>

int main()
{
    int a,b,c,d,l,i,e,sum=0;
    char s[1000000];
    scanf("%d %d %d %d",&a,&b,&c,&d);
    scanf("%s",s);
    l=strlen(s);
    //printf("%s %d\n",s,l);
    for(i=0;i<l;i++)
    {
        if(s[i]=='1')
        {
            e=1;
        }
        if(s[i]=='2')
        {
            e=2;
        }
        if(s[i]=='3')
        {
            e=3;
        }
        if(s[i]=='4')
        {
            e=4;
        }

        if(e==1)
        {
            sum=sum+a;
        }
          else if(e==2)
        {
            sum=sum+b;
        }
          if(e==3)
        {
            sum=sum+c;
        }
          if(e==4)
        {
            sum=sum+d;
        }

    }
    printf("%d\n",sum);
}
