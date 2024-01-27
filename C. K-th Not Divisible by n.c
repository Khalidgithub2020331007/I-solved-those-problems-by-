#include<stdio.h>
int main()
{
    int n,m,i,j,k,l;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d %d",&k,&l);
        j=l/(k-1);
        if(l<k)
        {
             printf("%d\n",l);
        }
        else if(l==k)
        {
             printf("%d\n",l+1);
        }
        else if(l==1)
        {
            printf("1\n");
        }
        else if(l%k==0||k==2)
        {
            printf("%d\n",l+j-1);
        }

        else
        {

            printf("%d\n",j+l);
        }

    }
    return 0;
}
