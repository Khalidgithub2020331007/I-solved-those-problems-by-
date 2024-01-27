#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
    int i,j,k,l,n,m,d;
    char s[101];
    scanf("%s",s);
    l=strlen(s);
    m=0;
    for(i=0;i<l-1;i++)
    {
        d=abs(s[i]-s[i+1]);
        if(d>13)
        {
            m=m+26-d;
        }
        else
        {
            m=m+d;
        }

//    printf("%d\n",d);
//    printf("%d\n",m);

    }
    if(s[0]!='a')
    {
        d=abs(s[0]-'a');
        if(d>13)
        {
            m=m+26-d;
        }
        else
        {
            m=m+d;
        }
        printf("%d\n",m);
    }
    else
        {
            printf("%d\n",m);
        }

    return 0;

}
