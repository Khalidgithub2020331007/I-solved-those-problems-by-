#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
   switch(n%2==0&&n>6)
    {
        case 1:printf("YES");
        break;
        default:
            switch(n%3==0||n<=6)
            {
                case 1: printf("YES YES");
                break;
                case 0:printf("NO");
            }break;
        case 0:printf("NO");


    }

}
