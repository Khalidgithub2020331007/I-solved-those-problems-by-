#include<stdio.h>
char to_upper(char ch)
{
    return ch&95;
}
char to_lower(char ch)
{
    return ch|32;
}
int main()
{
     char *str="gvyfgioybwerrfewrhunnwf";
     for(int i=0;i<strlen(str);i++)
     {
         printf("uppercase:%c\n",to_upper(str[i]));
         printf("lowercase:%c\n",to_lower(str[i]));
     }
    return 0;
}
