#include<stdio.h>
#include<math.h>
int main()
{
    int x;
    scanf("%d",&x);
    int i=1,a;
    for(;;)
    {
        if(x-(5*i)<=0)
        {
            a=ceil((double)x/i);
          //  printf("i-%d  x/i-%d\n",i,a);

                if(a==1)
                {
                    printf("Sheldon\n");
                }
                else  if(a==2)
                {

                    printf("Leonard\n");
                }

                else  if(a==3)
                {
                    printf("Penny\n");
                }
                else  if(a==4)
                {
                    printf("Rajesh\n");
                }
                else  if(a==5)
                {
                    printf("Howard");
                }
                break;

        }
        else
        {
            x=x-(5*i);
            i*=2;
         //printf("i-%d x-%d\n",i,x);
        }
    }
    return 0;
}
