#include<stdio.h>
int main()
{
    int n,m,i,j,k,l;
    char  s[101],s1[101],s2[101];
    scanf("%d",&n);
      scanf("%s",s);
      k=0;
      l=0;
      if(n==1)
      {
          printf("%s\n",s);
      }

      else
      {
          for(i=1;i<n;i++)
         {
              scanf("%s",s1);
              if(strcmp(s,s1)==0)
              {
                  k++;
              }
              else
              {
                  strcpy(s2,s1);
                  l++;
              }
         }
         if(k>=l)
         {

          printf("%s\n",s);

         }
         else
         {
                printf("%s\n",s2);
         }
      }


         return 0;


}
