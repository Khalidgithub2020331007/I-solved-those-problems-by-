#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int i,j=0;
    int n,m;
    printf("How many numbers of 5 digits do you want?\n");
    scanf("%d",&n);
    for(;j<n;)
    {
        m=rand();
                    printf("%d -%d\n",j+1,m);
            j++;

////        if( (m/10000<6)&&(m%10<6)&&((m%100)/10<6)&&((m%1000)/100<6)&&((m%10000)/1000<6)&&m/10000!=0 )
//        {
//        }
    }
    return 0;
}
