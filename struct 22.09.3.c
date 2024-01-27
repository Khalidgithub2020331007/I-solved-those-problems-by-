#include<stdio.h>
//global structure
struct person{
   int age;
   int salary;

};
int main()
{
    struct person{
   int age;
   int salary;

};
    struct person person1;
    person1.age=435;
    person1.salary=3453454;
    printf("Age=%d\n",person1.age);
    printf("`salary -%d",person1.salary);
}
