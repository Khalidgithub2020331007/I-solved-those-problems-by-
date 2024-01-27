
#include<stdio.h>
int main()
{
    int n,i,j,k,l,m;
    scanf("%d",&n);
    char s[10];
    for(i=0;i<n;i++)
    {
        scanf("%s",s);
        if((s[0]=='Y'||s[0]=='y')&&(s[1]=='E'||s[1]=='e')&&(s[2]=='S'||s[2]=='s'))
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
