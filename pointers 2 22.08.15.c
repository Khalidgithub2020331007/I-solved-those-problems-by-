#include<stdio.h>
char x[]="This string is declared extarnaly \n";

int main()
{

     char y[]="THISbstring is declared within main";
    printf("%s",x);
    printf("%s",y);
}
