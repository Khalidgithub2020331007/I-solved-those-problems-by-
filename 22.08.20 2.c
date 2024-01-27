#include <stdio.h>
  int main ()
   {

        char a,b,c;
        for(a='A';a<='X';a++)
        {
              for(b=a+1;b<='Y';b++)
              {
                        for(c=b+1;c<='Z';c++)
                         {
                                 printf("%c%c%c ",a,b,c);
                          }
              }
        }
        return 0;
  }
