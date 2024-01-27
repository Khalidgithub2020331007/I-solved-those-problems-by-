#include<stdio.h>
int main() {
   int s;
   int m = 28;
   int val;
   printf("The value of %ns and %nm %nval : ", &s, &m, &val);
   printf("%d\t%d\t%d", s, m, val);
   return 0;
}
