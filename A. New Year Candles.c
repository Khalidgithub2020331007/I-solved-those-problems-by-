#include<stdio.h>

int main()
{
    int n,m,i,j,k;
    scanf("%d %d",&m,&n);
    int l=0;
    k=m;
    for(i=1;i<=k;i++)
    {
          if(m<n)
        {


            break;
        }
        m=m-n+1;

             l++;




    }
    printf("%d",k+l);
}
