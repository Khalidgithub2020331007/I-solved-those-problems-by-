#include<stdio.h>
int main()
{
    int t,m,k;
    scanf("%d",&t);
    for(k=0;k<t;k++)
    {
        scanf("%d",&m);
        if( 1900<=m)
            printf("Division 1\n");
        else if(  1600<=m&&m<=1899)
            printf("Division 2\n");
            else if( 1400<=m&&m<=1599)
            printf("Division 3\n");
            else if(  m<=1399)
            printf("Division 4\n");
    }
    return 0;
}
