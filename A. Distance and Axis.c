#include<stdio.h>
#include<math.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
      int a,b;
      scanf("%d %d",&a,&b);
      printf("%d\n",b==0&&a%2==0?0:abs(a-b));
    }
    return 0;
}
