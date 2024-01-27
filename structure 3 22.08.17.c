
#include<stdio.h>

int main()
{
    int x,y,z[20]={3,2,9,6,4,1,7,3,8},*f,*g,*h;
    f=z+3;
    printf("*f=%d\n",*f);
    g=f+1;
        printf("*g=%d\n",*g);
    h=g-2;
        printf("*h=%d\n",*h);

    x=*(++g)-(*f)--;
    printf("x=%d\n",x);
    printf("*(++g)=%d (*f)=%d\n",*g,*f);
    printf("f=%d\n",f);
    f=g-h+z;
    printf("f=%d\n",f);
    printf("*f=%d\n",*f);

    y=--x+--(*g);
    printf("y=%d\n",y);
    *(h++)=y+5;
    printf("*h=%d  y+5=%d\n",*(h-1),y+5);
    *g=*f+*h-*(h-1);




printf("x=%02d, y=%02d, *f=%02d,  *g=%02d,  *h=%02d ",x,y,*f,*g,*h);

return 0;
}
