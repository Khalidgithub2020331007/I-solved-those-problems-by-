#include<stdio.h>
int m;
int main()
{
    int i,j;
    char s[50],s1[3];
    for(i=0;i<2;i++)
    {
        scanf(" %c",&s1[i]);
    }
    for(i=0;i<10;i++)
    {
         scanf(" %c",&s[i]);
    }
//    for(i=0;i<2;i++)
//    {
//        printf("%c",s[i]);
//    }
//    puts("");
//    for(i=0;i<14;i++)
//    {
//         printf("%c",s[i]);
//    }
      for(i=0;i<2;i++)
      {
          for(j=0;j<10;j++)
          {
              if(s1[i]==s[j])
              {
                  printf("YES");
                  m=1;
                  break;
              }
              if(m==1)
              {
                  break;
              }
          }
      }
      if(m==0)
      {
          printf("NO");
      }
    return 0;
}
