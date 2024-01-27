#include <stdio.h>
int main()
{

   char a[110][110];
    int i,j,x,c,d;
   scanf("%d %d",&c,&d);

   for(i=0;i<c;i++)
    {
      for(j=0;j<d;j++)
      {
           scanf(" %c",&a[i][j]);
      }
   }
   x=0;

   for(i=0;i<c;i++)
    {
      for(j=0;j<d;j++)
      {
         if(a[i][j]=='C'||a[i][j]=='M'||a[i][j]=='Y')
         {
             printf("#Color");
             x=1;
             break;
         }
      }
      if(x==1)
      {
          break;
      }
   }
   if(x==0)
   {
       printf("#Black&White");
   }

   return 0;
}
