#include<stdio.h>
struct car
{
    int liter;
    char *name;
    char *type;

}c[10];
int main()
{
    int i;
    for(i=0;i<4;i++)
    {
        printf("%d-liter:",i+1);
        scanf("%d",&c[i].liter);
        puts("");
        printf("%d-name:",i+1);
        scanf("%s",&c[i].name);
        puts("");
        printf("%d-type:",i+1);
        scanf("%s",&c[i].type);
        puts("");

    }
    for(i=0;i<4;i++)
    {
        printf("%d-liter:%d",i+1,c[i].liter);

        puts("");
        printf("%d-name:%s",i+1,c[i].name);

        puts("");
        printf("%d-type:%s",i+1,c[i].type);

        puts("");

    }
    return 0;


}
