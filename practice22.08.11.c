//#include<stdio.h>
//int main()
//{
//    struct student{
//       int id;
//       char name[40];
//        };
//        struct student one;
//        one.id=1;
//        strcpy(one.name,"khalid Azad");
//        printf("ID:%d\n",one.id);
//
//        printf("Name:%s",one.name);
//        return 0;
//
//}
#include<stdio.h>
#include<string.h>
struct student
{
 int id;
 char name[40]
    };
    int main()
    {
        struct student one;
        scanf("ID:%d",&one.id);
        scanf("Name:%s",one.name);
        printf("ID:%d",one.id);
        printf("Name:%s",one.name);
        return 0;

    }
