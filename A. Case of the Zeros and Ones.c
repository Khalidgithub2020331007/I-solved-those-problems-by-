
#include<stdio.h>
int main()
{
    int n,i,j,k=0,l=0;
    char s[200010];
    scanf("%d %s",&n,s);
    for(i=0;i<n;i++)
    {
        if(s[i]=='1')
        {
            k++;
        }
        else
        {
            l++;
        }
    }
    printf("%d",abs(l-k));
    return 0;

}
