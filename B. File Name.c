#include<stdio.h>
int main()
{
    int n,i,j,k,l;
    char s[101];
    scanf("%d",&n);
    scanf("%s",s);
    l=k=0;
    for(i=0;i<n;i++)
    {
        if(s[i]!='x')
        {
            l=0;
        }
        else
        {
            l++;
            if(l>2)
            {
              k++;
            }
        }
        //printf(" s[%d]-%c   i-%d   l-%d    k-%d\n",i+1,s[i],i+1,l,k);
    }
    printf("%d\n",k);
    return 0;
}
