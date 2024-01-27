#include<stdio.h>
#include<string.h>
int lcm(int e,int f)
{
    int g;
    for(g=(e>f?e:f);g<=e*f;g++)
    {
        if(g%e==0&&g%f==0)
        {
            return g;
            break;
        }
    }
}
int main()
{
    int t,m,n,i,j,k,l,l1,temp,a,b,c,d;
    scanf("%d",&t);
    char s[100],s1[100],s2[410],s3[410];
    for(k=0;k<t;k++)
    {
        scanf("%s %s",s,s1);
        l=strlen(s);
        l1=strlen(s1);
        n=lcm(l,l1);
        strcpy(s2,s);
        strcpy(s3,s1);
       // printf("s-%s s2=%s s1-%s s3-%s\n",s,s2,s1,s3);


        for(i=1;i<(n/l1);i++)
        {
            strcat(s3,s1);
        }
        for(i=1;i<(n/l);i++)
        {
             strcat(s2,s);
        }
//printf("s-%s s2=%s s1-%s s3-%s\n",s,s2,s1,s3);
        if(strcmp(s2,s3)==0)
        {
            printf("%s\n",s2);
        }
        else
        {
            printf("-1\n");
        }
     }
    return 0;
}
