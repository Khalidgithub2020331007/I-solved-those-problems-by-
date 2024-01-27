#include<stdio.h>
typedef struct employ
{
    char *name;
    int age;
    int salary;

}employ;
int manager()
{

     struct employ manager;
    manager.age=37;
    if( manager.age>30)
    {
        manager.salary=65500;

    }
    else
     {
        manager.salary=55500;

    }
    return manager.salary;


}
int main()
{
    struct employ employ1;
    struct employ employ2;
     printf("Enter the salary of employee 1:  ");
     scanf("%d",&employ1.salary);
      printf("Enter the salary of employee 2:  ");
     scanf("%d",&employ2.salary);
      printf(" salary of employee 1: %d \n",employ1.salary);
     printf("salary of employee 2: %d \n",employ2.salary);
           printf(" salary of manager : %d ",manager());

}

