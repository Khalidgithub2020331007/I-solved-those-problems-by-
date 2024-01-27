
#include<stdio.h>
#define EOLN 'ln'
void reverse(void);
int main()
{
    printf("please enter 3 line of text below\n ");
    reverse();
}
void reverse(void)
{
    char c;
    if((c=getchar())!=EOLN) reverse();
    putchar(c);
    return 0;
}
