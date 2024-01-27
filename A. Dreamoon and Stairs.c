#include<stdio.h>
int main()
{
  int n,m;
  scanf("%d %d",&n,&m);
  if(m>n)
  {
      printf("-1\n");
  }
  else if(n==m)
  {
      printf("%d\n",n);
  }
  else

  {
       printf("%d\n",(n/2)%m==0&& n%2==0?n/2:n/2+m-(n/2)%m);
  }
    return 0;

}
