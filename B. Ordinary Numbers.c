#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    int i,j,k,l,m,n;
    scanf("%d",&n);
    char s[5];
    for(i=0;i<n;i++)
    {
        scanf("%s",s);
        l=strlen(s);
        if(l==1)
        {
            k=atoi(s);
            printf("%d",k);
        }
        if(l==2)
        {
            k=atoi(s);
            m=k/10;
            if(s[0]<=s[1])
            {
                 printf("%d",9+m);
            }
            printf("%d",k);
        }

    }
    return 0;

}
