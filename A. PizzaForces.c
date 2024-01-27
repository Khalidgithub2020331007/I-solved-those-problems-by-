#include<stdio.h>
int main()
{
    int t,i;
    scanf("%d",&t);
    unsigned long long int a;
    for(i=0;i<t;i++)
    {
     //   printf("%d-\n",i);
        scanf("%llu",&a);
        unsigned long long int sum=0,b,c,d;
        if(a%6==0)
        {
            sum=(a*15)/6;
        }
        else if(a%8==0)
        {
            sum=(a*20)/8;
        }
        else if(a%10==0)
        {
            sum=(a*25)/10;
        }
        else
        {

            if((a%6==3||a%6==4)&&(a/6)!=0)
            {
                b=((a/6)-1)*15+25;
            }
            else if((a%6==1||a%6==2)&&(a/6)!=0)
            {
                b=((a/6)-1)*15+20;
            }
            else
            {
                  b=((a/6)+1)*15;
            }
             if(a%8<=6)
             {
                 c=((a/8)*20)+15;
             }
             else if(a%8<8)
             {
                 c=((a/8)*20)+20;
             }
              if(a%10<=6)
             {
                 d=((a/10)*25)+15;
             }
             else if(a%10<=8)
             {
                 d=((a/10)*25)+20;
             }
              else if(a%10<10)
             {
                 d=((a/10)*25)+25;
             }
             sum=b<c?(b<d?b:d):(c<d?c:d);
        }
        printf("%lld\n",sum);
    }
}
