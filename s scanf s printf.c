#include<stdio.h>
int main()
{
    int x=2344524;
    char s[10];
sprintf(s,"%d",x);
printf("%s",s);
}
#include<stdio.h>
int main()
{
    int x;
    char s[10];
    scanf("%s",s);
    sscanf(s,"%d",&x);
 printf("%d",x);
}
