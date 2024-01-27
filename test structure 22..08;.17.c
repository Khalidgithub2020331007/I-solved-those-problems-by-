#include<stdio.h>
struct abc
{
    int x,y,z;
};
int main()
{


    struct abc var={.y=0,.z=1 , .x=02};
    printf("%d %d %d",var.x,var.y,var.z);
    return 0;

}
