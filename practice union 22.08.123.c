#include<stdio.h>
struct s1
{
    int n;
    double d;
    char c;

};
struct s2
{
    char c1;
     int n;
    char c2;
     double d;
    char c3;

    char c4;




};
int main()
{
    printf("Char size : %lu bytes\n",sizeof(char));
    printf("Int  size : %lu bytes\n",sizeof(int));
    printf("Double size : %lu bytes\n",sizeof(double));
    printf("s1 size : %lu bytes\n",sizeof(struct s1));
    printf("s2 size : %lu bytes\n",sizeof(struct s2));
    return 0;

}
