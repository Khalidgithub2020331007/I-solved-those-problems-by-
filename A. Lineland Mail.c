
#include<stdio.h>
#include<math.h>
int main()
{
    int t;
    int i;
    scanf("%d",&t);
    int a[t];
    for(i=0;i<t;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("%d %d\n",abs(a[0]-a[1]),abs(a[t-1]-a[0]));
    for(i=1;i<t-1;i++)
    {
        int max,min;
        max=abs(a[i]-a[0])>abs(a[i]-a[t-1])?abs(a[i]-a[0]:abs(a[i]-a[t-1]);
        min=abs(a[i]-a[i-1])<abs(a[i]-a[i+1])?abs(a[i]-a[i-1]:abs(a[i]-a[i+1]);
        printf("%d %d",min,max);
    } printf("%d %d\n",abs(a[t-1]-a[t-2]),abs(a[t-1]-a[0]));
     return 0;
}
