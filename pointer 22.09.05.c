#include<stdio.h>
#include<string.h>

struct nametype
{
    char first[20];
    char last[20];
};
typedef struct
{

    int id;
    struct nametype name;
}studenttype;

int main()
{
   studenttype student[5] ;
    int i;
    for(i=0;i<5;i++)
    {
        printf("Enter id  number of roll %d:",i+1);
        scanf("%d",&student[i].id);
         printf("Enter first name of %d:",i+1);
        scanf("%s",&student[i].name.first);
         printf("Enter last  name of %d:",i+1);
        scanf("%s",&student[i].name.last);

    }
    for(i=0;i<5;i++)
    {
        printf("ID of %d roll is %d\n",i+1,student[i].id);
         printf("Name of roll %d is %s %s\n",i+1,student[i].name.first, student[i].name.last);


    }

        return 0;
}
