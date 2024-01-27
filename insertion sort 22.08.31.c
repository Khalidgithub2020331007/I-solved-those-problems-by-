
#include<stdio.h>

struct nametype
{
    char first[20];
    char last[23];

};
struct student
{
    int id;
    struct nametype name;
};

int main()
{

struct student one[5];
int i,n;
printf("\nn=");
scanf("%d",&n);
for(i=0;i<n;i++)
{
    printf("ID of %d student is ",i+1);
    scanf("%d",&one[i].id);
     printf("\nFirst Name  of %d is ",i+1);

scanf("%s",one[i].name.first);
 printf("\nLast Name  of %d is ",i+1);
scanf("%s",one[i].name.last);

}
for(i=0;i<n;i++)
{
   printf("\nID of %d student is %d",i+1,one[i].id);
   printf("\n Name  of %d is %s %s",i+1,one[i].name.first,one[i].name.last);
}

return 0;

}

